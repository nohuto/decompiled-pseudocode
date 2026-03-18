/*
 * XREFs of HUBHTX_HubControlTransferComplete @ 0x1C0002AA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     Template_pqqq @ 0x1C0001CB4 (Template_pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E10 (WPP_RECORDER_SF_dD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0029B74 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_HubControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // esi
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+30h] [rbp-38h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  _DWORD v17[4]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-18h]

  v4 = *(_DWORD *)(a3 + 8);
  v5 = *(_DWORD *)(a4 + 796);
  v17[3] = 0;
  v18 = 0LL;
  v17[1] = 0;
  v17[2] = 0;
  v17[0] = 24;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         a1,
         v17);
  if ( v7 < 0 )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C005B110);
    v13 = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 64),
      2u,
      2u,
      0x3Au,
      (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids,
      v13);
  }
  if ( v4 < 0 )
  {
    v15 = v5;
    LODWORD(v12) = v4;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a4 + 2488),
      2u,
      3u,
      0xAu,
      (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
      v12,
      v15);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x20000) != 0 )
    {
      LODWORD(v16) = v4;
      LODWORD(v14) = v5;
      LODWORD(v11) = 0;
      Template_pqqq(v9, &USBHUB3_ETW_EVENT_HUB_CONTROL_TRANSFER_ERROR, 0LL, *(_QWORD *)(a4 + 240), v11, v14, v16);
    }
    if ( (*(_DWORD *)(a4 + 2560) & 2) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierControlTransferFailure", a4 + 1232);
    *(_DWORD *)(a4 + 2564) = 1073872897;
  }
  return HUBSM_AddEvent(a4 + 1232, ((v4 >> 31) & 0xFFFFFFFC) + 2008);
}
