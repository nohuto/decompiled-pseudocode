/*
 * XREFs of EnumerateNextDevice @ 0x1C0006210
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000400C (InitLegacyPccInternal.c)
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
    if ( !*(_BYTE *)(a1 + 24) )
    {
      *(_BYTE *)(a1 + 24) = 1;
      *a2 = v3;
      return 0;
    }
  }
  else
  {
    v5 = *(__int64 **)(a1 + 8);
    v6 = *v5;
    *(_QWORD *)(a1 + 8) = *v5;
    if ( v6 != *(_QWORD *)a1 )
    {
      *a2 = v6 - *(unsigned int *)(a1 + 24);
      return 0;
    }
  }
  return v4;
}
