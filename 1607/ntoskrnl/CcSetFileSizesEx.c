/*
 * XREFs of CcSetFileSizesEx @ 0x140072FCC
 * Callers:
 *     CcSetFileSizes @ 0x1400B32F4 (CcSetFileSizes.c)
 * Callees:
 *     CcUnmapVacbArray @ 0x140017B40 (CcUnmapVacbArray.c)
 *     MmFlushSection @ 0x1400220D8 (MmFlushSection.c)
 *     CcPurgeAndClearCacheSection @ 0x14006C3C0 (CcPurgeAndClearCacheSection.c)
 *     CcExtendVacbArray @ 0x14006CA98 (CcExtendVacbArray.c)
 *     CcPurgeCacheSection @ 0x1400724A0 (CcPurgeCacheSection.c)
 *     CcDecrementOpenCount @ 0x140073218 (CcDecrementOpenCount.c)
 *     FsRtlIsNtstatusExpected @ 0x1400A9C60 (FsRtlIsNtstatusExpected.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     CcDeleteMbcb @ 0x14010C600 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x1401122D8 (CcDeleteBcbs.c)
 *     MmExtendSection @ 0x14050494C (MmExtendSection.c)
 */

NTSTATUS __stdcall CcSetFileSizesEx(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  LARGE_INTEGER FileSize; // rbx
  LARGE_INTEGER AllocationSize; // rdi
  NTSTATUS v5; // r12d
  LARGE_INTEGER ValidDataLength; // rsi
  KIRQL v7; // al
  KIRQL v8; // r15
  LARGE_INTEGER *SharedCacheMap; // r14
  LARGE_INTEGER v10; // rax
  NTSTATUS result; // eax
  __int64 v12; // r8
  NTSTATUS v13; // eax
  LARGE_INTEGER v14; // rcx
  NTSTATUS v15; // eax
  NTSTATUS v16; // edi
  NTSTATUS v17; // [rsp+30h] [rbp-10h]
  LARGE_INTEGER FileOffset; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  FileSize = FileSizes->FileSize;
  AllocationSize = FileSizes->AllocationSize;
  v5 = 0;
  ValidDataLength = FileSizes->ValidDataLength;
  FileOffset = FileSize;
  v7 = KeAcquireQueuedSpinLock(5uLL);
  v8 = v7;
  SharedCacheMap = (LARGE_INTEGER *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap && SharedCacheMap[21].QuadPart )
  {
    if ( AllocationSize.QuadPart >= SharedCacheMap[1].QuadPart )
      v5 = 0;
    if ( AllocationSize.QuadPart <= SharedCacheMap[4].QuadPart )
      goto LABEL_6;
    ++SharedCacheMap->HighPart;
    KeReleaseQueuedSpinLock(5uLL, v7);
    v14 = SharedCacheMap[21];
    v19 = (AllocationSize.QuadPart + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmExtendSection)((LARGE_INTEGER)v14.QuadPart, &v19, 1LL);
    v16 = v15;
    if ( v15 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v15) )
        v16 = -1073741588;
    }
    else
    {
      v16 = CcExtendVacbArray((__int64)SharedCacheMap, v19);
    }
    v8 = KeAcquireQueuedSpinLock(5uLL);
    CcDecrementOpenCount(SharedCacheMap);
    if ( v16 < 0 )
    {
      KeReleaseQueuedSpinLock(5uLL, v8);
      RtlRaiseStatus(v16);
    }
    SharedCacheMap = (LARGE_INTEGER *)FileObject->SectionObjectPointer->SharedCacheMap;
    if ( SharedCacheMap )
    {
LABEL_6:
      ++SharedCacheMap->HighPart;
      v10 = SharedCacheMap[5];
      if ( v10.QuadPart != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( FileSize.QuadPart < v10.QuadPart )
          SharedCacheMap[5] = FileSize;
        SharedCacheMap[6] = ValidDataLength;
      }
      if ( FileSize.QuadPart < SharedCacheMap[1].QuadPart && (SharedCacheMap[19].LowPart & 4) == 0 )
      {
        KeReleaseQueuedSpinLock(5uLL, v8);
        if ( CcUnmapVacbArray((__int64)SharedCacheMap, (__int64 *)&FileOffset, 0, 0, 0) )
        {
          if ( !FileSize.QuadPart )
          {
            if ( SharedCacheMap[20].QuadPart )
              CcDeleteMbcb(SharedCacheMap);
            if ( (LARGE_INTEGER *)SharedCacheMap[2].QuadPart != &SharedCacheMap[2] )
              CcDeleteBcbs(SharedCacheMap);
          }
          v13 = CcPurgeAndClearCacheSection((__int64)SharedCacheMap, &FileOffset, v12);
          FileSize = FileOffset;
          v5 = v13;
        }
        v8 = KeAcquireQueuedSpinLock(5uLL);
      }
      SharedCacheMap[1] = FileSize;
      CcDecrementOpenCount(SharedCacheMap);
      KeReleaseQueuedSpinLock(5uLL, v8);
      return v5;
    }
    else
    {
      KeReleaseQueuedSpinLock(5uLL, v8);
      return 0;
    }
  }
  else
  {
    KeReleaseQueuedSpinLock(5uLL, v7);
    if ( (FileSize.LowPart & 0xFFF) == 0 )
      return CcPurgeCacheSection(FileObject->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
    MmFlushSection((__int64)FileObject->SectionObjectPointer, (va_list)&FileOffset, 1LL);
    result = v17;
    if ( v17 >= 0 )
      return CcPurgeCacheSection(FileObject->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
  }
  return result;
}
