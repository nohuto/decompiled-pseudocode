/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0002180
 * Callers:
 *     Controller_WdfEvtTimerFunction @ 0x1C0001EA0 (Controller_WdfEvtTimerFunction.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C0003C20 (CommonBuffer_FlushWorkItems.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0003E90 (Controller_WdfEvtDeviceD0Exit.c)
 *     Register_ControllerStop @ 0x1C0004194 (Register_ControllerStop.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C00051FC (Command_D0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005290 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0005AD0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_Start @ 0x1C0005CF0 (Controller_Start.c)
 *     Register_BiosHandoff @ 0x1C0006044 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C0006120 (Register_ControllerReset.c)
 *     Register_WaitForControllerReady @ 0x1C00062BC (Register_WaitForControllerReady.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0006590 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00067C0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0006A70 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0007010 (RootHub_UcxEvtSetPortFeature.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0008090 (Wmi_CreateControllerCapabilities.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0008830 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireLargeBuffer @ 0x1C0008998 (CommonBuffer_AcquireLargeBuffer.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0008FA0 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C0009460 (Controller_UcxEvtQueryUsbCapability.c)
 *     CommonBuffer_AllocateBuffers @ 0x1C000A090 (CommonBuffer_AllocateBuffers.c)
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C000B190 (Interrupter_WdfEvtInterruptDpc.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000FF60 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0017CAC (Command_HandleCommandRingStoppedEvent.c)
 *     Command_InternalSendCommand @ 0x1C0017F70 (Command_InternalSendCommand.c)
 *     Command_WdfEvtTimerFunction @ 0x1C00185C0 (Command_WdfEvtTimerFunction.c)
 *     CommonBuffer_AcquireSmallBuffer @ 0x1C0019944 (CommonBuffer_AcquireSmallBuffer.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C0019C2C (CommonBuffer_QueueWorkItem.c)
 *     Controller_D0EntryRestoreState @ 0x1C001A6AC (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C001A8C0 (Controller_D0ExitSaveState.c)
 *     Controller_DisableController @ 0x1C001AAB0 (Controller_DisableController.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C001AB30 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InitiateRecovery @ 0x1C001AEDC (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C001B1A8 (Controller_InternalReset.c)
 *     Controller_SetControllerGone @ 0x1C001B9FC (Controller_SetControllerGone.c)
 *     Controller_TelemetryReport @ 0x1C001BAB4 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C001BE10 (Controller_TelemetryReportWorker.c)
 *     Controller_UcxEvtReset @ 0x1C001C140 (Controller_UcxEvtReset.c)
 *     RootHub_ForceU0AndWait @ 0x1C00235B0 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C002392C (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C0023C58 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C0023DC0 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0024000 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0024820 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Isoch_WdfEvtRingEmptyTimer @ 0x1C0029480 (Isoch_WdfEvtRingEmptyTimer.c)
 *     Interrupter_PrepareHardware @ 0x1C004C728 (Interrupter_PrepareHardware.c)
 *     Controller_Create @ 0x1C004CAB0 (Controller_Create.c)
 *     Controller_PopulateTestConfiguration @ 0x1C004D00C (Controller_PopulateTestConfiguration.c)
 *     Controller_SetDeviceDescription @ 0x1C004D100 (Controller_SetDeviceDescription.c)
 *     Interrupter_PrepareInterrupter @ 0x1C004D6A0 (Interrupter_PrepareInterrupter.c)
 *     DeviceSlot_PrepareHardware @ 0x1C004D8E0 (DeviceSlot_PrepareHardware.c)
 *     Command_PrepareHardware @ 0x1C004DAF8 (Command_PrepareHardware.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C004DF0C (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C004EB04 (Controller_ConfigureS0IdleSettings.c)
 *     Register_PrepareHardware @ 0x1C004ED78 (Register_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C004EF20 (Register_ParseCapabilityRegister.c)
 *     RootHub_PrepareHardware @ 0x1C004F420 (RootHub_PrepareHardware.c)
 *     CommonBuffer_InitializePolicy @ 0x1C004FD84 (CommonBuffer_InitializePolicy.c)
 *     Command_ReleaseHardware @ 0x1C0052EE4 (Command_ReleaseHardware.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C0055514 (Interrupter_FilterAllMSIResources.c)
 *     IntelPptFilter_FilterCommand @ 0x1C00570E0 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C00571D0 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C005727C (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
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
