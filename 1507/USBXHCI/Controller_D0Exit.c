/*
 * XREFs of Controller_D0Exit @ 0x1C0001840
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00014E0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     Register_ControllerStop @ 0x1C0001F04 (Register_ControllerStop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0013270 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall Controller_D0Exit(_QWORD *a1, char a2, __int64 a3)
{
  int v5; // edx
  __int64 result; // rax
  int v7; // edx

  LOBYTE(a3) = 1;
  (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64))(WdfFunctions_01015 + 2560))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    a1[31],
    a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_qL(a1[8], v5, 3, 118, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, (char)a1, a2);
  }
  result = Register_ControllerStop(a1[10]);
  if ( (int)result < 0 )
  {
    LOBYTE(v7) = 2;
    return WPP_RECORDER_SF_d(a1[8], v7, 3, 119, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, result);
  }
  return result;
}
