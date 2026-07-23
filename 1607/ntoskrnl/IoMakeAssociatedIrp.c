/*
 * XREFs of IoMakeAssociatedIrp @ 0x140135BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PIRP __stdcall IoMakeAssociatedIrp(PIRP Irp, CCHAR StackSize)
{
  return (PIRP)IoMakeAssociatedIrpPriv((__int64)Irp, 0LL, StackSize);
}
