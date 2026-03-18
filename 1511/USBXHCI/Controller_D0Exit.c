/*
 * XREFs of Controller_D0Exit @ 0x1C000467C
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0004F40 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     Register_ControllerStop @ 0x1C0004D34 (Register_ControllerStop.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qL @ 0x1C001C810 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall Controller_D0Exit(_QWORD *a1, char a2, __int64 a3)
{
  int v5; // edx
  __int64 result; // rax
  int v7; // edx

  LOBYTE(a3) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2560))(
    WdfDriverGlobals,
    a1[31],
    a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_qL(a1[8], v5, 3, 120, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, (char)a1, a2);
  }
  result = Register_ControllerStop(a1[10]);
  if ( (int)result < 0 )
  {
    LOBYTE(v7) = 2;
    return WPP_RECORDER_SF_d(a1[8], v7, 3, 121, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, result);
  }
  return result;
}
