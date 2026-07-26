/*
 * XREFs of NdisGetAndReferenceCompartmentJobObject @ 0x1C0060E80
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C0020D08 (ndisIfFindCompartmentBlock.c)
 */

__int64 __fastcall NdisGetAndReferenceCompartmentJobObject(unsigned int a1, _LIST_ENTRY **a2)
{
  unsigned int v3; // edi
  KIRQL v5; // bp
  _LIST_ENTRY *CompartmentBlock; // rax
  _LIST_ENTRY *Blink; // rcx

  v3 = 0;
  *a2 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(a1);
  if ( CompartmentBlock )
  {
    Blink = CompartmentBlock[106].Blink;
    *a2 = Blink;
    if ( Blink )
      ObfReferenceObject(Blink);
  }
  else
  {
    v3 = -1073741275;
  }
  KeReleaseSpinLock(&ndisIfListLock, v5);
  return v3;
}
