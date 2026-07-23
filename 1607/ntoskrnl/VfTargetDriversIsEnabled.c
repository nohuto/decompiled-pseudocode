/*
 * XREFs of VfTargetDriversIsEnabled @ 0x14071002C
 * Callers:
 *     ViIrpCheckKernelAddressForIrp @ 0x14070C27C (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x14070D15C (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x1407117A8 (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x140716E88 (ViWdBeforeCallDriver.c)
 *     VerifierExInitializeLookasideListEx @ 0x140717250 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x140717390 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14071749C (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x14070FF4C (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
