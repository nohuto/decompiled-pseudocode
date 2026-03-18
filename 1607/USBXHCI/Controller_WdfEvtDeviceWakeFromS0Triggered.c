/*
 * XREFs of Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1C0020120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0008630 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceWakeFromS0Triggered(__int64 a1)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0043318)
                 + 8);
  WPP_RECORDER_SF_q(*(_QWORD *)(v2 + 64), 4u, 3u, 0x5Du, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, a1);
  return ((__int64 (__fastcall *)(void *, _QWORD))qword_1C0044750)(
           WPP_MAIN_CB.Dpc.SystemArgument2,
           **(_QWORD **)(v2 + 120));
}
