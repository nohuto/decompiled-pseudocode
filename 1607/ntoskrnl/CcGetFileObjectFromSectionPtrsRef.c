/*
 * XREFs of CcGetFileObjectFromSectionPtrsRef @ 0x140133324
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 */

PFILE_OBJECT __stdcall CcGetFileObjectFromSectionPtrsRef(PSECTION_OBJECT_POINTERS SectionObjectPointer)
{
  struct _FILE_OBJECT *v2; // rdi
  KIRQL v3; // si
  _QWORD *SharedCacheMap; // rax

  v2 = 0LL;
  v3 = KeAcquireQueuedSpinLock(5uLL);
  SharedCacheMap = SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    v2 = (struct _FILE_OBJECT *)(SharedCacheMap[12] & 0xFFFFFFFFFFFFFFF0uLL);
    ObfReferenceObjectWithTag(v2, 0x746C6644u);
  }
  KeReleaseQueuedSpinLock(5uLL, v3);
  return v2;
}
