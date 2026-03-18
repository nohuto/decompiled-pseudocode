/*
 * XREFs of ACPIBuildProcessPowerResourcePhasePep @ 0x1C0044B80
 * Callers:
 *     <none>
 * Callees:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C000526C (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     ACPIBuildCompleteGeneric @ 0x1C0026470 (ACPIBuildCompleteGeneric.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_Lqs @ 0x1C004593C (WPP_RECORDER_SF_Lqs.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhasePep(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v5; // ebx

  v3 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 4;
  v5 = 0;
  if ( (*(_DWORD *)(v3 + 16) & 0x4000LL) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v3 + 16), 0x4000uLL);
    v5 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v3 + 32), (__int64)ACPIBuildDiscoverPowerNodeCompletion, a1);
    if ( v5 < 0 )
      WPP_RECORDER_SF_Lqs(WPP_GLOBAL_Control->DeviceExtension, 2, a3, 52);
  }
  WPP_RECORDER_SF_Lqs(WPP_GLOBAL_Control->DeviceExtension, 4, a3, 53);
  if ( v5 != 259 )
    ACPIBuildCompleteGeneric(0LL, v5, 0LL, a1);
  return (unsigned int)v5;
}
