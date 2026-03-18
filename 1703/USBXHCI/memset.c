/*
 * XREFs of memset @ 0x1C0010E80
 * Callers:
 *     TR_ReleaseSegments @ 0x1C00016C4 (TR_ReleaseSegments.c)
 *     Bulk_TransferData_Initialize @ 0x1C000181C (Bulk_TransferData_Initialize.c)
 *     Isoch_TransferData_Initialize @ 0x1C0002C4C (Isoch_TransferData_Initialize.c)
 *     DeviceSlot_ScratchpadBuffersInitialize @ 0x1C0003C90 (DeviceSlot_ScratchpadBuffersInitialize.c)
 *     RootHub_UcxEvtGetHubStatus @ 0x1C0004E70 (RootHub_UcxEvtGetHubStatus.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C00051FC (Command_D0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005290 (Controller_WdfEvtDeviceD0Entry.c)
 *     Command_Initialize @ 0x1C0005F78 (Command_Initialize.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0006590 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00067C0 (RootHub_UcxEvtClearPortFeature.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0008090 (Wmi_CreateControllerCapabilities.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0008830 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireLargeBuffer @ 0x1C0008998 (CommonBuffer_AcquireLargeBuffer.c)
 *     RootHub_UcxEvtGetInfo @ 0x1C0009A60 (RootHub_UcxEvtGetInfo.c)
 *     CommonBuffer_AcquireLargeBuffers @ 0x1C0009EE0 (CommonBuffer_AcquireLargeBuffers.c)
 *     McGenControlCallbackV2 @ 0x1C000A470 (McGenControlCallbackV2.c)
 *     Etw_EnableCallback @ 0x1C000A5B0 (Etw_EnableCallback.c)
 *     Etw_DeviceListRundown @ 0x1C000A860 (Etw_DeviceListRundown.c)
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C000A8D0 (RootHub_UcxEvtGet30PortInfo.c)
 *     RootHub_UcxEvtGet20PortInfo @ 0x1C000ACE0 (RootHub_UcxEvtGet20PortInfo.c)
 *     Control_WdfEvtIoDefault @ 0x1C000EB00 (Control_WdfEvtIoDefault.c)
 *     Control_TransferData_Initialize @ 0x1C000ED1C (Control_TransferData_Initialize.c)
 *     UsbDevice_SetAddress @ 0x1C0010420 (UsbDevice_SetAddress.c)
 *     CommonBuffer_AcquireSmallBuffer @ 0x1C0019944 (CommonBuffer_AcquireSmallBuffer.c)
 *     CommonBuffer_AcquireSmallBuffers @ 0x1C0019A64 (CommonBuffer_AcquireSmallBuffers.c)
 *     Controller_TelemetryReport @ 0x1C001BAB4 (Controller_TelemetryReport.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C001D1E0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_CreateClearStallContext @ 0x1C001D558 (Endpoint_CreateClearStallContext.c)
 *     Endpoint_Enable @ 0x1C001D8B0 (Endpoint_Enable.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C001DCE0 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C001DF80 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C001EC70 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C001FA24 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C001FE64 (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C001FF00 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C0020038 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C0020104 (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C0020258 (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C00205B4 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0020990 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C00210D0 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C00212B0 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0021640 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0021900 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Interrupter_Initialize @ 0x1C0022C08 (Interrupter_Initialize.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C0023DC0 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0024000 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_UcxEvtSetHubFeature @ 0x1C00242F0 (RootHub_UcxEvtSetHubFeature.c)
 *     TR_EnableForwardProgress_Internal @ 0x1C0025204 (TR_EnableForwardProgress_Internal.c)
 *     TR_InitializeTransferRing @ 0x1C00254E8 (TR_InitializeTransferRing.c)
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C00269A0 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C0029090 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     UsbDevice_DisableCompletion @ 0x1C002CFB0 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C002D280 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C002D610 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C002E144 (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C002E490 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C002E8A0 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C002EA60 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C002ECF0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C002EEB0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtHubInfo @ 0x1C002F640 (UsbDevice_UcxEvtHubInfo.c)
 *     UsbDevice_UcxEvtReset @ 0x1C002F730 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C002F9C0 (UsbDevice_UcxEvtUpdate.c)
 *     UsbDevice_UpdateCompletion @ 0x1C002FBB0 (UsbDevice_UpdateCompletion.c)
 *     Etw_EndpointListRundown @ 0x1C0031070 (Etw_EndpointListRundown.c)
 *     Crashdump_Initialize @ 0x1C0031FB0 (Crashdump_Initialize.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C00322AC (Crashdump_InitializeDeviceContext.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x1C0032DE0 (Crashdump_UcxEvtGetDumpData.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x1C0034204 (Crashdump_EventRing_PrepareForDump.c)
 *     Crashdump_Command_PrepareForDump @ 0x1C00344EC (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x1C0034B7C (Crashdump_Endpoint_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x1C0035468 (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C0035808 (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C0035B4C (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C0035CD0 (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x1C0035FC4 (Crashdump_UsbDevice_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C00364A4 (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     TelemetryData_CreateReport @ 0x1C00383E0 (TelemetryData_CreateReport.c)
 *     WerKernelSubmitReport @ 0x1C0038AC8 (WerKernelSubmitReport.c)
 *     WerpAllocateAndInitializeSid @ 0x1C00391E8 (WerpAllocateAndInitializeSid.c)
 *     Controller_CreateWdfDevice @ 0x1C004C050 (Controller_CreateWdfDevice.c)
 *     Interrupter_PrepareHardware @ 0x1C004C728 (Interrupter_PrepareHardware.c)
 *     Interrupter_CreateInterrupter @ 0x1C004C88C (Interrupter_CreateInterrupter.c)
 *     Controller_Create @ 0x1C004CAB0 (Controller_Create.c)
 *     Controller_SetDeviceDescription @ 0x1C004D100 (Controller_SetDeviceDescription.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C004D448 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     DeviceSlot_PrepareHardware @ 0x1C004D8E0 (DeviceSlot_PrepareHardware.c)
 *     Controller_RetrievePciData @ 0x1C004DC6C (Controller_RetrievePciData.c)
 *     DeviceSlot_Create @ 0x1C004E2C0 (DeviceSlot_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C004EB04 (Controller_ConfigureS0IdleSettings.c)
 *     RootHub_PrepareHardware @ 0x1C004F420 (RootHub_PrepareHardware.c)
 *     Register_Create @ 0x1C004F794 (Register_Create.c)
 *     IoControl_Create @ 0x1C004F8A4 (IoControl_Create.c)
 *     CommonBuffer_Create @ 0x1C004F9F0 (CommonBuffer_Create.c)
 *     RootHub_Create @ 0x1C004FDDC (RootHub_Create.c)
 *     Wmi_Create @ 0x1C00502A8 (Wmi_Create.c)
 *     Command_Create @ 0x1C00503E4 (Command_Create.c)
 *     Command_CreateCommandTimeoutTimer @ 0x1C0050500 (Command_CreateCommandTimeoutTimer.c)
 *     DriverEntry @ 0x1C00505D0 (DriverEntry.c)
 *     Counter_Register @ 0x1C00508F4 (Counter_Register.c)
 *     Controller_ExecuteDSM @ 0x1C0053000 (Controller_ExecuteDSM.c)
 *     Controller_RetrieveAcpiData @ 0x1C0053560 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C0053788 (Controller_RetrieveUrsData.c)
 *     Controller_UpdateIdleTimeout @ 0x1C0054070 (Controller_UpdateIdleTimeout.c)
 *     WppTraceCallback @ 0x1C0054820 (WppTraceCallback.c)
 *     Endpoint_Create @ 0x1C0054A74 (Endpoint_Create.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C00550D0 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C00552C0 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 *     TR_Create @ 0x1C0055924 (TR_Create.c)
 *     Control_Initialize @ 0x1C0055D40 (Control_Initialize.c)
 *     Isoch_Initialize @ 0x1C0055F40 (Isoch_Initialize.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0056120 (UsbDevice_UcxEvtDeviceAdd.c)
 *     Wmi_WdfEvtWmi_GetControllerCapabilities @ 0x1C0056440 (Wmi_WdfEvtWmi_GetControllerCapabilities.c)
 *     IntelPptFilter_Create @ 0x1C00564D4 (IntelPptFilter_Create.c)
 *     TelemetryData_pInitWerContext @ 0x1C0056AC0 (TelemetryData_pInitWerContext.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  size_t v4; // r9
  size_t i; // r8
  unsigned int v6; // ecx
  _QWORD *v7; // rcx
  size_t v8; // r10
  size_t j; // r8

  result = a1;
  if ( Size < 8 )
  {
LABEL_5:
    for ( i = Size & 7; i; --i )
      *((char *)a1 + i - 1) = Val;
    return result;
  }
  *(_QWORD *)&Val = 0x101010101010101LL * (unsigned __int8)Val;
  if ( Size < 0x47 )
  {
    v4 = Size & 0x78;
    a1 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
    do
    {
      *(_QWORD *)((char *)result + v4 - 8) = *(_QWORD *)&Val;
      v4 -= 8LL;
    }
    while ( v4 );
    goto LABEL_5;
  }
  v6 = -(int)a1 & 7;
  if ( v6 )
  {
    Size -= v6;
    *(_QWORD *)result = *(_QWORD *)&Val;
  }
  v7 = (char *)result + v6;
  v8 = Size >> 6;
  if ( ((Size >> 3) & 7) != 0 )
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C0010F3D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
                     &v7[((Size >> 3) & 7) - 8],
                     *(_QWORD *)&Val);
  do
  {
    *v7 = *(_QWORD *)&Val;
    v7[1] = *(_QWORD *)&Val;
    v7[2] = *(_QWORD *)&Val;
    v7[3] = *(_QWORD *)&Val;
    v7[4] = *(_QWORD *)&Val;
    v7[5] = *(_QWORD *)&Val;
    v7[6] = *(_QWORD *)&Val;
    v7[7] = *(_QWORD *)&Val;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  for ( j = Size & 7; j; --j )
    *((_BYTE *)v7 + j - 1) = Val;
  return result;
}
