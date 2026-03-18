/*
 * XREFs of CcGetFileObjectFromSectionPtrsRef @ 0x140130624
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
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
