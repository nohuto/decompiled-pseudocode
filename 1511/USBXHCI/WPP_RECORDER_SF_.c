/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0004570
 * Callers:
 *     Controller_WdfEvtTimerFunction @ 0x1C0004270 (Controller_WdfEvtTimerFunction.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C0004610 (CommonBuffer_FlushWorkItems.c)
 *     Register_ControllerStop @ 0x1C0004D34 (Register_ControllerStop.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0004F40 (Controller_WdfEvtDeviceD0Exit.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0005CF0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0005F20 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00061E0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C00065A0 (RootHub_UcxEvtGetPortStatus.c)
 *     Controller_Start @ 0x1C0006CD8 (Controller_Start.c)
 *     Register_BiosHandoff @ 0x1C00070E4 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C00071C0 (Register_ControllerReset.c)
 *     Register_WaitForControllerReady @ 0x1C0007338 (Register_WaitForControllerReady.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0007410 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0007640 (Controller_WdfEvtDeviceD0Entry.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0007A80 (Wmi_CreateControllerCapabilities.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0007DD8 (Command_D0EntryPostInterruptsEnabled.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C00087C0 (Controller_UcxEvtQueryUsbCapability.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0008A30 (Controller_PopulateDeviceFlagsFromKse.c)
 *     CommonBuffer_AllocateBuffers @ 0x1C0009530 (CommonBuffer_AllocateBuffers.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0009960 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireLargeBuffer @ 0x1C0009AC0 (CommonBuffer_AcquireLargeBuffer.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000A560 (Command_HandleCommandCompletionEvent.c)
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C000ABB0 (Interrupter_WdfEvtInterruptDpc.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C001B554 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_InternalSendCommand @ 0x1C001B808 (Command_InternalSendCommand.c)
 *     Command_WdfEvtTimerFunction @ 0x1C001BE40 (Command_WdfEvtTimerFunction.c)
 *     CommonBuffer_AcquireSmallBuffer @ 0x1C001D184 (CommonBuffer_AcquireSmallBuffer.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C001D460 (CommonBuffer_QueueWorkItem.c)
 *     Controller_D0EntryRestoreState @ 0x1C001DEA4 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C001E0B4 (Controller_D0ExitSaveState.c)
 *     Controller_DisableController @ 0x1C001E2A0 (Controller_DisableController.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C001E320 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InitiateRecovery @ 0x1C001E69C (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C001E960 (Controller_InternalReset.c)
 *     Controller_SetControllerGone @ 0x1C001F190 (Controller_SetControllerGone.c)
 *     Controller_TelemetryReport @ 0x1C001F240 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C001F5A0 (Controller_TelemetryReportWorker.c)
 *     Controller_UcxEvtReset @ 0x1C001F8D0 (Controller_UcxEvtReset.c)
 *     RootHub_ForceU0AndWait @ 0x1C0026A6C (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C0026D9C (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C00270A4 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C0027200 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0027440 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0027C40 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Isoch_WdfEvtRingEmptyTimer @ 0x1C002C610 (Isoch_WdfEvtRingEmptyTimer.c)
 *     Interrupter_PrepareHardware @ 0x1C0048D00 (Interrupter_PrepareHardware.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C0048DF8 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareInterrupter @ 0x1C00491C0 (Interrupter_PrepareInterrupter.c)
 *     RootHub_PrepareHardware @ 0x1C0049A50 (RootHub_PrepareHardware.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C0049DBC (Controller_ConfigureS0IdleSettings.c)
 *     Register_PrepareHardware @ 0x1C0049F18 (Register_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C004A0C0 (Register_ParseCapabilityRegister.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C004AC74 (Controller_PopulateHardwareVerifierFlags.c)
 *     CommonBuffer_InitializePolicy @ 0x1C004B48C (CommonBuffer_InitializePolicy.c)
 *     Command_PrepareHardware @ 0x1C004B4E0 (Command_PrepareHardware.c)
 *     DeviceSlot_PrepareHardware @ 0x1C004B6E0 (DeviceSlot_PrepareHardware.c)
 *     Controller_SetDeviceDescription @ 0x1C004B870 (Controller_SetDeviceDescription.c)
 *     Controller_Create @ 0x1C004BE90 (Controller_Create.c)
 *     Controller_PopulateTestConfiguration @ 0x1C004C3E8 (Controller_PopulateTestConfiguration.c)
 *     Command_ReleaseHardware @ 0x1C004F1D4 (Command_ReleaseHardware.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C005188C (Interrupter_FilterAllMSIResources.c)
 *     IntelPptFilter_FilterCommand @ 0x1C00540C0 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C00541A0 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C0054244 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
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
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))&WPP_MAIN_CB.Dpc.TargetInfoAsUlong)(
        *((_QWORD *)v13 + 3),
        43LL,
        a5,
        a4,
        0LL);
  }
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v14, 0LL);
}
