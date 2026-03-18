/*
 * XREFs of ESM_AddEvent @ 0x1C00393A8
 * Callers:
 *     Control_MapTransfer @ 0x1C0001C24 (Control_MapTransfer.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C000B480 (Control_ProcessTransferEventWithED1.c)
 *     Control_Transfer_MapIntoRing @ 0x1C000B950 (Control_Transfer_MapIntoRing.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C000C1D4 (Isoch_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000D690 (Bulk_ProcessTransferEventWithED1.c)
 *     Endpoint_TransferEventHandler @ 0x1C000FC80 (Endpoint_TransferEventHandler.c)
 *     DeviceSlot_ControllerResetPreReset @ 0x1C0020600 (DeviceSlot_ControllerResetPreReset.c)
 *     Endpoint_ClearStallTransferCompletion @ 0x1C00208D0 (Endpoint_ClearStallTransferCompletion.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0020940 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0020B30 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_Disable @ 0x1C0020DE0 (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C0021020 (Endpoint_Enable.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0021450 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C00216F0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0021EB4 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C0022050 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C00221B0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C00224A0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C0022630 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0022938 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C0022B70 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0022CF0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C0022F00 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C00231D0 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C0023E8C (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1C0023F28 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     Endpoint_UcxEvtEndpointOkToCancelTransfers @ 0x1C0024550 (Endpoint_UcxEvtEndpointOkToCancelTransfers.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C0024700 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_WdfEvtStateMachineTimer @ 0x1C0025520 (Endpoint_WdfEvtStateMachineTimer.c)
 *     TR_AttemptStateChange @ 0x1C002846C (TR_AttemptStateChange.c)
 *     TR_TransfersReclaimed @ 0x1C002899C (TR_TransfersReclaimed.c)
 *     Control_EP_ProcessExpectedEventTRBs @ 0x1C0028F90 (Control_EP_ProcessExpectedEventTRBs.c)
 *     Control_EP_StopMapping @ 0x1C0029150 (Control_EP_StopMapping.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C00294E8 (Control_ProcessTransferEventWithED0.c)
 *     Control_WdfEvtRequestCancel @ 0x1C0029F00 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C002A070 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_ProcessExpectedEventTRBs @ 0x1C002ADB0 (Isoch_EP_ProcessExpectedEventTRBs.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C002B838 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C002BB14 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C002C420 (Isoch_WdfEvtRequestCancel.c)
 *     Bulk_EP_ProcessExpectedEventTRBs @ 0x1C002DB50 (Bulk_EP_ProcessExpectedEventTRBs.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002E17C (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002E438 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_WdfEvtRequestCancel @ 0x1C002EC30 (Bulk_WdfEvtRequestCancel.c)
 *     UsbDevice_ControllerGone @ 0x1C002FAB4 (UsbDevice_ControllerGone.c)
 *     UsbDevice_ControllerResetPostReset @ 0x1C002FB48 (UsbDevice_ControllerResetPostReset.c)
 *     ESM_WaitingForFSEAfterStopEndpointCommandCompletion @ 0x1C003AAC0 (ESM_WaitingForFSEAfterStopEndpointCommandCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C00394F8 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     ESM_RunStateMachine @ 0x1C0039CE8 (ESM_RunStateMachine.c)
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
        "drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
      goto LABEL_7;
    }
  }
LABEL_8:
  KeReleaseSpinLock(v2, NewIrql);
}
