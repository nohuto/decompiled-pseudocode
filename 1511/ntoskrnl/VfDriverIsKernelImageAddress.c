/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x1406B8CAC
 * Callers:
 *     VfPendingShouldForce @ 0x1406C10C4 (VfPendingShouldForce.c)
 *     VfTargetDriversGetVerifierData @ 0x1406C3E84 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 *     VfCheckUserHandle @ 0x1406C5774 (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  return ViDriverKernelBase && a1 >= ViDriverKernelBase && a1 < ViDriverKernelEnd;
}
