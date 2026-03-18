/*
 * XREFs of Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C
 * Callers:
 *     Controller_WdfEvtTimerFunction @ 0x1C0001000 (Controller_WdfEvtTimerFunction.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00014E0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0004300 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0006030 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0011B24 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0011FBC (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtTimerFunction @ 0x1C00128A0 (Command_WdfEvtTimerFunction.c)
 *     Controller_InternalReset @ 0x1C0015420 (Controller_InternalReset.c)
 *     Controller_SetControllerGone @ 0x1C0015AC0 (Controller_SetControllerGone.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0017230 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0017420 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C0018DB0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C0018F40 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C0019810 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C0019AE0 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C0019D78 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Endpoint_TransferEventHandler @ 0x1C001A8E4 (Endpoint_TransferEventHandler.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0021760 (Control_ProcessTransferEventWithED0.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0021A38 (Control_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C00258F8 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0025BD4 (Isoch_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002ABC0 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002AE7C (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002B2D0 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C002EA40 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C002EC24 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C002EEB0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C002F230 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0030230 (UsbDevice_SetAddressCompletion.c)
 * Callees:
 *     Template_pppxsbb @ 0x1C0016768 (Template_pppxsbb.c)
 *     WPP_RECORDER_SF_s @ 0x1C0016C90 (WPP_RECORDER_SF_s.c)
 */

__int64 __fastcall Controller_HwVerifierBreakIfEnabled(
        _QWORD *a1,
        int a2,
        int a3,
        __int64 a4,
        const char *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  char v8; // bp
  char v9; // r14
  int v11; // r8d
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  __int64 result; // rax
  _QWORD v15[2]; // [rsp+50h] [rbp-18h] BYREF

  v8 = a3;
  v9 = a2;
  WPP_RECORDER_SF_s(a1[8], a2, a3, a4);
  if ( (a4 & a1[41]) != 0 )
  {
    DbgPrint("xHCI Hardware Verifier Break: %s\n", a5);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v12 = v15;
  v15[0] = 0LL;
  v13 = v15;
  v15[1] = 0LL;
  if ( a6 )
    v12 = a6;
  if ( a7 )
    v13 = a7;
  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 0x10) != 0 )
    return Template_pppxsbb((_DWORD)v12, (_DWORD)v13, v11, a1[1], v9, v8, a4, (__int64)a5, (__int64)v12, (__int64)v13);
  return result;
}
