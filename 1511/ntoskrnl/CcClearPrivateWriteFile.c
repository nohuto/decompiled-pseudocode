/*
 * XREFs of CcClearPrivateWriteFile @ 0x1401A92AC
 * Callers:
 *     HvViewMapCleanup @ 0x1404C3A78 (HvViewMapCleanup.c)
 *     HvViewMapStart @ 0x1405EB210 (HvViewMapStart.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     MmEnableModifiedWriteOfSection @ 0x1401D5008 (MmEnableModifiedWriteOfSection.c)
 *     FsRtlAcquireFileExclusive @ 0x1403F9138 (FsRtlAcquireFileExclusive.c)
 */

void __fastcall CcClearPrivateWriteFile(struct _FILE_OBJECT *a1)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _DWORD *SharedCacheMap; // rdi
  KIRQL v4; // al
  int v5; // edx

  FsRtlAcquireFileExclusive(a1);
  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer )
  {
    SharedCacheMap = SectionObjectPointer->SharedCacheMap;
    if ( SharedCacheMap )
    {
      v4 = KeAcquireQueuedSpinLock(5uLL);
      v5 = SharedCacheMap[38];
      if ( (v5 & 0x2000) != 0 )
      {
        SharedCacheMap[38] = v5 & 0xFFFFDFFD;
        KeReleaseQueuedSpinLock(5uLL, v4);
        MmEnableModifiedWriteOfSection(a1->SectionObjectPointer);
      }
      else
      {
        KeReleaseQueuedSpinLock(5uLL, v4);
      }
    }
  }
  FsRtlReleaseFile(a1);
}
