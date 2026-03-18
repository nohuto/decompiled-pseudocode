/*
 * XREFs of HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice @ 0x1C002A4D8
 * Callers:
 *     HUBMISC_IsBootDeviceReady @ 0x1C002A324 (HUBMISC_IsBootDeviceReady.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(PWDF_DRIVER_GLOBALS, __int64); // rax
  int v6; // eax
  _QWORD v7[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v8[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v9; // [rsp+90h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  result = *(unsigned int *)(v2 + 1336);
  if ( (result & 0x10) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1336), 0xFFFFFFEF);
    memset(v8, 0, sizeof(v8));
    v4 = *(_QWORD *)(a1 + 16);
    LODWORD(v8[0]) = 56;
    v5 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632);
    v8[3] = 0x100000001LL;
    v8[4] = v5(WdfDriverGlobals, v4);
    v7[2] = 1LL;
    v7[1] = HUBREG_EvtWorkItemPerformPostSurpriseRemovalRecoveryActions;
    v7[0] = 24LL;
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032))(
           WdfDriverGlobals,
           v7,
           v8,
           &v9);
    if ( v6 >= 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v9);
    else
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               2u,
               2u,
               0x6Cu,
               (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids,
               v6);
  }
  return result;
}
