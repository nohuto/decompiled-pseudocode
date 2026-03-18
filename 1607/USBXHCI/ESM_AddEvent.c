/*
 * XREFs of ESM_AddEvent @ 0x1C0039978
 * Callers:
 *     Control_MapTransfer @ 0x1C00033B4 (Control_MapTransfer.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000ABB0 (Bulk_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C000B270 (Isoch_ProcessTransferEventWithED1.c)
 *     Control_Transfer_MapIntoRing @ 0x1C000D090 (Control_Transfer_MapIntoRing.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C000D930 (Control_ProcessTransferEventWithED1.c)
 *     Endpoint_TransferEventHandler @ 0x1C000EED0 (Endpoint_TransferEventHandler.c)
 *     DeviceSlot_ControllerResetPreReset @ 0x1C0020BE0 (DeviceSlot_ControllerResetPreReset.c)
 *     Endpoint_ClearStallTransferCompletion @ 0x1C0020EC0 (Endpoint_ClearStallTransferCompletion.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0020F30 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0021120 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_Disable @ 0x1C00213D0 (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C0021610 (Endpoint_Enable.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0021A40 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C0021CE0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C00224B0 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C0022650 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C00227B0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C0022AA0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C0022C30 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0022F38 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C0023170 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C00232F0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C0023500 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C00237D0 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C002448C (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1C0024528 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     Endpoint_UcxEvtEndpointOkToCancelTransfers @ 0x1C0024B60 (Endpoint_UcxEvtEndpointOkToCancelTransfers.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C0024D10 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_WdfEvtStateMachineTimer @ 0x1C0025B30 (Endpoint_WdfEvtStateMachineTimer.c)
 *     TR_AttemptStateChange @ 0x1C0028AA4 (TR_AttemptStateChange.c)
 *     TR_TransfersReclaimed @ 0x1C0028FCC (TR_TransfersReclaimed.c)
 *     Control_EP_ProcessExpectedEventTRBs @ 0x1C00295B0 (Control_EP_ProcessExpectedEventTRBs.c)
 *     Control_EP_StopMapping @ 0x1C0029770 (Control_EP_StopMapping.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0029B08 (Control_ProcessTransferEventWithED0.c)
 *     Control_WdfEvtRequestCancel @ 0x1C002A520 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C002A690 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_ProcessExpectedEventTRBs @ 0x1C002B3C0 (Isoch_EP_ProcessExpectedEventTRBs.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C002BE48 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C002C124 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C002C970 (Isoch_WdfEvtRequestCancel.c)
 *     Bulk_EP_ProcessExpectedEventTRBs @ 0x1C002E0C0 (Bulk_EP_ProcessExpectedEventTRBs.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002E6F4 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002E9B0 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_WdfEvtRequestCancel @ 0x1C002F1A0 (Bulk_WdfEvtRequestCancel.c)
 *     UsbDevice_ControllerGone @ 0x1C0030024 (UsbDevice_ControllerGone.c)
 *     UsbDevice_ControllerResetPostReset @ 0x1C00300B8 (UsbDevice_ControllerResetPostReset.c)
 *     ESM_WaitingForFSEAfterStopEndpointCommandCompletion @ 0x1C003B090 (ESM_WaitingForFSEAfterStopEndpointCommandCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0039AC8 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     ESM_RunStateMachine @ 0x1C003A2B8 (ESM_RunStateMachine.c)
 */

void __fastcall ESM_AddEvent(KSPIN_LOCK *Context, int a2)
{
  KSPIN_LOCK *v2; // rdi
  __int64 v4; // rax
  PWDF_DRIVER_GLOBALS v5; // rcx
  __int64 v6; // rax
  KIRQL NewIrql; // [rsp+40h] [rbp+8h]

  v2 = Context + 105;
  NewIrql = KeAcquireSpinLockRaiseToDpc(Context + 105);
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
      v4 = WdfFunctions_01015;
      v5 = WdfDriverGlobals;
      *((_BYTE *)Context + 848) = 1;
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, KSPIN_LOCK))(v4 + 1632))(v5, Context[120]);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v6,
        "State Machine Tag",
        912LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
      goto LABEL_7;
    }
  }
LABEL_8:
  KeReleaseSpinLock(v2, NewIrql);
}
