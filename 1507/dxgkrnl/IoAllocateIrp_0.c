/*
 * XREFs of IoAllocateIrp_0 @ 0x1C000FEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PIRP __stdcall IoAllocateIrp_0(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  return IoAllocateIrp(StackSize, ChargeQuota);
}
