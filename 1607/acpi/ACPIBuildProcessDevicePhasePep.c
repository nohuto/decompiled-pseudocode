/*
 * XREFs of ACPIBuildProcessDevicePhasePep @ 0x1C000F010
 * Callers:
 *     <none>
 * Callees:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C000526C (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     ACPIBuildCompleteCommon @ 0x1C000F100 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePep(__int64 a1)
{
  __int64 v1; // rdi
  __int64 *v2; // rbp
  int v4; // ebx
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 *v11; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = qword_1C002C340;
  *(_DWORD *)(a1 + 32) = 4;
  v4 = 0;
  if ( (*(_DWORD *)(v1 + 912) & 0x2000000) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 912), 0x2000000uLL);
    v4 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v1 + 712), (__int64)ACPIBuildDiscoverDeviceCompletion, a1);
    if ( v4 < 0 )
    {
      v9 = *(_QWORD *)(v1 + 8);
      v10 = qword_1C002C340;
      v11 = qword_1C002C340;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v10 = *(__int64 **)(v1 + 560);
        if ( (v9 & 0x400000000000LL) != 0 )
          v11 = *(__int64 **)(v1 + 568);
      }
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        2,
        6,
        26,
        (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
        v4,
        v1,
        (__int64)v10,
        (__int64)v11);
    }
  }
  v5 = *(_QWORD *)(v1 + 8);
  v6 = qword_1C002C340;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v2 = *(__int64 **)(v1 + 560);
    if ( (v5 & 0x400000000000LL) != 0 )
      v6 = *(__int64 **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    6,
    27,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    v4,
    v1,
    (__int64)v2,
    (__int64)v6);
  if ( v4 == 259 )
  {
    return 0;
  }
  else
  {
    v7 = *(unsigned int *)(a1 + 32);
    if ( v4 < 0 )
      *(_DWORD *)(a1 + 48) = v4;
    *(_DWORD *)(a1 + 32) = 2;
    ACPIBuildCompleteCommon(a1 + 24, v7);
  }
  return (unsigned int)v4;
}
