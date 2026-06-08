/*
 * XREFs of EnumerateNextDevice @ 0x1C00016FC
 * Callers:
 *     ComputeAtomEnergy @ 0x1C0002C90 (ComputeAtomEnergy.c)
 *     ComputeCoreEnergy @ 0x1C0002DB0 (ComputeCoreEnergy.c)
 *     RegisterKernelLegacyPcc @ 0x1C0005080 (RegisterKernelLegacyPcc.c)
 *     ComputeProcessorEnergy @ 0x1C0006A10 (ComputeProcessorEnergy.c)
 *     ValidatePerfDomainSymmetry @ 0x1C00150EC (ValidatePerfDomainSymmetry.c)
 *     InitPerfStatesInternal @ 0x1C00152DC (InitPerfStatesInternal.c)
 *     DecodeMWaitCState @ 0x1C0016660 (DecodeMWaitCState.c)
 *     RegisterHvLegacyPcc @ 0x1C001C4B0 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C001C910 (RegisterHvPerfStates.c)
 *     InitCpcStatesInternal @ 0x1C001E5AC (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001F0DC (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C001FE90 (RegisterKernelPepPerf.c)
 *     InitializeEnergyEstimation @ 0x1C0021C0C (InitializeEnergyEstimation.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C0021CFC (RetrieveEfficiencyClassInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnumerateNextDevice(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  unsigned int v4; // r8d
  __int64 *v5; // rax
  __int64 v6; // rdx

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = -1073741275;
  if ( v3 )
  {
    if ( *(_BYTE *)(a1 + 24) )
      return v4;
    *(_BYTE *)(a1 + 24) = 1;
    *a2 = v3;
    return 0;
  }
  v5 = *(__int64 **)(a1 + 8);
  v6 = *v5;
  *(_QWORD *)(a1 + 8) = *v5;
  if ( v6 != *(_QWORD *)a1 )
  {
    *a2 = v6 - *(unsigned int *)(a1 + 24);
    return 0;
  }
  return v4;
}
