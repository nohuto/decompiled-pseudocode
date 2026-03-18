/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0005E40
 * Callers:
 *     Controller_WdfEvtTimerFunction @ 0x1C0001000 (Controller_WdfEvtTimerFunction.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1C0002280 (ControllerPreInterruptsDisableAcpiCallout.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C00051E0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     CommonBuffer_RebalanceResourcesWorkItem @ 0x1C0005730 (CommonBuffer_RebalanceResourcesWorkItem.c)
 *     CommonBuffer_WdfEvtCleanupCallback @ 0x1C0014180 (CommonBuffer_WdfEvtCleanupCallback.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0016340 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceArmWakeFromSx @ 0x1C0016420 (Controller_WdfEvtDeviceArmWakeFromSx.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0016490 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x1C0016580 (Controller_WdfEvtDeviceDisarmWakeFromSx.c)
 *     Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1C00165F0 (Controller_WdfEvtDeviceWakeFromS0Triggered.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C0019D78 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     UsbDevice_EnableCompletion @ 0x1C002EEB0 (UsbDevice_EnableCompletion.c)
 *     ESM_SimulatingEndpointHaltReceivedOnTimeout @ 0x1C0039830 (ESM_SimulatingEndpointHaltReceivedOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout @ 0x1C0039870 (ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedOnTimeout @ 0x1C00398B0 (ESM_SimulatingExpectedEventTRBsProcessedOnTimeout.c)
 *     ESM_SimulatingFSEReceivedOnTimeout @ 0x1C00398F0 (ESM_SimulatingFSEReceivedOnTimeout.c)
 *     Command_Create @ 0x1C0047020 (Command_Create.c)
 *     DeviceSlot_PrepareHardware @ 0x1C0048360 (DeviceSlot_PrepareHardware.c)
 *     CommonBuffer_Create @ 0x1C0048950 (CommonBuffer_Create.c)
 *     DeviceSlot_Create @ 0x1C0048FF4 (DeviceSlot_Create.c)
 *     IoControl_Create @ 0x1C0049100 (IoControl_Create.c)
 *     Register_Create @ 0x1C004923C (Register_Create.c)
 *     Register_ParseCapabilityRegister @ 0x1C0049D30 (Register_ParseCapabilityRegister.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C004AEE0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_ExecuteDSM @ 0x1C004E268 (Controller_ExecuteDSM.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C004F540 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C004F6B0 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C00513D0 (UsbDevice_UcxEvtDeviceAdd.c)
 *     IntelPptFilter_Create @ 0x1C0051780 (IntelPptFilter_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v9; // rdi
  unsigned __int16 v10; // r8
  int v11; // eax
  char *v13; // rcx
  int v14; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a3 - 1;
  v11 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v9 + (v10 >> 5) + 1);
  if ( _bittest(&v11, v10 & 0x1F) )
  {
    v13 = (char *)WPP_GLOBAL_Control + 80 * v9;
    if ( (unsigned __int8)v13[41] >= a2 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))&WPP_MAIN_CB.Dpc.TargetInfoAsUlong)(
        *((_QWORD *)v13 + 3),
        43LL,
        a5,
        a4,
        va,
        8LL,
        0LL);
  }
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v14, va);
}
