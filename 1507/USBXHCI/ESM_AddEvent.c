/*
 * XREFs of ESM_AddEvent @ 0x1C00383C8
 * Callers:
 *     DeviceSlot_ControllerResetPreReset @ 0x1C0016EB4 (DeviceSlot_ControllerResetPreReset.c)
 *     Endpoint_ClearStallTransferCompletion @ 0x1C00171C0 (Endpoint_ClearStallTransferCompletion.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0017230 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0017420 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_Disable @ 0x1C00176D0 (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C0017910 (Endpoint_Enable.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0017D40 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C0017FE0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C00187C4 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C0018960 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0018AC0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C0018DB0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C0018F40 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0019248 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C0019480 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0019600 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C0019810 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C0019AE0 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C001A79C (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1C001A838 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     Endpoint_TransferEventHandler @ 0x1C001A8E4 (Endpoint_TransferEventHandler.c)
 *     Endpoint_UcxEvtEndpointOkToCancelTransfers @ 0x1C001B260 (Endpoint_UcxEvtEndpointOkToCancelTransfers.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C001B410 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_WdfEvtStateMachineTimer @ 0x1C001C230 (Endpoint_WdfEvtStateMachineTimer.c)
 *     TR_AttemptStateChange @ 0x1C00200A0 (TR_AttemptStateChange.c)
 *     TR_TransfersReclaimed @ 0x1C0020AE8 (TR_TransfersReclaimed.c)
 *     Control_EP_ProcessExpectedEventTRBs @ 0x1C00210E0 (Control_EP_ProcessExpectedEventTRBs.c)
 *     Control_EP_StopMapping @ 0x1C00212A0 (Control_EP_StopMapping.c)
 *     Control_MapTransfer @ 0x1C00214A8 (Control_MapTransfer.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0021760 (Control_ProcessTransferEventWithED0.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0021A38 (Control_ProcessTransferEventWithED1.c)
 *     Control_Transfer_MapIntoRing @ 0x1C0022660 (Control_Transfer_MapIntoRing.c)
 *     Control_WdfEvtRequestCancel @ 0x1C00234F0 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C0023660 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_ProcessExpectedEventTRBs @ 0x1C0024970 (Isoch_EP_ProcessExpectedEventTRBs.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C00258F8 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0025BD4 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C0025EC4 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C00286C0 (Isoch_WdfEvtRequestCancel.c)
 *     Bulk_EP_ProcessExpectedEventTRBs @ 0x1C0029F50 (Bulk_EP_ProcessExpectedEventTRBs.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002ABC0 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002AE7C (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002B2D0 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_WdfEvtRequestCancel @ 0x1C002D4B0 (Bulk_WdfEvtRequestCancel.c)
 *     UsbDevice_ControllerGone @ 0x1C002E8A4 (UsbDevice_ControllerGone.c)
 *     UsbDevice_ControllerResetPostReset @ 0x1C002E938 (UsbDevice_ControllerResetPostReset.c)
 *     ESM_WaitingForFSEAfterStopEndpointCommandCompletion @ 0x1C0039AE0 (ESM_WaitingForFSEAfterStopEndpointCommandCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0038518 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     ESM_RunStateMachine @ 0x1C0038D08 (ESM_RunStateMachine.c)
 */

void __fastcall ESM_AddEvent(KSPIN_LOCK *Context, int a2)
{
  KSPIN_LOCK *v2; // rdi
  __int64 v4; // rax
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
      *((_BYTE *)Context + 848) = 1;
      v4 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, KSPIN_LOCK))(WdfFunctions_01015 + 1632))(
             WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
             Context[120]);
      (*(void (__fastcall **)(_LIST_ENTRY *, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
        v4,
        "State Machine Tag",
        912LL,
        "drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
      goto LABEL_7;
    }
  }
LABEL_8:
  KeReleaseSpinLock(v2, NewIrql);
}
