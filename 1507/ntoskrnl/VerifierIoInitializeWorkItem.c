/*
 * XREFs of VerifierIoInitializeWorkItem @ 0x140739BF4
 * Callers:
 *     <none>
 * Callees:
 *     MmIsSessionAddress @ 0x14004ED20 (MmIsSessionAddress.c)
 *     IoSizeofWorkItem @ 0x140126020 (IoSizeofWorkItem.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1402175B8 (MmIsNonPagedSystemAddressValid.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VerifierIoInitializeWorkItem(PVOID IoObject, struct _IO_WORKITEM *a2)
{
  __int64 v4; // r9

  v4 = IoSizeofWorkItem();
  if ( a2 < MmHighestUserAddress || (struct _IO_WORKITEM *)((char *)a2 + v4) < a2 )
    VerifierBugCheckIfAppropriate(196, 224, (int)a2, v4, 0LL);
  if ( MmIsSessionAddress((__int64)a2) )
    VerifierBugCheckIfAppropriate(196, 304, (int)a2, 0, 0LL);
  if ( (MmVerifierData & 2) != 0 && !MmIsNonPagedSystemAddressValid(a2) )
    VerifierBugCheckIfAppropriate(196, 305, (int)a2, 0, 0LL);
  pXdvIoInitializeWorkItem(IoObject, a2);
}
