/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0002070
 * Callers:
 *     Controller_WdfEvtTimerFunction @ 0x1C0001D70 (Controller_WdfEvtTimerFunction.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C0003AC0 (CommonBuffer_FlushWorkItems.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0003EE0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Register_ControllerStop @ 0x1C00041E0 (Register_ControllerStop.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0004DA8 (Command_D0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0005230 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_Start @ 0x1C0005440 (Controller_Start.c)
 *     Register_ControllerReset @ 0x1C0005790 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C0005A28 (Register_BiosHandoff.c)
 *     Register_WaitForControllerReady @ 0x1C0005AFC (Register_WaitForControllerReady.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0005DA0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0006050 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0006280 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0006640 (RootHub_UcxEvtGetPortStatus.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0006D00 (Controller_WdfEvtDeviceD0Entry.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0007140 (Wmi_CreateControllerCapabilities.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00076D0 (Controller_PopulateDeviceFlagsFromKse.c)
 *     CommonBuffer_AllocateBuffers @ 0x1C00080E0 (CommonBuffer_AllocateBuffers.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C00087B0 (Controller_UcxEvtQueryUsbCapability.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0009010 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireLargeBuffer @ 0x1C0009170 (CommonBuffer_AcquireLargeBuffer.c)
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C000A2D0 (Interrupter_WdfEvtInterruptDpc.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000F3C0 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C001B9B4 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_InternalSendCommand @ 0x1C001BC70 (Command_InternalSendCommand.c)
 *     Command_WdfEvtTimerFunction @ 0x1C001C2A0 (Command_WdfEvtTimerFunction.c)
 *     CommonBuffer_AcquireSmallBuffer @ 0x1C001D5E8 (CommonBuffer_AcquireSmallBuffer.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C001D8C4 (CommonBuffer_QueueWorkItem.c)
 *     Controller_D0EntryRestoreState @ 0x1C001E304 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C001E514 (Controller_D0ExitSaveState.c)
 *     Controller_DisableController @ 0x1C001E700 (Controller_DisableController.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C001E780 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InitiateRecovery @ 0x1C001EAFC (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C001EDC0 (Controller_InternalReset.c)
 *     Controller_SetControllerGone @ 0x1C001F5F0 (Controller_SetControllerGone.c)
 *     Controller_TelemetryReport @ 0x1C001F6A0 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C001FA00 (Controller_TelemetryReportWorker.c)
 *     Controller_UcxEvtReset @ 0x1C001FD30 (Controller_UcxEvtReset.c)
 *     RootHub_ForceU0AndWait @ 0x1C0027088 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C00273B8 (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C00276D0 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C0027830 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0027A70 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0028270 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Isoch_WdfEvtRingEmptyTimer @ 0x1C002CB60 (Isoch_WdfEvtRingEmptyTimer.c)
 *     Interrupter_PrepareHardware @ 0x1C004A600 (Interrupter_PrepareHardware.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C004A6F8 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Controller_Create @ 0x1C004AA30 (Controller_Create.c)
 *     Controller_PopulateTestConfiguration @ 0x1C004AF88 (Controller_PopulateTestConfiguration.c)
 *     Interrupter_PrepareInterrupter @ 0x1C004B430 (Interrupter_PrepareInterrupter.c)
 *     CommonBuffer_InitializePolicy @ 0x1C004B66C (CommonBuffer_InitializePolicy.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C004BFBC (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C004C8CC (Controller_ConfigureS0IdleSettings.c)
 *     Register_PrepareHardware @ 0x1C004CB40 (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C004CCE0 (RootHub_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C004D050 (Register_ParseCapabilityRegister.c)
 *     Command_PrepareHardware @ 0x1C004D944 (Command_PrepareHardware.c)
 *     DeviceSlot_PrepareHardware @ 0x1C004DB40 (DeviceSlot_PrepareHardware.c)
 *     Controller_SetDeviceDescription @ 0x1C004DD90 (Controller_SetDeviceDescription.c)
 *     Command_ReleaseHardware @ 0x1C00512BC (Command_ReleaseHardware.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C005398C (Interrupter_FilterAllMSIResources.c)
 *     IntelPptFilter_FilterCommand @ 0x1C00560C0 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C00561A0 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C0056244 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5)
{
  unsigned __int64 v9; // rdi
  unsigned __int16 v10; // r8
  int v11; // eax
  char *v13; // rcx
  int v14; // [rsp+20h] [rbp-18h]

  v9 = (unsigned __int64)a3 >> 16;
  v10 = a3 - 1;
  v11 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v9 + (v10 >> 5) + 1);
  if ( _bittest(&v11, v10 & 0x1F) )
  {
    v13 = (char *)WPP_GLOBAL_Control + 80 * v9;
    if ( (unsigned __int8)v13[41] >= a2 )
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
        *((_QWORD *)v13 + 3),
        43LL,
        a5,
        a4,
        0LL);
  }
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v14, 0LL);
}
