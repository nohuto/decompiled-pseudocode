/*
 * XREFs of CcSetPrivateWriteFile @ 0x1401DDBC0
 * Callers:
 *     HvViewMapStart @ 0x140663100 (HvViewMapStart.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     CcUnmapVacbArray @ 0x140086690 (CcUnmapVacbArray.c)
 *     CcFlushCache @ 0x1400F8B70 (CcFlushCache.c)
 *     MmDisableModifiedWriteOfSection @ 0x140125D24 (MmDisableModifiedWriteOfSection.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140133BA4 (CcWaitForCurrentLazyWriterActivity.c)
 *     FsRtlAcquireFileExclusive @ 0x1404B32E0 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x1404B32F0 (FsRtlReleaseFile.c)
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
    CcUnmapVacbArray(SharedCacheMap, 0LL, 0, 0LL, 1);
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
