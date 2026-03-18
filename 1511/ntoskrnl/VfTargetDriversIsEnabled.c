/*
 * XREFs of VfTargetDriversIsEnabled @ 0x1406C3F5C
 * Callers:
 *     ViIrpCheckKernelAddressForIrp @ 0x1406C01F4 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x1406C10C4 (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x1406C5774 (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x1406C84E0 (ViWdBeforeCallDriver.c)
 *     VerifierExInitializeLookasideListEx @ 0x1406C88A8 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1406C89E8 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1406C8AF4 (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1406C3E84 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
