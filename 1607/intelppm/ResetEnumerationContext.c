/*
 * XREFs of ResetEnumerationContext @ 0x1C0001760
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x1C0003580 (ComputeProcessorEnergyMsrEx.c)
 *     InitLegacyPccInternal @ 0x1C0005DC8 (InitLegacyPccInternal.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001328C (ValidatePerfDomainSymmetry.c)
 *     InitPerfStatesInternal @ 0x1C001347C (InitPerfStatesInternal.c)
 *     ProcLibTraceControlCallback @ 0x1C0017DF0 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C001C398 (CpcHighestNotifyWorker.c)
 *     RegisterHvLegacyPcc @ 0x1C001D9A0 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C001DE00 (RegisterHvPerfStates.c)
 *     InitCpcStatesInternal @ 0x1C001F5A4 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0020474 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0021340 (RegisterKernelPepPerf.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002312C (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C00233D8 (RetrieveEfficiencyClassInformation.c)
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
