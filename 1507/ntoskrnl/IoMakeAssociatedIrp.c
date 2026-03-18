/*
 * XREFs of IoMakeAssociatedIrp @ 0x1401F60AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PIRP __stdcall IoMakeAssociatedIrp(PIRP Irp, CCHAR StackSize)
{
  return (PIRP)IoMakeAssociatedIrpPriv((__int64)Irp, 0LL, StackSize);
}
