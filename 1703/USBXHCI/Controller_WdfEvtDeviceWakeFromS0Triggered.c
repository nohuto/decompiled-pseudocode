/*
 * XREFs of Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1C001C590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0009BA0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceWakeFromS0Triggered(__int64 a1)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0045318)
                 + 8);
  WPP_RECORDER_SF_q(*(_QWORD *)(v2 + 64), 4u, 3u, 0x5Du, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, a1);
  return ((__int64 (__fastcall *)(void *, _QWORD))qword_1C0046750)(
           WPP_MAIN_CB.Dpc.SystemArgument2,
           **(_QWORD **)(v2 + 120));
}
