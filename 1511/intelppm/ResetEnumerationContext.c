/*
 * XREFs of ResetEnumerationContext @ 0x1C0001AE8
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x1C0003400 (ComputeProcessorEnergyMsrEx.c)
 *     RegisterKernelLegacyPcc @ 0x1C00051C0 (RegisterKernelLegacyPcc.c)
 *     ValidatePerfDomainSymmetry @ 0x1C00150EC (ValidatePerfDomainSymmetry.c)
 *     InitPerfStatesInternal @ 0x1C00152DC (InitPerfStatesInternal.c)
 *     DecodeMWaitCState @ 0x1C0016660 (DecodeMWaitCState.c)
 *     RegisterHvLegacyPcc @ 0x1C001C5C0 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C001CA20 (RegisterHvPerfStates.c)
 *     InitCpcStatesInternal @ 0x1C001E6AC (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001F1D4 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C001FF80 (RegisterKernelPepPerf.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00221F4 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C0022464 (RetrieveEfficiencyClassInformation.c)
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
