/*
 * XREFs of ResetEnumerationContext @ 0x1C0004BA8
 * Callers:
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
