/*
 * XREFs of CcMdlWriteAbort @ 0x1401B23E4
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
 *     CcDecrementOpenCount @ 0x140073218 (CcDecrementOpenCount.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
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
