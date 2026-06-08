/*
 * XREFs of GetPerfDomain @ 0x1C00190EC
 * Callers:
 *     RegisterKernelLegacyPcc @ 0x1C0003250 (RegisterKernelLegacyPcc.c)
 *     InitPerfStatesInternal @ 0x1C0016CC0 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001741C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C00178CC (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0018400 (RegisterKernelPepPerf.c)
 *     RegisterHvPerfStates @ 0x1C001A490 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C001A960 (RegisterHvLegacyPcc.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001CAC0 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C00047C0 (InitializeEnumerationContext.c)
 *     InitializeSingleEnumerationContext @ 0x1C00047D4 (InitializeSingleEnumerationContext.c)
 */

__int64 __fastcall GetPerfDomain(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r10
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // r9d

  v3 = a1[61];
  if ( v3 )
  {
    *a3 = *(_DWORD *)(a1[60] + 16LL);
    v5 = a2;
    v6 = 496;
    v7 = v3 + 16;
  }
  else
  {
    v8 = a1[126];
    if ( !v8 || *(_DWORD *)(v8 + 200) <= 1u )
    {
      *a3 = 0;
      InitializeSingleEnumerationContext((__int64)a1, a2);
      return v9;
    }
    *a3 = 1;
    v5 = a2;
    v6 = 1016;
    v7 = v8 + 16;
  }
  InitializeEnumerationContext(v7, v6, v5);
  return v9;
}
