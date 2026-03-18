/*
 * XREFs of HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C001D788
 * Callers:
 *     HUBDSM_UpdatingDeviceExitLatencyInTheControllerAfterIncreasingExitLatency @ 0x1C001C2E0 (HUBDSM_UpdatingDeviceExitLatencyInTheControllerAfterIncreasingExitLatency.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D9C (WPP_RECORDER_SF_dD.c)
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001CDBC (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
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
      (__int64)&WPP_b5a7d2259efb34a086b7c731ef7dab2f_Traceguids,
      v5,
      v7);
    HUBSM_AddEvent(a1 + 488, 0xFB8u);
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
    *((_QWORD *)v3 + 1) = *(_QWORD *)(*(_QWORD *)a1 + 224LL);
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
        (__int64)&WPP_b5a7d2259efb34a086b7c731ef7dab2f_Traceguids,
        v6);
    }
  }
}
