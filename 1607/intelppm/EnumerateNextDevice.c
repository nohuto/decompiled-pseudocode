/*
 * XREFs of EnumerateNextDevice @ 0x1C0001724
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
