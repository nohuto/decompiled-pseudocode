/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C00038C0
 * Callers:
 *     Controller_WdfEvtTimerFunction @ 0x1C0001000 (Controller_WdfEvtTimerFunction.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00014E0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_D0Exit @ 0x1C0001840 (Controller_D0Exit.c)
 *     Interrupter_WdfEvtInterruptDisable @ 0x1C00018D0 (Interrupter_WdfEvtInterruptDisable.c)
 *     RootHub_HandleResumedPorts @ 0x1C0001950 (RootHub_HandleResumedPorts.c)
 *     RootHub_D0Exit @ 0x1C0001A90 (RootHub_D0Exit.c)
 *     Register_ControllerStop @ 0x1C0001F04 (Register_ControllerStop.c)
 *     Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C0001FC0 (Controller_WdfEvtPreprocessSetPowerIrp.c)
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1C00021DC (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     Interrupter_WdfEvtInterruptEnable @ 0x1C0002810 (Interrupter_WdfEvtInterruptEnable.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0002AA0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0002CD0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0002F70 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0003330 (RootHub_UcxEvtGetPortStatus.c)
 *     Register_BiosHandoff @ 0x1C0003A68 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C0003B40 (Register_ControllerReset.c)
 *     Register_WaitForControllerReady @ 0x1C0003CC0 (Register_WaitForControllerReady.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0003DA0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0004300 (Controller_WdfEvtDeviceD0Entry.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0005400 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireBuffers @ 0x1C00058A4 (CommonBuffer_AcquireBuffers.c)
 *     CommonBuffer_AllocateBuffers @ 0x1C0005B40 (CommonBuffer_AllocateBuffers.c)
 *     RootHub_UcxEvtGetInfo @ 0x1C0005F00 (RootHub_UcxEvtGetInfo.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C00067B0 (Controller_UcxEvtQueryUsbCapability.c)
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C0007230 (RootHub_UcxEvtGet30PortInfo.c)
 *     RootHub_Read30PortSpeeds @ 0x1C0007430 (RootHub_Read30PortSpeeds.c)
 *     RootHub_UcxEvtGet20PortInfo @ 0x1C0007650 (RootHub_UcxEvtGet20PortInfo.c)
 *     Command_ASMediaGetFirmwareVersionHighCommandCompletion @ 0x1C0011570 (Command_ASMediaGetFirmwareVersionHighCommandCompletion.c)
 *     Command_ASMediaGetFirmwareVersionLowCommandCompletion @ 0x1C0011640 (Command_ASMediaGetFirmwareVersionLowCommandCompletion.c)
 *     Command_NvidiaGetFirmwareVersionCommandCompletion @ 0x1C0012630 (Command_NvidiaGetFirmwareVersionCommandCompletion.c)
 *     Command_RenesasGetFirmwareVersionCommandCompletion @ 0x1C00126E0 (Command_RenesasGetFirmwareVersionCommandCompletion.c)
 *     Command_WdfEvtTimerFunction @ 0x1C00128A0 (Command_WdfEvtTimerFunction.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0013F64 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_ReleaseBuffers @ 0x1C001404C (CommonBuffer_ReleaseBuffers.c)
 *     Controller_GetFrameNumber @ 0x1C0014E4C (Controller_GetFrameNumber.c)
 *     Controller_IdleTimeoutUpdateWorker @ 0x1C0015050 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_InitiateRecovery @ 0x1C001515C (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0015420 (Controller_InternalReset.c)
 *     Controller_TelemetryReport @ 0x1C0015B70 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C0015ED0 (Controller_TelemetryReportWorker.c)
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C001D0A0 (Interrupter_WdfEvtInterruptDpc.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C001DEF0 (IoControl_WdfEvtIoDeviceControl.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C001E158 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_DisableLPMForSlot @ 0x1C001E32C (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C001E48C (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C001E7BC (RootHub_ForceU3.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001E914 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C001EAC4 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C001F1F0 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001F660 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0030B00 (UsbDevice_UcxEvtEnable.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C0047000 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Command_Create @ 0x1C0047020 (Command_Create.c)
 *     Command_CreateCommandTimeoutTimer @ 0x1C0047134 (Command_CreateCommandTimeoutTimer.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C0047200 (Controller_WdfEvtDeviceAdd.c)
 *     Controller_ConfigureSxWakeSettings @ 0x1C0047444 (Controller_ConfigureSxWakeSettings.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C00474D0 (Controller_ConfigureS0IdleSettings.c)
 *     Wmi_Create @ 0x1C0047750 (Wmi_Create.c)
 *     Interrupter_PrepareHardware @ 0x1C0047884 (Interrupter_PrepareHardware.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C004797C (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_Create @ 0x1C0047A1C (Interrupter_Create.c)
 *     Interrupter_CreateInterrupter @ 0x1C0047A80 (Interrupter_CreateInterrupter.c)
 *     Controller_SetDeviceDescription @ 0x1C0047CB0 (Controller_SetDeviceDescription.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C0047FF4 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     DeviceSlot_PrepareHardware @ 0x1C0048360 (DeviceSlot_PrepareHardware.c)
 *     Interrupter_PrepareInterrupter @ 0x1C00484F0 (Interrupter_PrepareInterrupter.c)
 *     RootHub_Create @ 0x1C004872C (RootHub_Create.c)
 *     CommonBuffer_Create @ 0x1C0048950 (CommonBuffer_Create.c)
 *     Controller_RetrievePciData @ 0x1C0048CDC (Controller_RetrievePciData.c)
 *     DeviceSlot_Create @ 0x1C0048FF4 (DeviceSlot_Create.c)
 *     IoControl_Create @ 0x1C0049100 (IoControl_Create.c)
 *     Register_Create @ 0x1C004923C (Register_Create.c)
 *     RootHub_PrepareHardware @ 0x1C0049820 (RootHub_PrepareHardware.c)
 *     Register_PrepareHardware @ 0x1C0049B90 (Register_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C0049D30 (Register_ParseCapabilityRegister.c)
 *     Controller_GetDeviceEnumerator @ 0x1C004A2F8 (Controller_GetDeviceEnumerator.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C004A3DC (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C004A768 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Controller_Create @ 0x1C004A8A0 (Controller_Create.c)
 *     Controller_PopulateTestConfiguration @ 0x1C004ADF8 (Controller_PopulateTestConfiguration.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C004AEE0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_CreateWdfDevice @ 0x1C004B000 (Controller_CreateWdfDevice.c)
 *     Controller_ExecuteDSM @ 0x1C004E268 (Controller_ExecuteDSM.c)
 *     Controller_PopulateVIAFirmwareVersion @ 0x1C004E5B0 (Controller_PopulateVIAFirmwareVersion.c)
 *     Controller_RetrieveAcpiData @ 0x1C004E778 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C004E99C (Controller_RetrieveUrsData.c)
 *     Controller_TelemetryOkToGenerateReport @ 0x1C004EDB8 (Controller_TelemetryOkToGenerateReport.c)
 *     Controller_TelemetryUpdateSubmitReportSuccess @ 0x1C004F01C (Controller_TelemetryUpdateSubmitReportSuccess.c)
 *     Controller_UpdateIdleTimeout @ 0x1C004F268 (Controller_UpdateIdleTimeout.c)
 *     Controller_UpdateSqmDatapoints @ 0x1C004F368 (Controller_UpdateSqmDatapoints.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C005081C (Interrupter_FilterAllMSIResources.c)
 *     Isoch_Initialize @ 0x1C0051210 (Isoch_Initialize.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C00513D0 (UsbDevice_UcxEvtDeviceAdd.c)
 *     IntelPptFilter_Create @ 0x1C0051780 (IntelPptFilter_Create.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C0053244 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
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
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))&WPP_MAIN_CB.Dpc.TargetInfoAsUlong)(
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
