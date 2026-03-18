/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x140704D38
 * Callers:
 *     VfPendingShouldForce @ 0x14070D12C (VfPendingShouldForce.c)
 *     VfTargetDriversGetVerifierData @ 0x14070FF1C (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x140710564 (ViTargetIncrementCounter.c)
 *     VfCheckUserHandle @ 0x1407117A8 (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  return ViDriverKernelBase && a1 >= ViDriverKernelBase && a1 < ViDriverKernelEnd;
}
