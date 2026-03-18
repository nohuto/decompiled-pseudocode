/*
 * XREFs of CcClearPrivateWriteFile @ 0x1401DD72C
 * Callers:
 *     HvViewMapCleanup @ 0x14055B2E4 (HvViewMapCleanup.c)
 *     HvViewMapStart @ 0x140663100 (HvViewMapStart.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     MmEnableModifiedWriteOfSection @ 0x140216DA8 (MmEnableModifiedWriteOfSection.c)
 *     FsRtlAcquireFileExclusive @ 0x1404B32E0 (FsRtlAcquireFileExclusive.c)
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
