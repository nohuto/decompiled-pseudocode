/*
 * XREFs of GetPerfDomain @ 0x1C001596C
 * Callers:
 *     RegisterKernelLegacyPcc @ 0x1C0005080 (RegisterKernelLegacyPcc.c)
 *     ValidatePerfDomainSymmetry @ 0x1C00150EC (ValidatePerfDomainSymmetry.c)
 *     InitPerfStatesInternal @ 0x1C00152DC (InitPerfStatesInternal.c)
 *     RegisterHvLegacyPcc @ 0x1C001C4B0 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C001C910 (RegisterHvPerfStates.c)
 *     InitCpcStatesInternal @ 0x1C001E5AC (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001F0DC (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C001FE90 (RegisterKernelPepPerf.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C000133C (InitializeEnumerationContext.c)
 *     InitializeSingleEnumerationContext @ 0x1C0002770 (InitializeSingleEnumerationContext.c)
 */

__int64 __fastcall GetPerfDomain(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r10
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // r9d
  __int64 v10; // rcx

  v3 = a1[62];
  if ( v3 )
  {
    *a3 = *(_DWORD *)(a1[61] + 16LL);
    v5 = a2;
    v6 = 504;
    v7 = v3 + 16;
  }
  else
  {
    v10 = a1[127];
    if ( !v10 || *(_DWORD *)(v10 + 200) <= 1u )
    {
      *a3 = 0;
      InitializeSingleEnumerationContext((__int64)a1, a2);
      return v8;
    }
    *a3 = 1;
    v5 = a2;
    v6 = 1024;
    v7 = v10 + 16;
  }
  InitializeEnumerationContext(v7, v6, v5);
  return v8;
}
