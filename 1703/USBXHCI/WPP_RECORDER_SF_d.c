/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0006370
 * Callers:
 *     Controller_GetFrameNumber @ 0x1C0001D6C (Controller_GetFrameNumber.c)
 *     Controller_WdfEvtTimerFunction @ 0x1C0001EA0 (Controller_WdfEvtTimerFunction.c)
 *     Interrupter_WdfEvtInterruptDisable @ 0x1C0003E10 (Interrupter_WdfEvtInterruptDisable.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0003E90 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C0004050 (Controller_WdfEvtPreprocessSetPowerIrp.c)
 *     Register_ControllerStop @ 0x1C0004194 (Register_ControllerStop.c)
 *     RootHub_HandleResumedPorts @ 0x1C0004260 (RootHub_HandleResumedPorts.c)
 *     Controller_D0Exit @ 0x1C00043A8 (Controller_D0Exit.c)
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1C0004514 (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     RootHub_D0Exit @ 0x1C0004660 (RootHub_D0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005290 (Controller_WdfEvtDeviceD0Entry.c)
 *     Interrupter_WdfEvtInterruptEnable @ 0x1C0005950 (Interrupter_WdfEvtInterruptEnable.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0005AD0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Register_BiosHandoff @ 0x1C0006044 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C0006120 (Register_ControllerReset.c)
 *     Register_WaitForControllerReady @ 0x1C00062BC (Register_WaitForControllerReady.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0006590 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00067C0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0006A70 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0007010 (RootHub_UcxEvtSetPortFeature.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0008660 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0008830 (CommonBuffer_AcquireBuffer.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C0009460 (Controller_UcxEvtQueryUsbCapability.c)
 *     RootHub_UcxEvtGetInfo @ 0x1C0009A60 (RootHub_UcxEvtGetInfo.c)
 *     CommonBuffer_AcquireBuffers @ 0x1C0009DD8 (CommonBuffer_AcquireBuffers.c)
 *     CommonBuffer_AllocateBuffers @ 0x1C000A090 (CommonBuffer_AllocateBuffers.c)
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C000A8D0 (RootHub_UcxEvtGet30PortInfo.c)
 *     RootHub_Read30PortSpeeds @ 0x1C000AAD0 (RootHub_Read30PortSpeeds.c)
 *     RootHub_UcxEvtGet20PortInfo @ 0x1C000ACE0 (RootHub_UcxEvtGet20PortInfo.c)
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C000B190 (Interrupter_WdfEvtInterruptDpc.c)
 *     Command_ASMediaGetFirmwareVersionHighCommandCompletion @ 0x1C00176D0 (Command_ASMediaGetFirmwareVersionHighCommandCompletion.c)
 *     Command_ASMediaGetFirmwareVersionLowCommandCompletion @ 0x1C00177B0 (Command_ASMediaGetFirmwareVersionLowCommandCompletion.c)
 *     Command_NvidiaGetFirmwareVersionCommandCompletion @ 0x1C0018330 (Command_NvidiaGetFirmwareVersionCommandCompletion.c)
 *     Command_RenesasGetFirmwareVersionCommandCompletion @ 0x1C00183F0 (Command_RenesasGetFirmwareVersionCommandCompletion.c)
 *     Command_WdfEvtTimerFunction @ 0x1C00185C0 (Command_WdfEvtTimerFunction.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0019CD4 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_ReleaseBuffers @ 0x1C0019DC0 (CommonBuffer_ReleaseBuffers.c)
 *     Controller_IdleTimeoutUpdateWorker @ 0x1C001ADC0 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_InitiateRecovery @ 0x1C001AEDC (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C001B1A8 (Controller_InternalReset.c)
 *     Controller_TelemetryReport @ 0x1C001BAB4 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C001BE10 (Controller_TelemetryReportWorker.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C0022FC0 (IoControl_WdfEvtIoDeviceControl.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0023264 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_DisableLPMForSlot @ 0x1C0023448 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C00235B0 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C002392C (RootHub_ForceU3.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0023A98 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C0023C58 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C0024398 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0024820 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C002ECF0 (UsbDevice_UcxEvtEnable.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C004C028 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_CreateWdfDevice @ 0x1C004C050 (Controller_CreateWdfDevice.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C004C600 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Interrupter_PrepareHardware @ 0x1C004C728 (Interrupter_PrepareHardware.c)
 *     Interrupter_Create @ 0x1C004C820 (Interrupter_Create.c)
 *     Interrupter_CreateInterrupter @ 0x1C004C88C (Interrupter_CreateInterrupter.c)
 *     Controller_Create @ 0x1C004CAB0 (Controller_Create.c)
 *     Controller_PopulateTestConfiguration @ 0x1C004D00C (Controller_PopulateTestConfiguration.c)
 *     Controller_SetDeviceDescription @ 0x1C004D100 (Controller_SetDeviceDescription.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C004D448 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C004D534 (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 *     Interrupter_PrepareInterrupter @ 0x1C004D6A0 (Interrupter_PrepareInterrupter.c)
 *     DeviceSlot_PrepareHardware @ 0x1C004D8E0 (DeviceSlot_PrepareHardware.c)
 *     Controller_RetrievePciData @ 0x1C004DC6C (Controller_RetrievePciData.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C004DF0C (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_GetDeviceEnumerator @ 0x1C004E1D8 (Controller_GetDeviceEnumerator.c)
 *     DeviceSlot_Create @ 0x1C004E2C0 (DeviceSlot_Create.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C004E670 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C004EB04 (Controller_ConfigureS0IdleSettings.c)
 *     Register_PrepareHardware @ 0x1C004ED78 (Register_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C004EF20 (Register_ParseCapabilityRegister.c)
 *     RootHub_PrepareHardware @ 0x1C004F420 (RootHub_PrepareHardware.c)
 *     Register_Create @ 0x1C004F794 (Register_Create.c)
 *     IoControl_Create @ 0x1C004F8A4 (IoControl_Create.c)
 *     CommonBuffer_Create @ 0x1C004F9F0 (CommonBuffer_Create.c)
 *     RootHub_Create @ 0x1C004FDDC (RootHub_Create.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C004FFB0 (Controller_WdfEvtDeviceAdd.c)
 *     Controller_ConfigureSxWakeSettings @ 0x1C0050218 (Controller_ConfigureSxWakeSettings.c)
 *     Wmi_Create @ 0x1C00502A8 (Wmi_Create.c)
 *     Command_Create @ 0x1C00503E4 (Command_Create.c)
 *     Command_CreateCommandTimeoutTimer @ 0x1C0050500 (Command_CreateCommandTimeoutTimer.c)
 *     Controller_ExecuteDSM @ 0x1C0053000 (Controller_ExecuteDSM.c)
 *     Controller_PopulateVIAFirmwareVersion @ 0x1C0053378 (Controller_PopulateVIAFirmwareVersion.c)
 *     Controller_RetrieveAcpiData @ 0x1C0053560 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C0053788 (Controller_RetrieveUrsData.c)
 *     Controller_TelemetryOkToGenerateReport @ 0x1C0053BAC (Controller_TelemetryOkToGenerateReport.c)
 *     Controller_TelemetryUpdateSubmitReportSuccess @ 0x1C0053E18 (Controller_TelemetryUpdateSubmitReportSuccess.c)
 *     Controller_UpdateIdleTimeout @ 0x1C0054070 (Controller_UpdateIdleTimeout.c)
 *     Controller_UpdateSqmDatapoints @ 0x1C0054178 (Controller_UpdateSqmDatapoints.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C0055514 (Interrupter_FilterAllMSIResources.c)
 *     Isoch_Initialize @ 0x1C0055F40 (Isoch_Initialize.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0056120 (UsbDevice_UcxEvtDeviceAdd.c)
 *     IntelPptFilter_Create @ 0x1C00564D4 (IntelPptFilter_Create.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C005727C (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
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
        4LL,
        0LL);
  }
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v14, va);
}
