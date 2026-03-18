/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0009BA0
 * Callers:
 *     Controller_WdfEvtTimerFunction @ 0x1C0001EA0 (Controller_WdfEvtTimerFunction.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1C00045C0 (ControllerPreInterruptsDisableAcpiCallout.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0008660 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     CommonBuffer_RebalanceResourcesWorkItem @ 0x1C0009C60 (CommonBuffer_RebalanceResourcesWorkItem.c)
 *     CommonBuffer_WdfEvtCleanupCallback @ 0x1C0019EF0 (CommonBuffer_WdfEvtCleanupCallback.c)
 *     Controller_LPEEnterExitCallback @ 0x1C001B580 (Controller_LPEEnterExitCallback.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C001C2A0 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceArmWakeFromSx @ 0x1C001C390 (Controller_WdfEvtDeviceArmWakeFromSx.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C001C410 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x1C001C510 (Controller_WdfEvtDeviceDisarmWakeFromSx.c)
 *     Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1C001C590 (Controller_WdfEvtDeviceWakeFromS0Triggered.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C001FDD4 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     UsbDevice_EnableCompletion @ 0x1C002D280 (UsbDevice_EnableCompletion.c)
 *     ESM_SimulatingEndpointHaltReceivedOnTimeout @ 0x1C0037F60 (ESM_SimulatingEndpointHaltReceivedOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout @ 0x1C0037FB0 (ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout.c)
 *     ESM_SimulatingExpectedEventTRBsProcessedOnTimeout @ 0x1C0038000 (ESM_SimulatingExpectedEventTRBsProcessedOnTimeout.c)
 *     ESM_SimulatingFSEReceivedOnTimeout @ 0x1C0038050 (ESM_SimulatingFSEReceivedOnTimeout.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C004C600 (Controller_WdfEvtDevicePrepareHardware.c)
 *     DeviceSlot_PrepareHardware @ 0x1C004D8E0 (DeviceSlot_PrepareHardware.c)
 *     DeviceSlot_Create @ 0x1C004E2C0 (DeviceSlot_Create.c)
 *     Register_ParseCapabilityRegister @ 0x1C004EF20 (Register_ParseCapabilityRegister.c)
 *     Register_Create @ 0x1C004F794 (Register_Create.c)
 *     IoControl_Create @ 0x1C004F8A4 (IoControl_Create.c)
 *     CommonBuffer_Create @ 0x1C004F9F0 (CommonBuffer_Create.c)
 *     Command_Create @ 0x1C00503E4 (Command_Create.c)
 *     Controller_ExecuteDSM @ 0x1C0053000 (Controller_ExecuteDSM.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0054360 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C00544D0 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0056120 (UsbDevice_UcxEvtDeviceAdd.c)
 *     IntelPptFilter_Create @ 0x1C00564D4 (IntelPptFilter_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
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
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
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
