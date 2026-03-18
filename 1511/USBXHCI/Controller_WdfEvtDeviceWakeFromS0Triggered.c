/*
 * XREFs of Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1C001FCC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0008E10 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceWakeFromS0Triggered(__int64 a1)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00412A0)
                 + 8);
  WPP_RECORDER_SF_q(*(_QWORD *)(v2 + 64), 4u, 3u, 0x5Du, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, a1);
  return ((__int64 (__fastcall *)(void *, _QWORD))qword_1C0042770)(WPP_MAIN_CB.Dpc.DpcData, **(_QWORD **)(v2 + 120));
}
