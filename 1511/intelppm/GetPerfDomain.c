/*
 * XREFs of GetPerfDomain @ 0x1C001596C
 * Callers:
 *     RegisterKernelLegacyPcc @ 0x1C00051C0 (RegisterKernelLegacyPcc.c)
 *     ValidatePerfDomainSymmetry @ 0x1C00150EC (ValidatePerfDomainSymmetry.c)
 *     InitPerfStatesInternal @ 0x1C00152DC (InitPerfStatesInternal.c)
 *     RegisterHvLegacyPcc @ 0x1C001C5C0 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C001CA20 (RegisterHvPerfStates.c)
 *     InitCpcStatesInternal @ 0x1C001E6AC (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001F1D4 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C001FF80 (RegisterKernelPepPerf.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C00016E0 (InitializeEnumerationContext.c)
 *     InitializeSingleEnumerationContext @ 0x1C0002FAC (InitializeSingleEnumerationContext.c)
 */

__int64 __fastcall GetPerfDomain(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r10
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // r9d
  __int64 v10; // rcx

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
    v10 = a1[126];
    if ( !v10 || *(_DWORD *)(v10 + 200) <= 1u )
    {
      *a3 = 0;
      InitializeSingleEnumerationContext((__int64)a1, a2);
      return v8;
    }
    *a3 = 1;
    v5 = a2;
    v6 = 1016;
    v7 = v10 + 16;
  }
  InitializeEnumerationContext(v7, v6, v5);
  return v8;
}
