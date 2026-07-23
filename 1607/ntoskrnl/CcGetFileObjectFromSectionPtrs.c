/*
 * XREFs of CcGetFileObjectFromSectionPtrs @ 0x1401B152C
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 */

PFILE_OBJECT __stdcall CcGetFileObjectFromSectionPtrs(PSECTION_OBJECT_POINTERS SectionObjectPointer)
{
  struct _FILE_OBJECT *v2; // rdi
  KIRQL v3; // al
  _QWORD *SharedCacheMap; // rdx

  v2 = 0LL;
  v3 = KeAcquireQueuedSpinLock(5uLL);
  SharedCacheMap = SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    v2 = (struct _FILE_OBJECT *)(SharedCacheMap[12] & 0xFFFFFFFFFFFFFFF0uLL);
    *((_DWORD *)SharedCacheMap + 38) |= 0x100000u;
  }
  KeReleaseQueuedSpinLock(5uLL, v3);
  return v2;
}
