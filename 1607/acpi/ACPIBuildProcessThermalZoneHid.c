/*
 * XREFs of ACPIBuildProcessThermalZoneHid @ 0x1C0045180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildCompleteGeneric @ 0x1C0026470 (ACPIBuildCompleteGeneric.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneHid(__int64 a1)
{
  __int64 v1; // rax
  const char *v3; // rdx
  char v4; // r10
  const char *v5; // r8
  __int64 v6; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
  *(_DWORD *)(a1 + 32) = 0;
  v3 = (const char *)qword_1C002C340;
  v4 = 0;
  v5 = (const char *)qword_1C002C340;
  if ( v1 )
  {
    v6 = *(_QWORD *)(v1 + 8);
    v4 = v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v3 = *(const char **)(v1 + 560);
      if ( (v6 & 0x400000000000LL) != 0 )
        v5 = *(const char **)(v1 + 568);
    }
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x4Du,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    0,
    v4,
    v3,
    v5);
  ACPIBuildCompleteGeneric(0LL, 0, 0LL, a1);
  return 0LL;
}
