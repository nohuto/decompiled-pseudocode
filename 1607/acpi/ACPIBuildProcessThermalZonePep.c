/*
 * XREFs of ACPIBuildProcessThermalZonePep @ 0x1C00269B0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C000526C (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C001DE30 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZonePep(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // rsi
  int v4; // edi
  __int64 v5; // rcx
  const char *v6; // rax
  __int64 v8; // rax
  const char *v9; // rdx
  const char *v10; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)qword_1C002C340;
  *(_DWORD *)(a1 + 32) = 4;
  v4 = 0;
  if ( (*(_DWORD *)(v1 + 912) & 0x2000000) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 912), 0x2000000uLL);
    v4 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v1 + 712), (__int64)ACPIBuildDiscoverDeviceCompletion, a1);
    if ( v4 < 0 )
    {
      v8 = *(_QWORD *)(v1 + 8);
      v9 = (const char *)qword_1C002C340;
      v10 = (const char *)qword_1C002C340;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v9 = *(const char **)(v1 + 560);
        if ( (v8 & 0x400000000000LL) != 0 )
          v10 = *(const char **)(v1 + 568);
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x45u,
        (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
        v4,
        v1,
        v9,
        v10);
    }
  }
  v5 = *(_QWORD *)(v1 + 8);
  v6 = (const char *)qword_1C002C340;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v2 = *(const char **)(v1 + 560);
    if ( (v5 & 0x400000000000LL) != 0 )
      v6 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x46u,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    v4,
    v1,
    v2,
    v6);
  if ( v4 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return (unsigned int)v4;
}
