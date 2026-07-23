/*
 * XREFs of CcSetPrivateWriteFile @ 0x1401B22F0
 * Callers:
 *     HvViewMapStart @ 0x14060FD68 (HvViewMapStart.c)
 * Callees:
 *     CcUnmapVacbArray @ 0x140017B40 (CcUnmapVacbArray.c)
 *     CcFlushCache @ 0x14008EB94 (CcFlushCache.c)
 *     MmDisableModifiedWriteOfSection @ 0x1400A8C2C (MmDisableModifiedWriteOfSection.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x14010F574 (CcWaitForCurrentLazyWriterActivity.c)
 *     FsRtlAcquireFileExclusive @ 0x14042CD18 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x14042CD30 (FsRtlReleaseFile.c)
 */

char __fastcall CcSetPrivateWriteFile(PFILE_OBJECT FileObject)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rdi
  __int64 SharedCacheMap; // rdi
  KIRQL v4; // dl
  char v5; // si
  KIRQL v6; // al

  FsRtlAcquireFileExclusive(FileObject);
  SectionObjectPointer = FileObject->SectionObjectPointer;
  if ( SectionObjectPointer && (SharedCacheMap = (__int64)SectionObjectPointer->SharedCacheMap) != 0 )
  {
    CcUnmapVacbArray(SharedCacheMap, 0LL, 0, 0, 1);
    CcFlushCache(FileObject->SectionObjectPointer, 0LL, 0, 0LL);
    v4 = KeAcquireQueuedSpinLock(5uLL);
    if ( (*(_DWORD *)(SharedCacheMap + 152) & 0x4020) != 0 )
    {
      KeReleaseQueuedSpinLock(5uLL, v4);
      FsRtlReleaseFile(FileObject);
      CcWaitForCurrentLazyWriterActivity();
      FsRtlAcquireFileExclusive(FileObject);
    }
    else
    {
      KeReleaseQueuedSpinLock(5uLL, v4);
    }
    v5 = MmDisableModifiedWriteOfSection(&FileObject->SectionObjectPointer->DataSectionObject);
    if ( v5 )
    {
      v6 = KeAcquireQueuedSpinLock(5uLL);
      *(_DWORD *)(SharedCacheMap + 152) |= 0x2002u;
      KeReleaseQueuedSpinLock(5uLL, v6);
    }
    FsRtlReleaseFile(FileObject);
    return v5;
  }
  else
  {
    FsRtlReleaseFile(FileObject);
    return 0;
  }
}
