/*
 * XREFs of HUBHTX_ClearTtBufferControlTransferComplete @ 0x1C0005CA0
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqqq @ 0x1C0001CB4 (Template_pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E10 (WPP_RECORDER_SF_dD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBHTX_ClearTtBufferControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v6; // esi
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v4 = *(_DWORD *)(a3 + 8);
  v6 = *(_DWORD *)(a4 + 28);
  if ( v4 < 0 )
  {
    v12 = *(_DWORD *)(a4 + 28);
    v10 = *(_DWORD *)(a3 + 8);
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a4 + 168) + 2488LL),
      2u,
      3u,
      0x74u,
      (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
      v10,
      v12);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x20000) != 0 )
    {
      LODWORD(v13) = v4;
      LODWORD(v11) = v6;
      LODWORD(v9) = 0;
      Template_pqqq(
        v8,
        &USBHUB3_ETW_EVENT_HUB_CONTROL_TRANSFER_ERROR,
        0LL,
        *(_QWORD *)(*(_QWORD *)(a4 + 168) + 240LL),
        v9,
        v11,
        v13);
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a4 + 168) + 520LL))(
    *(_QWORD *)(*(_QWORD *)(a4 + 168) + 368LL),
    *(_QWORD *)(a4 + 176));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  ExFreePoolWithTag((PVOID)a4, 0x68334855u);
}
