/*
 * XREFs of NtDCompositionTelemetryAnimationScenarioReference @ 0x1C0012480
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C002CF70 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?AnimationScenarioReference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z @ 0x1C0031168 (-AnimationScenarioReference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionTelemetryAnimationScenarioReference(
        unsigned int a1,
        struct _GUID *a2,
        unsigned __int64 *a3)
{
  int v3; // ebx
  struct _GUID v5; // [rsp+20h] [rbp-18h] BYREF
  struct DirectComposition::CApplicationChannel *v6; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 0LL;
  v6 = 0LL;
  if ( !a3 || !a2 )
    v3 = -1073741811;
  if ( v3 >= 0 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v7 = *a3;
    if ( &a2[1] < a2 || (unsigned __int64)&a2[1] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v5 = *a2;
    v3 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v6);
    if ( v3 >= 0 )
    {
      v3 = DirectComposition::CTelemetryInfo::AnimationScenarioReference(
             (struct DirectComposition::CApplicationChannel *)((char *)v6 + 536),
             &v5,
             &v7);
      _guard_dispatch_icall_fptr();
    }
  }
  return (unsigned int)v3;
}
