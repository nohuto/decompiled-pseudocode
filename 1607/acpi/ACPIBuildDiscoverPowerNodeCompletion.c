/*
 * XREFs of ACPIBuildDiscoverPowerNodeCompletion @ 0x1C0043E60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteGeneric @ 0x1C0026470 (ACPIBuildCompleteGeneric.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sqqDqs @ 0x1C0045FE0 (WPP_RECORDER_SF_sqqDqs.c)
 */

void __fastcall ACPIBuildDiscoverPowerNodeCompletion(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // r10

  v4 = *(_QWORD *)(a1 + 40);
  if ( a2 >= 0 && a3 )
  {
    *(_QWORD *)(v4 + 136) = a3;
    _InterlockedOr64((volatile signed __int64 *)(v4 + 16), 0x8000uLL);
    WPP_RECORDER_SF_sqqDqs(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  }
  ACPIBuildCompleteGeneric(0LL, a2, 0LL, a1);
}
