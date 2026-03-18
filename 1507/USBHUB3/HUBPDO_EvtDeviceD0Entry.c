/*
 * XREFs of HUBPDO_EvtDeviceD0Entry @ 0x1C0013340
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     Template_pqqh @ 0x1C0009CB4 (Template_pqqh.c)
 *     Template_pqq @ 0x1C0009D3C (Template_pqq.c)
 *     HUBMISC_WaitForSignal @ 0x1C00267F4 (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x1C002F1B8 (HUBIDLE_AddEvent.c)
 *     UsbSleepStudy_DeviceD0Entry @ 0x1C0032B64 (UsbSleepStudy_DeviceD0Entry.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceD0Entry(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  int v4; // eax
  int v5; // esi
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-58h]
  __int64 v10; // [rsp+28h] [rbp-50h]
  unsigned __int128 v11; // [rsp+40h] [rbp-38h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00570C0);
  v3 = *(_QWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 384) = 1;
  v11 = 0uLL;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C0057090)
                  + 4) & 0x1000) != 0
    && EtwActivityIdControl(3u, (LPGUID)(v3 + 2160)) >= 0 )
  {
    v11 = *(_OWORD *)(v3 + 2160);
    _InterlockedOr((volatile signed __int32 *)(v3 + 1620), 0x80u);
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v5 = v4;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 8) != 0 )
  {
    v6 = *(_DWORD *)(v2 + 32) >> 3;
    LOWORD(v6) = (*(_DWORD *)(v2 + 32) & 8) != 0;
    Template_pqqh(v6, &USBHUB3_ETW_EVENT_DEVICE_D0_ENTRY_START, (const GUID *)&v11, *(_QWORD *)(v3 + 24), 1, v4, v6);
  }
  HUBIDLE_AddEvent(v2 + 72, 6007LL, 0LL);
  KeClearEvent((PRKEVENT)(v3 + 1568));
  HUBSM_AddEvent(v3 + 488, 0xFE3u);
  HUBMISC_WaitForSignal((PVOID)(v3 + 1568));
  v7 = *(_DWORD *)(v3 + 1560);
  if ( *(_QWORD *)(v2 + 392) )
    UsbSleepStudy_DeviceD0Entry();
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 8) != 0 )
  {
    LODWORD(v10) = v5;
    LODWORD(v9) = v7;
    Template_pqq(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp),
      &USBHUB3_ETW_EVENT_DEVICE_D0_ENTRY_COMPLETE,
      (const GUID *)&v11,
      *(_QWORD *)(v3 + 24),
      v9,
      v10);
  }
  _InterlockedAnd((volatile signed __int32 *)(v3 + 1620), 0xFFFFFF7F);
  return v7;
}
