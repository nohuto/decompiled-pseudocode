/*
 * XREFs of HUBHTX_HubControlTransferComplete @ 0x1C0002680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     Template_pqqq @ 0x1C00018F0 (Template_pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001A3C (WPP_RECORDER_SF_dD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0026954 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_HubControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v5; // esi
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  _DWORD v16[4]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  v4 = *(_DWORD *)(a3 + 8);
  v5 = *(_DWORD *)(a4 + 748);
  v16[3] = 0;
  v17 = 0LL;
  v16[1] = 0;
  v16[2] = 0;
  v16[0] = 24;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         a1,
         v16);
  if ( v7 < 0 )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C0057090);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 64),
      2u,
      2u,
      0x3Au,
      (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
      v7);
  }
  if ( v4 < 0 )
  {
    LODWORD(v13) = v4;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a4 + 2440),
      2u,
      3u,
      0xAu,
      (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
      v13,
      v5);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x4000) != 0 )
    {
      LODWORD(v15) = v4;
      LODWORD(v14) = v5;
      LODWORD(v12) = 0;
      Template_pqqq(v9, &USBHUB3_ETW_EVENT_HUB_CONTROL_TRANSFER_ERROR, 0LL, *(_QWORD *)(a4 + 208), v12, v14, v15);
    }
    if ( (*(_DWORD *)(a4 + 2512) & 2) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierControlTransferFailure", a4 + 1184);
    *(_DWORD *)(a4 + 2516) = 1073872897;
  }
  v10 = 2004LL;
  if ( v4 >= 0 )
    v10 = 2008LL;
  return HUBSM_AddEvent(a4 + 1184, v10);
}
