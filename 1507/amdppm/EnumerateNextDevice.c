/*
 * XREFs of EnumerateNextDevice @ 0x1C0004BBC
 * Callers:
 *     RegisterKernelLegacyPcc @ 0x1C0003600 (RegisterKernelLegacyPcc.c)
 *     ComputeProcessorEnergy @ 0x1C0005590 (ComputeProcessorEnergy.c)
 *     ProcLibTraceControlCallback @ 0x1C00130D0 (ProcLibTraceControlCallback.c)
 *     InitPerfStatesInternal @ 0x1C0016CA8 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00173FC (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C00178AC (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C00183E0 (RegisterKernelPepPerf.c)
 *     RegisterHvPerfStates @ 0x1C001A4B0 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C001A980 (RegisterHvLegacyPcc.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001CA54 (ValidatePerfDomainSymmetry.c)
 *     InitializeEnergyEstimation @ 0x1C001D270 (InitializeEnergyEstimation.c)
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
