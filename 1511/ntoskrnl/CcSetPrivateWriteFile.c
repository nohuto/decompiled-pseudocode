/*
 * XREFs of CcSetPrivateWriteFile @ 0x1401A96C8
 * Callers:
 *     HvViewMapStart @ 0x1405EB210 (HvViewMapStart.c)
 * Callees:
 *     MmDisableModifiedWriteOfSection @ 0x14000A624 (MmDisableModifiedWriteOfSection.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcUnmapVacbArray @ 0x1400B1DF0 (CcUnmapVacbArray.c)
 *     CcFlushCache @ 0x1400E8FD4 (CcFlushCache.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140103C60 (CcWaitForCurrentLazyWriterActivity.c)
 *     FsRtlAcquireFileExclusive @ 0x1403F9138 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x1403F9150 (FsRtlReleaseFile.c)
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
    v5 = MmDisableModifiedWriteOfSection((__int64)FileObject->SectionObjectPointer);
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
