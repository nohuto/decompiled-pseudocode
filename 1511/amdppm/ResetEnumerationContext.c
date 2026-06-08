/*
 * XREFs of ResetEnumerationContext @ 0x1C00047E8
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C00130E0 (ProcLibTraceControlCallback.c)
 *     InitPerfStatesInternal @ 0x1C0016CC0 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001741C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C00178CC (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0018400 (RegisterKernelPepPerf.c)
 *     RegisterHvPerfStates @ 0x1C001A490 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C001A960 (RegisterHvLegacyPcc.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001CAC0 (ValidatePerfDomainSymmetry.c)
 *     InitializeEnergyEstimation @ 0x1C001D2DC (InitializeEnergyEstimation.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C001D580 (InitializeEnergyEstimationForEfficiencyClass.c)
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
