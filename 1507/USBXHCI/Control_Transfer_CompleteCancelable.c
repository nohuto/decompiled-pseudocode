/*
 * XREFs of Control_Transfer_CompleteCancelable @ 0x1C0022180
 * Callers:
 *     Control_MapTransfer @ 0x1C00214A8 (Control_MapTransfer.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0021A38 (Control_ProcessTransferEventWithED1.c)
 *     Control_WdfEvtDpcForTransferCompletion @ 0x1C0023090 (Control_WdfEvtDpcForTransferCompletion.c)
 *     Control_WdfEvtIoDefault @ 0x1C00232E0 (Control_WdfEvtIoDefault.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0006A1C (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Control_Transfer_Complete @ 0x1C0021F9C (Control_Transfer_Complete.c)
 */

__int64 __fastcall Control_Transfer_CompleteCancelable(_QWORD *a1)
{
  __int64 v1; // rbx
  int v3; // eax
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+38h] [rbp-10h]

  v1 = a1[37];
  if ( *(_DWORD *)(v1 + 96) != 1 )
  {
LABEL_5:
    if ( *(_DWORD *)(v1 + 100) == 1 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_LIST_ENTRY *, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
              a1[36],
              0LL) )
      {
        v4 = -1073741536;
        *(_DWORD *)(v1 + 100) = 2;
        v6 = a1[7];
        v11 = *(_DWORD *)(v6 + 144);
        v9 = *(unsigned __int8 *)(a1[6] + 135LL);
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v6 + 80),
          4u,
          0xDu,
          0x2Cu,
          (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
          v9,
          v11);
        return v4;
      }
      *(_DWORD *)(v1 + 100) = 0;
    }
    a1[37] = 0LL;
    Control_Transfer_Complete((__int64)a1, v1);
    return 0;
  }
  v3 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 2048))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         *(_QWORD *)(v1 + 24));
  v4 = v3;
  if ( v3 >= 0 )
  {
    *(_DWORD *)(v1 + 96) = 0;
    goto LABEL_5;
  }
  *(_DWORD *)(v1 + 96) = 2;
  v5 = a1[7];
  v12 = v3;
  v10 = *(_DWORD *)(v5 + 144);
  v8 = *(unsigned __int8 *)(a1[6] + 135LL);
  WPP_RECORDER_SF_DDD(
    *(_QWORD *)(v5 + 80),
    4u,
    0xDu,
    0x2Bu,
    (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
    v8,
    v10,
    v12);
  return v4;
}
