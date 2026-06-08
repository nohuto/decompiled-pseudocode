/*
 * XREFs of GetPerfDomain @ 0x1C0016434
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000400C (InitLegacyPccInternal.c)
 *     CpcHighestNotifyWorker @ 0x1C0016938 (CpcHighestNotifyWorker.c)
 *     InitPerfStatesInternal @ 0x1C00184B8 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0018C6C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C001914C (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C001A060 (RegisterKernelPepPerf.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001BBD4 (ValidatePerfDomainSymmetry.c)
 *     RegisterHvPerfStates @ 0x1C001D120 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C001D600 (RegisterHvLegacyPcc.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C00061D4 (InitializeEnumerationContext.c)
 *     InitializeSingleEnumerationContext @ 0x1C00061E8 (InitializeSingleEnumerationContext.c)
 */

__int64 __fastcall GetPerfDomain(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r10
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // r9d

  v3 = a1[63];
  if ( v3 )
  {
    *a3 = *(_DWORD *)(a1[62] + 16LL);
    v5 = a2;
    v6 = 512;
    v7 = v3 + 16;
  }
  else
  {
    v8 = a1[128];
    if ( !v8 || *(_DWORD *)(v8 + 36) <= 1u )
    {
      *a3 = 0;
      InitializeSingleEnumerationContext((__int64)a1, a2);
      return v9;
    }
    *a3 = 1;
    v5 = a2;
    v6 = 1032;
    v7 = v8 + 16;
  }
  InitializeEnumerationContext(v7, v6, v5);
  return v9;
}
