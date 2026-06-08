/*
 * XREFs of EnumerateNextDevice @ 0x1C0001AAC
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
