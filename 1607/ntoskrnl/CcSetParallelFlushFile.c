/*
 * XREFs of CcSetParallelFlushFile @ 0x1400E6C6C
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 */

void __stdcall CcSetParallelFlushFile(PFILE_OBJECT FileObject, BOOLEAN EnableParallelFlush)
{
  _DWORD *SharedCacheMap; // rdi
  KIRQL v4; // al

  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v4 = KeAcquireQueuedSpinLock(5uLL);
  if ( EnableParallelFlush )
    SharedCacheMap[38] |= 0x40000u;
  else
    SharedCacheMap[38] &= ~0x40000u;
  KeReleaseQueuedSpinLock(5uLL, v4);
}
