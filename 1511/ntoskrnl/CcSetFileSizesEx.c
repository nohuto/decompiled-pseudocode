/*
 * XREFs of CcSetFileSizesEx @ 0x1400AED28
 * Callers:
 *     CcSetFileSizes @ 0x1400F3BA4 (CcSetFileSizes.c)
 * Callees:
 *     CcDeleteMbcb @ 0x14000D6AC (CcDeleteMbcb.c)
 *     CcPurgeCacheSection @ 0x14000EA84 (CcPurgeCacheSection.c)
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     MmFlushSection @ 0x1400A8E90 (MmFlushSection.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400B0D78 (CcDecrementOpenCount.c)
 *     CcUnmapVacbArray @ 0x1400B1DF0 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x1400E0744 (CcExtendVacbArray.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E7B9C (CcPurgeAndClearCacheSection.c)
 *     FsRtlIsNtstatusExpected @ 0x1400E9E10 (FsRtlIsNtstatusExpected.c)
 *     CcDeleteBcbs @ 0x140107150 (CcDeleteBcbs.c)
 *     MmExtendSection @ 0x1403C7408 (MmExtendSection.c)
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
  NTSTATUS v12; // eax
  LARGE_INTEGER v13; // rcx
  NTSTATUS v14; // eax
  NTSTATUS v15; // edi
  NTSTATUS v16; // [rsp+30h] [rbp-10h]
  LARGE_INTEGER FileOffset; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp+48h] BYREF

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
    v13 = SharedCacheMap[21];
    v18 = (AllocationSize.QuadPart + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmExtendSection)((LARGE_INTEGER)v13.QuadPart, &v18, 1LL);
    v15 = v14;
    if ( v14 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v14) )
        v15 = -1073741588;
    }
    else
    {
      v15 = CcExtendVacbArray(SharedCacheMap, v18);
    }
    v8 = KeAcquireQueuedSpinLock(5uLL);
    CcDecrementOpenCount(SharedCacheMap);
    if ( v15 < 0 )
    {
      KeReleaseQueuedSpinLock(5uLL, v8);
      RtlRaiseStatus(v15);
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
        if ( (unsigned __int8)CcUnmapVacbArray((_DWORD)SharedCacheMap, (unsigned int)&FileOffset, 0, 0, 0) )
        {
          if ( !FileSize.QuadPart )
          {
            if ( SharedCacheMap[20].QuadPart )
              CcDeleteMbcb((__int64)SharedCacheMap);
            if ( (LARGE_INTEGER *)SharedCacheMap[2].QuadPart != &SharedCacheMap[2] )
              CcDeleteBcbs(SharedCacheMap);
          }
          v12 = CcPurgeAndClearCacheSection(SharedCacheMap, &FileOffset);
          FileSize = FileOffset;
          v5 = v12;
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
    result = v16;
    if ( v16 >= 0 )
      return CcPurgeCacheSection(FileObject->SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
  }
  return result;
}
