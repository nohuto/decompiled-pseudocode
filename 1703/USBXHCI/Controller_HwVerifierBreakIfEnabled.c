/*
 * XREFs of Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8
 * Callers:
 *     Controller_WdfEvtTimerFunction @ 0x1C0001EA0 (Controller_WdfEvtTimerFunction.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0003E90 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005290 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0008FA0 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BA50 (Bulk_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C000C090 (Isoch_ProcessTransferEventWithED1.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C000E6A0 (Control_ProcessTransferEventWithED1.c)
 *     Endpoint_TransferEventHandler @ 0x1C000FB10 (Endpoint_TransferEventHandler.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000FF60 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0017CAC (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtTimerFunction @ 0x1C00185C0 (Command_WdfEvtTimerFunction.c)
 *     Controller_InternalReset @ 0x1C001B1A8 (Controller_InternalReset.c)
 *     Controller_SetControllerGone @ 0x1C001B9FC (Controller_SetControllerGone.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C001D1E0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C001D3D0 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C001EDB0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C001EF50 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C001F840 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C001FB20 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C001FDD4 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C00260EC (Control_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C00286C0 (Isoch_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002B258 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002B520 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C002CDA0 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C002CFB0 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C002D280 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C002D610 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C002E490 (UsbDevice_SetAddressCompletion.c)
 * Callees:
 *     Template_pppxsbb @ 0x1C001C71C (Template_pppxsbb.c)
 *     WPP_RECORDER_SF_s @ 0x1C001CCF8 (WPP_RECORDER_SF_s.c)
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
  _QWORD *v12; // rdx
  __int64 result; // rax
  _QWORD *v14; // rcx
  _QWORD v15[2]; // [rsp+50h] [rbp-18h] BYREF

  v8 = a3;
  v9 = a2;
  WPP_RECORDER_SF_s(a1[8], a2, a3, a4);
  if ( (a4 & a1[42]) != 0 )
  {
    DbgPrint("xHCI Hardware Verifier Break: %s\n", a5);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v12 = v15;
  v15[0] = 0LL;
  v15[1] = 0LL;
  if ( a6 )
    v12 = a6;
  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x10) != 0 )
  {
    v14 = v15;
    if ( a7 )
      v14 = a7;
    return Template_pppxsbb((_DWORD)v14, (_DWORD)v12, v11, a1[1], v9, v8, a4, (__int64)a5, (__int64)v12, (__int64)v14);
  }
  return result;
}
