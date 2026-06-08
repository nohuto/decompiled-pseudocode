/*
 * XREFs of ResetEnumerationContext @ 0x1C0001738
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

__int64 __fastcall ResetEnumerationContext(__int64 *a1)
{
  __int64 result; // rax

  if ( a1[2] )
  {
    *((_BYTE *)a1 + 24) = 0;
  }
  else
  {
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
