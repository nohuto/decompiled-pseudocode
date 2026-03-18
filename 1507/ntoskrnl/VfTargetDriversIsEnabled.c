/*
 * XREFs of VfTargetDriversIsEnabled @ 0x140745810
 * Callers:
 *     IovpCallDriver1 @ 0x14073F69C (IovpCallDriver1.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1407419E8 (ViIrpCheckKernelAddressForIrp.c)
 *     VfCheckUserHandle @ 0x1407473CC (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x14074AFA4 (ViWdBeforeCallDriver.c)
 *     VerifierExInitializeLookasideListEx @ 0x14074B434 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14074B574 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14074B680 (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140745724 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
