/*
 * XREFs of HUBHTX_ClearTtBufferControlTransferComplete @ 0x1C0005B10
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqqq @ 0x1C0001C50 (Template_pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D9C (WPP_RECORDER_SF_dD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBHTX_ClearTtBufferControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v6; // esi
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v4 = *(_DWORD *)(a3 + 8);
  v6 = *(_DWORD *)(a4 + 28);
  if ( v4 < 0 )
  {
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a4 + 168) + 2464LL),
      2u,
      3u,
      0x74u,
      (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
      *(_DWORD *)(a3 + 8),
      *(_DWORD *)(a4 + 28));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x8000) != 0 )
    {
      LODWORD(v11) = v4;
      LODWORD(v10) = v6;
      LODWORD(v9) = 0;
      Template_pqqq(
        v8,
        &USBHUB3_ETW_EVENT_HUB_CONTROL_TRANSFER_ERROR,
        0LL,
        *(_QWORD *)(*(_QWORD *)(a4 + 168) + 224LL),
        v9,
        v10,
        v11);
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a4 + 168) + 504LL))(
    *(_QWORD *)(*(_QWORD *)(a4 + 168) + 352LL),
    *(_QWORD *)(a4 + 176));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  ExFreePoolWithTag((PVOID)a4, 0x68334855u);
}
