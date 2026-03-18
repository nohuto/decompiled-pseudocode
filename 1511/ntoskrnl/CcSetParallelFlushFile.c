/*
 * XREFs of CcSetParallelFlushFile @ 0x1400AFCC4
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 */

void __stdcall CcSetParallelFlushFile(PFILE_OBJECT FileObject, BOOLEAN EnableParallelFlush)
{
  _DWORD *SharedCacheMap; // rdi
  KIRQL v4; // si

  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v4 = KeAcquireQueuedSpinLock(5uLL);
  if ( EnableParallelFlush )
    SharedCacheMap[38] |= 0x40000u;
  else
    SharedCacheMap[38] &= ~0x40000u;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 10);
  __writecr8(v4);
}
