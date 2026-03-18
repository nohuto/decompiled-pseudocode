/*
 * XREFs of ESM_AddEvent @ 0x1C0036A00
 * Callers:
 *     Control_MapTransfer @ 0x1C000358C (Control_MapTransfer.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BA50 (Bulk_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C000C090 (Isoch_ProcessTransferEventWithED1.c)
 *     Control_Transfer_MapIntoRing @ 0x1C000DDE0 (Control_Transfer_MapIntoRing.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C000E6A0 (Control_ProcessTransferEventWithED1.c)
 *     Endpoint_TransferEventHandler @ 0x1C000FB10 (Endpoint_TransferEventHandler.c)
 *     DeviceSlot_ControllerResetPreReset @ 0x1C001CE60 (DeviceSlot_ControllerResetPreReset.c)
 *     Endpoint_ClearStallTransferCompletion @ 0x1C001D170 (Endpoint_ClearStallTransferCompletion.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C001D1E0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C001D3D0 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_Enable @ 0x1C001D8B0 (Endpoint_Enable.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C001DCE0 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C001DF80 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C001E794 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C001E940 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C001EAB0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C001EDB0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C001EF50 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C001F25C (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C001F4A0 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C001F630 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C001F840 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C001FB20 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C0020830 (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1C00208D4 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     Endpoint_UcxEvtEndpointOkToCancelTransfers @ 0x1C0020F10 (Endpoint_UcxEvtEndpointOkToCancelTransfers.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C00210D0 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_WdfEvtStateMachineTimer @ 0x1C0021F20 (Endpoint_WdfEvtStateMachineTimer.c)
 *     TR_AttemptStateChange @ 0x1C0025084 (TR_AttemptStateChange.c)
 *     TR_TransfersReclaimed @ 0x1C0025624 (TR_TransfersReclaimed.c)
 *     Control_EP_ProcessExpectedEventTRBs @ 0x1C0025B40 (Control_EP_ProcessExpectedEventTRBs.c)
 *     Control_EP_StopMapping @ 0x1C0025D20 (Control_EP_StopMapping.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C00260EC (Control_ProcessTransferEventWithED0.c)
 *     Control_WdfEvtRequestCancel @ 0x1C0026B30 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C0026CB0 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_ProcessExpectedEventTRBs @ 0x1C0027BA0 (Isoch_EP_ProcessExpectedEventTRBs.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C00286C0 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C00289A4 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C0029280 (Isoch_WdfEvtRequestCancel.c)
 *     Bulk_EP_ProcessExpectedEventTRBs @ 0x1C002ABE0 (Bulk_EP_ProcessExpectedEventTRBs.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002B258 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002B520 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_WdfEvtRequestCancel @ 0x1C002BD30 (Bulk_WdfEvtRequestCancel.c)
 *     UsbDevice_ControllerGone @ 0x1C002CBEC (UsbDevice_ControllerGone.c)
 *     UsbDevice_ControllerResetPostReset @ 0x1C002CC88 (UsbDevice_ControllerResetPostReset.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C002CDA0 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C002CFB0 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C002D280 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C002D610 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C002E75C (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C002EA60 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C002ECF0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C002EEB0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C002F730 (UsbDevice_UcxEvtReset.c)
 *     ESM_WaitingForFSEAfterStopEndpointCommandCompletion @ 0x1C0038270 (ESM_WaitingForFSEAfterStopEndpointCommandCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0036B54 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     ESM_RunStateMachine @ 0x1C003737C (ESM_RunStateMachine.c)
 */

void __fastcall ESM_AddEvent(KSPIN_LOCK *Context, int a2)
{
  KSPIN_LOCK *v2; // rsi
  __int64 v5; // rax
  KSPIN_LOCK v6; // rdx
  __int64 v7; // rax
  KIRQL v8; // [rsp+48h] [rbp+10h]

  v2 = Context + 105;
  v8 = KeAcquireSpinLockRaiseToDpc(Context + 105);
  *((_DWORD *)Context + *((unsigned __int8 *)Context + 833) + 192) = a2;
  *((_BYTE *)Context + 833) = (*((_BYTE *)Context + 833) + 1) & 0xF;
  if ( *((_BYTE *)Context + 1016) )
  {
    if ( a2 == 126 )
    {
      *((_BYTE *)Context + 1016) = 0;
      ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(Context);
LABEL_7:
      ESM_RunStateMachine(Context);
      goto LABEL_8;
    }
    *((_DWORD *)Context + *((unsigned __int8 *)Context + 949) + 221) = a2;
    *((_BYTE *)Context + 949) = (*((_BYTE *)Context + 949) + 1) & 0xF;
  }
  else
  {
    *((_DWORD *)Context + *((unsigned __int8 *)Context + 949) + 221) = a2;
    *((_BYTE *)Context + 949) = (*((_BYTE *)Context + 949) + 1) & 0xF;
    if ( !*((_BYTE *)Context + 848) )
    {
      v5 = WdfFunctions_01015;
      v6 = Context[120];
      *((_BYTE *)Context + 848) = 1;
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, KSPIN_LOCK))(v5 + 1632))(WdfDriverGlobals, v6);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v7,
        "State Machine Tag",
        912LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
      goto LABEL_7;
    }
  }
LABEL_8:
  KeReleaseSpinLock(v2, v8);
}
