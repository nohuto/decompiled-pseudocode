/*
 * XREFs of CcSetAdditionalCacheAttributes @ 0x14009A498
 * Callers:
 *     CcSetAdditionalCacheAttributesEx @ 0x14009A3D4 (CcSetAdditionalCacheAttributesEx.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __stdcall CcSetAdditionalCacheAttributes(
        PFILE_OBJECT FileObject,
        BOOLEAN DisableReadAhead,
        BOOLEAN DisableWriteBehind)
{
  _DWORD *SharedCacheMap; // rbx
  KIRQL v6; // al

  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap[1] )
    KeBugCheckEx(0x34u, 0x49uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = KeAcquireQueuedSpinLock(5uLL);
  if ( DisableReadAhead )
    SharedCacheMap[38] |= 1u;
  else
    SharedCacheMap[38] &= ~1u;
  if ( DisableWriteBehind )
    SharedCacheMap[38] |= 0x202u;
  else
    SharedCacheMap[38] &= ~2u;
  KeReleaseQueuedSpinLock(5uLL, v6);
}
