/*
 * XREFs of HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C001F7A0
 * Callers:
 *     HUBDSM_UpdatingDeviceExitLatencyInTheControllerAfterIncreasingExitLatency @ 0x1C001E2B0 (HUBDSM_UpdatingDeviceExitLatencyInTheControllerAfterIncreasingExitLatency.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E10 (WPP_RECORDER_SF_dD.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001EDA0 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

void __fastcall HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl(__int64 a1)
{
  unsigned int v1; // eax
  _DWORD *v3; // rbx
  int v4; // eax
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v1 = *(_DWORD *)(a1 + 2560);
  if ( v1 && *(unsigned __int16 *)(a1 + 2194) > v1 )
  {
    v7 = *(_DWORD *)(a1 + 2560);
    v5 = *(unsigned __int16 *)(a1 + 2194);
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x1Fu,
      (__int64)&WPP_085dd3e5d97b340416555628d039db45_Traceguids,
      v5,
      v7);
    HUBSM_AddEvent(a1 + 488, 4024);
  }
  else
  {
    v3 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                     WdfDriverGlobals,
                     *(_QWORD *)(a1 + 416),
                     0LL);
    memset(v3, 0, 0x48uLL);
    v3[6] |= 4u;
    *v3 = 72;
    *((_QWORD *)v3 + 1) = *(_QWORD *)(*(_QWORD *)a1 + 240LL);
    *((_QWORD *)v3 + 2) = *(_QWORD *)(a1 + 24);
    v3[12] = *(unsigned __int16 *)(a1 + 2194);
    v4 = HUBUCX_SubmitUcxIoctl(a1, 0x491023u);
    if ( v4 < 0 )
    {
      v6 = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x20u,
        (__int64)&WPP_085dd3e5d97b340416555628d039db45_Traceguids,
        v6);
    }
  }
}
