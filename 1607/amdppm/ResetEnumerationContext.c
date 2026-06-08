/*
 * XREFs of ResetEnumerationContext @ 0x1C00061FC
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C00133C0 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C0016938 (CpcHighestNotifyWorker.c)
 *     InitPerfStatesInternal @ 0x1C00184B8 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0018C6C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C001914C (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C001A060 (RegisterKernelPepPerf.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C001B26C (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C001B770 (RetrieveEfficiencyClassInformation.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001BBD4 (ValidatePerfDomainSymmetry.c)
 *     RegisterHvPerfStates @ 0x1C001D120 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C001D600 (RegisterHvLegacyPcc.c)
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
