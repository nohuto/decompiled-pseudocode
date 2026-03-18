/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0005BA0
 * Callers:
 *     Controller_GetFrameNumber @ 0x1C0001C48 (Controller_GetFrameNumber.c)
 *     Controller_WdfEvtTimerFunction @ 0x1C0001D70 (Controller_WdfEvtTimerFunction.c)
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1C0003C54 (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     Controller_D0Exit @ 0x1C0003DDC (Controller_D0Exit.c)
 *     Interrupter_WdfEvtInterruptDisable @ 0x1C0003E60 (Interrupter_WdfEvtInterruptDisable.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0003EE0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C00040A0 (Controller_WdfEvtPreprocessSetPowerIrp.c)
 *     Register_ControllerStop @ 0x1C00041E0 (Register_ControllerStop.c)
 *     RootHub_HandleResumedPorts @ 0x1C00042A0 (RootHub_HandleResumedPorts.c)
 *     RootHub_D0Exit @ 0x1C00043E0 (RootHub_D0Exit.c)
 *     Interrupter_WdfEvtInterruptEnable @ 0x1C00050C0 (Interrupter_WdfEvtInterruptEnable.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0005230 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Register_ControllerReset @ 0x1C0005790 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C0005A28 (Register_BiosHandoff.c)
 *     Register_WaitForControllerReady @ 0x1C0005AFC (Register_WaitForControllerReady.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0005DA0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0006050 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0006280 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0006640 (RootHub_UcxEvtGetPortStatus.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0006D00 (Controller_WdfEvtDeviceD0Entry.c)
 *     CommonBuffer_AcquireBuffers @ 0x1C0007E44 (CommonBuffer_AcquireBuffers.c)
 *     CommonBuffer_AllocateBuffers @ 0x1C00080E0 (CommonBuffer_AllocateBuffers.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C00087B0 (Controller_UcxEvtQueryUsbCapability.c)
 *     RootHub_UcxEvtGetInfo @ 0x1C0008DA0 (RootHub_UcxEvtGetInfo.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0009010 (CommonBuffer_AcquireBuffer.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0009270 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C0009A10 (RootHub_UcxEvtGet30PortInfo.c)
 *     RootHub_Read30PortSpeeds @ 0x1C0009C10 (RootHub_Read30PortSpeeds.c)
 *     RootHub_UcxEvtGet20PortInfo @ 0x1C0009E30 (RootHub_UcxEvtGet20PortInfo.c)
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C000A2D0 (Interrupter_WdfEvtInterruptDpc.c)
 *     Command_ASMediaGetFirmwareVersionHighCommandCompletion @ 0x1C001B400 (Command_ASMediaGetFirmwareVersionHighCommandCompletion.c)
 *     Command_ASMediaGetFirmwareVersionLowCommandCompletion @ 0x1C001B4D0 (Command_ASMediaGetFirmwareVersionLowCommandCompletion.c)
 *     Command_NvidiaGetFirmwareVersionCommandCompletion @ 0x1C001C030 (Command_NvidiaGetFirmwareVersionCommandCompletion.c)
 *     Command_RenesasGetFirmwareVersionCommandCompletion @ 0x1C001C0E0 (Command_RenesasGetFirmwareVersionCommandCompletion.c)
 *     Command_WdfEvtTimerFunction @ 0x1C001C2A0 (Command_WdfEvtTimerFunction.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C001D968 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_ReleaseBuffers @ 0x1C001DA50 (CommonBuffer_ReleaseBuffers.c)
 *     Controller_IdleTimeoutUpdateWorker @ 0x1C001E9F0 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_InitiateRecovery @ 0x1C001EAFC (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C001EDC0 (Controller_InternalReset.c)
 *     Controller_TelemetryReport @ 0x1C001F6A0 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C001FA00 (Controller_TelemetryReportWorker.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C0026AD0 (IoControl_WdfEvtIoDeviceControl.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0026D44 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_DisableLPMForSlot @ 0x1C0026F24 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C0027088 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C00273B8 (RootHub_ForceU3.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0027520 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C00276D0 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C0027E00 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0028270 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0031F70 (UsbDevice_UcxEvtEnable.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C004A000 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_CreateWdfDevice @ 0x1C004A040 (Controller_CreateWdfDevice.c)
 *     Interrupter_PrepareHardware @ 0x1C004A600 (Interrupter_PrepareHardware.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C004A6F8 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_Create @ 0x1C004A798 (Interrupter_Create.c)
 *     Interrupter_CreateInterrupter @ 0x1C004A7FC (Interrupter_CreateInterrupter.c)
 *     Controller_Create @ 0x1C004AA30 (Controller_Create.c)
 *     Controller_PopulateTestConfiguration @ 0x1C004AF88 (Controller_PopulateTestConfiguration.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C004B1A8 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Interrupter_PrepareInterrupter @ 0x1C004B430 (Interrupter_PrepareInterrupter.c)
 *     CommonBuffer_Create @ 0x1C004B870 (CommonBuffer_Create.c)
 *     Controller_RetrievePciData @ 0x1C004BC98 (Controller_RetrievePciData.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C004BFBC (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_GetDeviceEnumerator @ 0x1C004C284 (Controller_GetDeviceEnumerator.c)
 *     IoControl_Create @ 0x1C004C368 (IoControl_Create.c)
 *     Register_Create @ 0x1C004C4A4 (Register_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C004C8CC (Controller_ConfigureS0IdleSettings.c)
 *     Register_PrepareHardware @ 0x1C004CB40 (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C004CCE0 (RootHub_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C004D050 (Register_ParseCapabilityRegister.c)
 *     DeviceSlot_Create @ 0x1C004D668 (DeviceSlot_Create.c)
 *     RootHub_Create @ 0x1C004D774 (RootHub_Create.c)
 *     DeviceSlot_PrepareHardware @ 0x1C004DB40 (DeviceSlot_PrepareHardware.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C004DCC4 (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 *     Controller_SetDeviceDescription @ 0x1C004DD90 (Controller_SetDeviceDescription.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C004E0D4 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C004E1C0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C004E2E0 (Controller_WdfEvtDeviceAdd.c)
 *     Controller_ConfigureSxWakeSettings @ 0x1C004E524 (Controller_ConfigureSxWakeSettings.c)
 *     Wmi_Create @ 0x1C004E5B0 (Wmi_Create.c)
 *     Command_Create @ 0x1C004E6E4 (Command_Create.c)
 *     Command_CreateCommandTimeoutTimer @ 0x1C004E7F8 (Command_CreateCommandTimeoutTimer.c)
 *     Controller_ExecuteDSM @ 0x1C00513D4 (Controller_ExecuteDSM.c)
 *     Controller_PopulateVIAFirmwareVersion @ 0x1C00516F8 (Controller_PopulateVIAFirmwareVersion.c)
 *     Controller_RetrieveAcpiData @ 0x1C00518C0 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C0051AE4 (Controller_RetrieveUrsData.c)
 *     Controller_TelemetryOkToGenerateReport @ 0x1C0051F00 (Controller_TelemetryOkToGenerateReport.c)
 *     Controller_TelemetryUpdateSubmitReportSuccess @ 0x1C0052164 (Controller_TelemetryUpdateSubmitReportSuccess.c)
 *     Controller_UpdateIdleTimeout @ 0x1C00523B8 (Controller_UpdateIdleTimeout.c)
 *     Controller_UpdateSqmDatapoints @ 0x1C00524B8 (Controller_UpdateSqmDatapoints.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C005398C (Interrupter_FilterAllMSIResources.c)
 *     Isoch_Initialize @ 0x1C00543A0 (Isoch_Initialize.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0054560 (UsbDevice_UcxEvtDeviceAdd.c)
 *     IntelPptFilter_Create @ 0x1C0054910 (IntelPptFilter_Create.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C0056244 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
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
