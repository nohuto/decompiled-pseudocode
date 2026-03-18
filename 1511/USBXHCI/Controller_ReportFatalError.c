/*
 * XREFs of Controller_ReportFatalError @ 0x1C001F02C
 * Callers:
 *     Controller_WdfEvtTimerFunction @ 0x1C0004270 (Controller_WdfEvtTimerFunction.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0007640 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0008A30 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000A560 (Command_HandleCommandCompletionEvent.c)
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C000ABB0 (Interrupter_WdfEvtInterruptDpc.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C000B480 (Control_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C000C1D4 (Isoch_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000D690 (Bulk_ProcessTransferEventWithED1.c)
 *     Endpoint_TransferEventHandler @ 0x1C000FC80 (Endpoint_TransferEventHandler.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C001B554 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtTimerFunction @ 0x1C001BE40 (Command_WdfEvtTimerFunction.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C001E320 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InternalReset @ 0x1C001E960 (Controller_InternalReset.c)
 *     Controller_SetControllerGone @ 0x1C001F190 (Controller_SetControllerGone.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0020940 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0020B30 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0021EB4 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C0022050 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C00221B0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C00224A0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1C0022630 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C0022B70 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0022CF0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C0022F00 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C00231D0 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C0023468 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C0029A9C (Control_ValidateED0TrbPointerOnMismatch.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C002E7FC (Bulk_ValidateED0TrbPointerOnMismatch.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C002FC50 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C002FE34 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C00300C0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0030440 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0031100 (UsbDevice_SetAddressCompletion.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0048BE0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Controller_InitiateBootRecovery @ 0x1C001E618 (Controller_InitiateBootRecovery.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0020134 (WPP_RECORDER_SF_LL.c)
 */

void __fastcall Controller_ReportFatalError(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // ebp
  __int64 *v10; // rbx
  __int64 v11; // rdi
  __int64 *PoolWithTag; // rax
  KIRQL v13; // al
  __int64 **v14; // rdx
  char v15; // [rsp+30h] [rbp-28h]

  v8 = a2;
  v15 = a2;
  LOBYTE(a2) = 1;
  WPP_RECORDER_SF_LL(
    *(_QWORD *)(a1 + 64),
    a2,
    3,
    216,
    (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
    a3,
    v15);
  DbgPrint("\nXHCI reported fatal error\n");
  if ( (*(_DWORD *)(a1 + 276) & 0x12) != 0 )
  {
    Controller_InitiateBootRecovery((_QWORD *)a1, v8);
  }
  else
  {
    v10 = 0LL;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 256),
            off_1C00412C8);
    if ( a3 )
    {
      PoolWithTag = (__int64 *)ExAllocatePoolWithTag(*(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type, 0x30uLL, 0x49434858u);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag[4] = a5;
        PoolWithTag[5] = a6;
        *((_DWORD *)PoolWithTag + 4) = a3;
        PoolWithTag[3] = a4;
        PoolWithTag[1] = 0LL;
        *PoolWithTag = 0LL;
      }
    }
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 16));
    if ( v10 )
    {
      v14 = *(__int64 ***)(v11 + 8);
      *v10 = v11;
      v10[1] = (__int64)v14;
      if ( *v14 != (__int64 *)v11 )
        __fastfail(3u);
      *v14 = v10;
      *(_QWORD *)(v11 + 8) = v10;
    }
    *(_DWORD *)(v11 + 80) |= v8;
    KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 16), v13);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3040))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 256));
  }
}
