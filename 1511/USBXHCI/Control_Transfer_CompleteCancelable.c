/*
 * XREFs of Control_Transfer_CompleteCancelable @ 0x1C0001D4C
 * Callers:
 *     Control_MapTransfer @ 0x1C0001C24 (Control_MapTransfer.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C000B480 (Control_ProcessTransferEventWithED1.c)
 *     Control_WdfEvtIoDefault @ 0x1C0010440 (Control_WdfEvtIoDefault.c)
 *     Control_WdfEvtDpcForTransferCompletion @ 0x1C0029CB0 (Control_WdfEvtDpcForTransferCompletion.c)
 * Callees:
 *     Control_Transfer_Complete @ 0x1C0001E8C (Control_Transfer_Complete.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0008EC4 (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Control_Transfer_CompleteCancelable(_QWORD *a1)
{
  __int64 v1; // rbx
  int v3; // eax
  unsigned int v4; // esi
  __int64 v5; // rcx
  int v6; // edx
  int v7; // edx

  v1 = a1[37];
  if ( *(_DWORD *)(v1 + 96) != 1 )
  {
LABEL_5:
    if ( *(_DWORD *)(v1 + 100) == 1 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
              WdfDriverGlobals,
              a1[36],
              0LL) )
      {
        v4 = -1073741536;
        *(_DWORD *)(v1 + 100) = 2;
        v7 = *(unsigned __int8 *)(a1[6] + 135LL);
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(a1[7] + 80LL),
          v7,
          13,
          44,
          (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
          *(_BYTE *)(a1[6] + 135LL),
          *(_DWORD *)(a1[7] + 144LL));
        return v4;
      }
      *(_DWORD *)(v1 + 100) = 0;
    }
    a1[37] = 0LL;
    Control_Transfer_Complete(a1, v1);
    return 0;
  }
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2048))(
         WdfDriverGlobals,
         *(_QWORD *)(v1 + 24));
  v4 = v3;
  if ( v3 >= 0 )
  {
    *(_DWORD *)(v1 + 96) = 0;
    goto LABEL_5;
  }
  *(_DWORD *)(v1 + 96) = 2;
  v5 = a1[7];
  v6 = *(_DWORD *)(v5 + 144);
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_DDD(
    *(_QWORD *)(v5 + 80),
    v6,
    13,
    43,
    (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
    *(_BYTE *)(a1[6] + 135LL),
    *(_DWORD *)(v5 + 144),
    v3);
  return v4;
}
