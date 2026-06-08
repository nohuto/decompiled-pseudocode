/*
 * XREFs of GetPerfDomain @ 0x1C0013CD0
 * Callers:
 *     InitLegacyPccInternal @ 0x1C0005DC8 (InitLegacyPccInternal.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001328C (ValidatePerfDomainSymmetry.c)
 *     InitPerfStatesInternal @ 0x1C001347C (InitPerfStatesInternal.c)
 *     CpcHighestNotifyWorker @ 0x1C001C398 (CpcHighestNotifyWorker.c)
 *     RegisterHvLegacyPcc @ 0x1C001D9A0 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C001DE00 (RegisterHvPerfStates.c)
 *     InitCpcStatesInternal @ 0x1C001F5A4 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0020474 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0021340 (RegisterKernelPepPerf.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C00015A4 (InitializeEnumerationContext.c)
 *     InitializeSingleEnumerationContext @ 0x1C0003014 (InitializeSingleEnumerationContext.c)
 */

__int64 __fastcall GetPerfDomain(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r10
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // r9d
  __int64 v10; // rcx

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
    v10 = a1[128];
    if ( !v10 || *(_DWORD *)(v10 + 36) <= 1u )
    {
      *a3 = 0;
      InitializeSingleEnumerationContext((__int64)a1, a2);
      return v8;
    }
    *a3 = 1;
    v5 = a2;
    v6 = 1032;
    v7 = v10 + 16;
  }
  InitializeEnumerationContext(v7, v6, v5);
  return v8;
}
