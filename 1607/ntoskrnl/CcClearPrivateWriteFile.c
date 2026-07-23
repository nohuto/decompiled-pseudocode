/*
 * XREFs of CcClearPrivateWriteFile @ 0x1401B1EBC
 * Callers:
 *     HvViewMapCleanup @ 0x1404D0F70 (HvViewMapCleanup.c)
 *     HvViewMapStart @ 0x14060FD68 (HvViewMapStart.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     MmEnableModifiedWriteOfSection @ 0x1401E5A88 (MmEnableModifiedWriteOfSection.c)
 *     FsRtlAcquireFileExclusive @ 0x14042CD18 (FsRtlAcquireFileExclusive.c)
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
