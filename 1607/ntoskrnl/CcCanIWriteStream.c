/*
 * XREFs of CcCanIWriteStream @ 0x140020620
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14002030C (CcNotifyOfMappedWrite.c)
 *     CcCanIWrite @ 0x140020570 (CcCanIWrite.c)
 *     CcMapAndCopyInToCache @ 0x140034AE0 (CcMapAndCopyInToCache.c)
 *     CcScheduleReadAheadEx @ 0x14006E990 (CcScheduleReadAheadEx.c)
 *     CcShouldLazyWriteCacheMap @ 0x140070F30 (CcShouldLazyWriteCacheMap.c)
 *     CcPrepareMdlWrite @ 0x1400AF55C (CcPrepareMdlWrite.c)
 *     CcCopyWriteWontFlush @ 0x1400E9BD0 (CcCopyWriteWontFlush.c)
 *     CcPostDeferredWrites @ 0x1401B19E8 (CcPostDeferredWrites.c)
 * Callees:
 *     MmEnoughMemoryForWrite @ 0x140020790 (MmEnoughMemoryForWrite.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 */

bool __fastcall CcCanIWriteStream(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // rbp
  char v6; // r9
  char v7; // bl
  unsigned int v8; // edi
  KIRQL v10; // r13
  unsigned int v11; // r8d
  unsigned int v12; // edi
  bool v13; // r14
  __int64 v15; // rcx
  unsigned int v16; // edx
  char v17; // al
  KIRQL v18; // al
  int v19; // eax
  char v20; // [rsp+58h] [rbp+10h]

  v4 = 0LL;
  v6 = 0;
  v7 = 0;
  v20 = 0;
  v8 = a2;
  v10 = 0;
  v11 = ((a3 & 0xFFF) != 0) + (a3 >> 12);
  if ( a2 > 0x1000000 )
    v8 = 0x1000000;
  v12 = ((v8 & 0xFFF) != 0) + (v8 >> 12);
  v13 = CcGlobalDirtyPageStatistics + v12 + (unsigned __int64)v11 >= CcGlobalDirtyPageThresholds;
  if ( a1 )
  {
    if ( (a4 & 3) == 0
      && (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 4) == 0
      && CcGlobalDirtyPageStatistics + v12 + (unsigned __int64)v11 < CcGlobalDirtyPageThresholds )
    {
LABEL_7:
      v7 = MmEnoughMemoryForWrite(0LL);
      return v7 != 0;
    }
    if ( (a4 & 1) == 0 )
    {
      v18 = KeAcquireQueuedSpinLock(5uLL);
      v6 = 0;
      v10 = v18;
    }
    v4 = *(_QWORD *)(a1 + 40);
    if ( v4 )
    {
      v15 = *(_QWORD *)(v4 + 8);
      if ( v15 )
      {
        v16 = *(_DWORD *)(v15 + 264);
        if ( v16 )
        {
          v19 = *(_DWORD *)(v15 + 112);
          if ( v19 )
          {
            if ( v12 + v19 > v16 )
              v6 = 1;
            v20 = v6;
          }
        }
        if ( *(_QWORD *)(*(_QWORD *)(v15 + 504) + 32LL) <= (unsigned __int64)(unsigned int)CcMaxLazyWritePages
          && (a4 & 4) == 0 )
        {
          v13 = 0;
        }
      }
      v17 = MmEnoughMemoryForWrite(v4);
      v6 = v20;
      v7 = v17;
    }
    if ( (a4 & 1) == 0 )
    {
      KeReleaseQueuedSpinLock(5uLL, v10);
      v6 = v20;
    }
    if ( v6 )
      return 0;
  }
  if ( v13 )
    return 0;
  if ( !v4 )
    goto LABEL_7;
  return v7 != 0;
}
