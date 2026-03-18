/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0001300
 * Callers:
 *     Controller_WdfEvtTimerFunction @ 0x1C0001000 (Controller_WdfEvtTimerFunction.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C00013A0 (CommonBuffer_FlushWorkItems.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00014E0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Register_ControllerStop @ 0x1C0001F04 (Register_ControllerStop.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0002AA0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0002CD0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0002F70 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0003330 (RootHub_UcxEvtGetPortStatus.c)
 *     Register_BiosHandoff @ 0x1C0003A68 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C0003B40 (Register_ControllerReset.c)
 *     Register_WaitForControllerReady @ 0x1C0003CC0 (Register_WaitForControllerReady.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0003DA0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_Start @ 0x1C0003FB0 (Controller_Start.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0004300 (Controller_WdfEvtDeviceD0Entry.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0004A60 (Wmi_CreateControllerCapabilities.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0004DB8 (Command_D0EntryPostInterruptsEnabled.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0005400 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireLargeBuffer @ 0x1C0005560 (CommonBuffer_AcquireLargeBuffer.c)
 *     CommonBuffer_AllocateBuffers @ 0x1C0005B40 (CommonBuffer_AllocateBuffers.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0006030 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C00067B0 (Controller_UcxEvtQueryUsbCapability.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0011B24 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0011FBC (Command_HandleCommandRingStoppedEvent.c)
 *     Command_InternalSendCommand @ 0x1C0012270 (Command_InternalSendCommand.c)
 *     Command_WdfEvtTimerFunction @ 0x1C00128A0 (Command_WdfEvtTimerFunction.c)
 *     CommonBuffer_AcquireSmallBuffer @ 0x1C0013BE4 (CommonBuffer_AcquireSmallBuffer.c)
 *     CommonBuffer_QueueWorkItem @ 0x1C0013EC0 (CommonBuffer_QueueWorkItem.c)
 *     Controller_D0EntryRestoreState @ 0x1C0014854 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C0014A64 (Controller_D0ExitSaveState.c)
 *     Controller_DisableController @ 0x1C0014C50 (Controller_DisableController.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1C0014CD0 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_InitiateRecovery @ 0x1C001515C (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0015420 (Controller_InternalReset.c)
 *     Controller_SetControllerGone @ 0x1C0015AC0 (Controller_SetControllerGone.c)
 *     Controller_TelemetryReport @ 0x1C0015B70 (Controller_TelemetryReport.c)
 *     Controller_TelemetryReportWorker @ 0x1C0015ED0 (Controller_TelemetryReportWorker.c)
 *     Controller_UcxEvtReset @ 0x1C0016200 (Controller_UcxEvtReset.c)
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C001D0A0 (Interrupter_WdfEvtInterruptDpc.c)
 *     RootHub_ForceU0AndWait @ 0x1C001E48C (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C001E7BC (RootHub_ForceU3.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C001EAC4 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C001EC20 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C001EE60 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001F660 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Isoch_WdfEvtRingEmptyTimer @ 0x1C00288B0 (Isoch_WdfEvtRingEmptyTimer.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C00474D0 (Controller_ConfigureS0IdleSettings.c)
 *     Interrupter_PrepareHardware @ 0x1C0047884 (Interrupter_PrepareHardware.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C004797C (Interrupter_PopulateInterrupterLookupTable.c)
 *     Controller_SetDeviceDescription @ 0x1C0047CB0 (Controller_SetDeviceDescription.c)
 *     Command_PrepareHardware @ 0x1C004816C (Command_PrepareHardware.c)
 *     DeviceSlot_PrepareHardware @ 0x1C0048360 (DeviceSlot_PrepareHardware.c)
 *     Interrupter_PrepareInterrupter @ 0x1C00484F0 (Interrupter_PrepareInterrupter.c)
 *     CommonBuffer_InitializePolicy @ 0x1C00488FC (CommonBuffer_InitializePolicy.c)
 *     RootHub_PrepareHardware @ 0x1C0049820 (RootHub_PrepareHardware.c)
 *     Register_PrepareHardware @ 0x1C0049B90 (Register_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C0049D30 (Register_ParseCapabilityRegister.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C004A3DC (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_Create @ 0x1C004A8A0 (Controller_Create.c)
 *     Controller_PopulateTestConfiguration @ 0x1C004ADF8 (Controller_PopulateTestConfiguration.c)
 *     Command_ReleaseHardware @ 0x1C004E15C (Command_ReleaseHardware.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C005081C (Interrupter_FilterAllMSIResources.c)
 *     IntelPptFilter_FilterCommand @ 0x1C00530C0 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C00531A0 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C0053244 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
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
