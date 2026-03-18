/*
 * XREFs of CcMdlWriteAbort @ 0x1401A97BC
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400B0D78 (CcDecrementOpenCount.c)
 */

void __stdcall CcMdlWriteAbort(PFILE_OBJECT FileObject, PMDL MdlChain)
{
  PMDL v2; // rbx
  _DWORD *SharedCacheMap; // rbp
  bool v4; // di
  struct _MDL *Next; // rsi
  KIRQL v6; // bl

  v2 = MdlChain;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v4 = (MdlChain->MdlFlags & 2) != 0;
  do
  {
    Next = v2->Next;
    if ( v4 )
      MmUnlockPages(v2);
    IoFreeMdl(v2);
    v2 = Next;
  }
  while ( Next );
  if ( v4 )
  {
    v6 = KeAcquireQueuedSpinLock(5uLL);
    CcDecrementOpenCount(SharedCacheMap);
    KeReleaseQueuedSpinLock(5uLL, v6);
  }
}
