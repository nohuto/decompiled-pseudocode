/*
 * XREFs of CcPurgeCacheSection @ 0x1400724A0
 * Callers:
 *     CcZeroEndOfLastPage @ 0x1400243D0 (CcZeroEndOfLastPage.c)
 *     CcPurgeAndClearCacheSection @ 0x14006C3C0 (CcPurgeAndClearCacheSection.c)
 *     CcUninitializeCacheMap @ 0x140070140 (CcUninitializeCacheMap.c)
 *     CcSetFileSizesEx @ 0x140072FCC (CcSetFileSizesEx.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x14008EAC4 (CcCoherencyFlushAndPurgeCache.c)
 *     CcDeleteSharedCacheMap @ 0x1400CABD4 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     CcUnmapVacbArray @ 0x140017B40 (CcUnmapVacbArray.c)
 *     CcUninitializeCacheMap @ 0x140070140 (CcUninitializeCacheMap.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     CcDecrementOpenCount @ 0x140073218 (CcDecrementOpenCount.c)
 *     MmCanFileBeTruncated @ 0x140073274 (MmCanFileBeTruncated.c)
 *     MmTrimSection @ 0x14008EBB0 (MmTrimSection.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 */

BOOLEAN __stdcall CcPurgeCacheSection(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags)
{
  __int64 v5; // r15
  int v6; // ebp
  char v7; // r12
  KIRQL v9; // al
  char *SharedCacheMap; // rdi
  BOOLEAN v11; // si
  KIRQL v12; // r14
  int v13; // r14d
  int v14; // r8d
  KIRQL v15; // bl
  KIRQL v16; // dl
  LONGLONG QuadPart; // rax
  _QWORD *i; // r14
  LONGLONG v20; // [rsp+60h] [rbp+8h] BYREF

  v5 = Length;
  v6 = 0;
  v7 = Flags;
  v9 = KeAcquireQueuedSpinLock(5uLL);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  v11 = 1;
  v12 = v9;
  if ( SharedCacheMap )
  {
    if ( (*((_DWORD *)SharedCacheMap + 38) & 0x2000) != 0 )
    {
      if ( ((unsigned __int8)FileOffset & 1) == 0 )
      {
LABEL_35:
        v16 = v12;
LABEL_20:
        KeReleaseQueuedSpinLock(5uLL, v16);
        return v11;
      }
      FileOffset = (PLARGE_INTEGER)((unsigned __int64)FileOffset ^ 1);
    }
    ++*((_DWORD *)SharedCacheMap + 1);
  }
  KeReleaseQueuedSpinLock(5uLL, v9);
  if ( !SharedCacheMap )
    goto LABEL_10;
  if ( (v7 & 1) != 0 )
  {
    for ( i = SharedCacheMap + 224; (_QWORD *)*i != i; CcUninitializeCacheMap(*(PFILE_OBJECT *)(*i - 88LL), 0LL, 0LL) )
      ;
  }
  if ( (v7 & 8) == 0 )
  {
    CcUnmapVacbArray((__int64)SharedCacheMap, (__int64 *)FileOffset, v5, 0, 1);
    goto LABEL_8;
  }
  if ( (int)MmTrimSection(SectionObjectPointer, FileOffset, v5, 0LL) < 0 )
  {
    v12 = KeAcquireQueuedSpinLock(5uLL);
    CcDecrementOpenCount(SharedCacheMap);
    v11 = 0;
    goto LABEL_35;
  }
LABEL_8:
  if ( FileOffset )
    v6 = 1;
LABEL_10:
  if ( (v7 & 4) != 0 )
    v6 |= 2u;
  v13 = -1;
  v14 = v5;
  if ( (v7 & 4) != 0 )
    v13 = 5;
  while ( 1 )
  {
    v11 = MmPurgeSection((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, v14, v6, (__int64)&v20);
    if ( v11 )
      break;
    if ( (_DWORD)v5 )
      break;
    if ( !MmCanFileBeTruncated(SectionObjectPointer, FileOffset) )
      break;
    if ( (v7 & 2) != 0 )
      break;
    KeDelayExecutionThread(0, 0, &CcCollisionDelay);
    if ( !--v13 )
      break;
    v14 = 0;
  }
  if ( SharedCacheMap )
  {
    if ( !(_DWORD)v5 )
    {
      if ( FileOffset )
      {
        QuadPart = FileOffset->QuadPart;
        if ( FileOffset->QuadPart < *((_QWORD *)SharedCacheMap + 46) )
        {
          v20 = QuadPart + 0x3FFFF;
          LODWORD(v20) = (QuadPart + 0x3FFFF) & 0xFFFC0000;
          *((_QWORD *)SharedCacheMap + 46) = v20 + 0x40000;
        }
      }
      else
      {
        *((_QWORD *)SharedCacheMap + 46) = 0LL;
      }
    }
    v15 = KeAcquireQueuedSpinLock(5uLL);
    CcDecrementOpenCount(SharedCacheMap);
    v16 = v15;
    goto LABEL_20;
  }
  return v11;
}
