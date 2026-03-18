/*
 * XREFs of ACPIDispatchIrpDepFilterRemoveDevice @ 0x1C004E770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ACPIDispatchIrpDepFilterRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  return ACPIFilterIrpRemoveDevice(a1, a2);
}
