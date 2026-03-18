/*
 * XREFs of Control_Transfer_CompleteCancelable @ 0x1C00035B4
 * Callers:
 *     Control_MapTransfer @ 0x1C00033B4 (Control_MapTransfer.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C000D930 (Control_ProcessTransferEventWithED1.c)
 *     Control_WdfEvtIoDefault @ 0x1C000DD80 (Control_WdfEvtIoDefault.c)
 *     Control_WdfEvtDpcForTransferCompletion @ 0x1C002A2D0 (Control_WdfEvtDpcForTransferCompletion.c)
 * Callees:
 *     Control_Transfer_Complete @ 0x1C00038C0 (Control_Transfer_Complete.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0008558 (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Control_Transfer_CompleteCancelable(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned int v3; // esi
  int v5; // eax
  __int64 v6; // rcx
  int v7; // edx
  int v8; // edx

  v1 = a1[37];
  if ( *(_DWORD *)(v1 + 96) == 1 )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2048))(
           WdfDriverGlobals,
           *(_QWORD *)(v1 + 24));
    v3 = v5;
    if ( v5 < 0 )
    {
      *(_DWORD *)(v1 + 96) = 2;
      v6 = a1[7];
      v7 = *(_DWORD *)(v6 + 144);
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(v6 + 80),
        v7,
        13,
        43,
        (__int64)&WPP_536c295522f23df8bdaea150c8299cbf_Traceguids,
        *(_BYTE *)(a1[6] + 135LL),
        *(_DWORD *)(v6 + 144),
        v5);
      return v3;
    }
    *(_DWORD *)(v1 + 96) = 0;
  }
  if ( *(_DWORD *)(v1 + 100) == 1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
            WdfDriverGlobals,
            a1[36],
            0LL) )
    {
      v3 = -1073741536;
      *(_DWORD *)(v1 + 100) = 2;
      v8 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1[7] + 80LL),
        v8,
        13,
        44,
        (__int64)&WPP_536c295522f23df8bdaea150c8299cbf_Traceguids,
        *(_BYTE *)(a1[6] + 135LL),
        *(_DWORD *)(a1[7] + 144LL));
      return v3;
    }
    *(_DWORD *)(v1 + 100) = 0;
  }
  a1[37] = 0LL;
  Control_Transfer_Complete(a1, v1);
  return 0;
}
