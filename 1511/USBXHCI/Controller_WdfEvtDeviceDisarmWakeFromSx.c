/*
 * XREFs of Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x1C001FC50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0008E10 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceDisarmWakeFromSx(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00412A0)
                 + 8);
  result = WPP_RECORDER_SF_q(
             *(_QWORD *)(v2 + 64),
             4u,
             3u,
             0x5Cu,
             (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
             a1);
  *(_BYTE *)(v2 + 348) = 0;
  return result;
}
