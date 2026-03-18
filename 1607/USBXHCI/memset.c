/*
 * XREFs of memset @ 0x1C0010200
 * Callers:
 *     TR_ReleaseSegments @ 0x1C000165C (TR_ReleaseSegments.c)
 *     Bulk_TransferData_Initialize @ 0x1C00017A4 (Bulk_TransferData_Initialize.c)
 *     Isoch_TransferData_Initialize @ 0x1C0002AB8 (Isoch_TransferData_Initialize.c)
 *     DeviceSlot_ScratchpadBuffersInitialize @ 0x1C0004914 (DeviceSlot_ScratchpadBuffersInitialize.c)
 *     RootHub_UcxEvtGetHubStatus @ 0x1C0004AE0 (RootHub_UcxEvtGetHubStatus.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0004DA8 (Command_D0EntryPostInterruptsEnabled.c)
 *     Interrupter_D0Entry @ 0x1C0004E40 (Interrupter_D0Entry.c)
 *     Command_Initialize @ 0x1C00056C4 (Command_Initialize.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0005DA0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0006050 (RootHub_UcxEvtInterruptTransfer.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0007140 (Wmi_CreateControllerCapabilities.c)
 *     CommonBuffer_AcquireLargeBuffers @ 0x1C0007F40 (CommonBuffer_AcquireLargeBuffers.c)
 *     RootHub_UcxEvtGetInfo @ 0x1C0008DA0 (RootHub_UcxEvtGetInfo.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0009010 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireLargeBuffer @ 0x1C0009170 (CommonBuffer_AcquireLargeBuffer.c)
 *     McGenControlCallbackV2 @ 0x1C00095D0 (McGenControlCallbackV2.c)
 *     Etw_EnableCallback @ 0x1C0009710 (Etw_EnableCallback.c)
 *     Etw_DeviceListRundown @ 0x1C00099B0 (Etw_DeviceListRundown.c)
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C0009A10 (RootHub_UcxEvtGet30PortInfo.c)
 *     RootHub_UcxEvtGet20PortInfo @ 0x1C0009E30 (RootHub_UcxEvtGet20PortInfo.c)
 *     Control_WdfEvtIoDefault @ 0x1C000DD80 (Control_WdfEvtIoDefault.c)
 *     Control_TransferData_Initialize @ 0x1C000DF94 (Control_TransferData_Initialize.c)
 *     UsbDevice_SetAddress @ 0x1C000F87C (UsbDevice_SetAddress.c)
 *     CommonBuffer_AcquireSmallBuffer @ 0x1C001D5E8 (CommonBuffer_AcquireSmallBuffer.c)
 *     CommonBuffer_AcquireSmallBuffers @ 0x1C001D704 (CommonBuffer_AcquireSmallBuffers.c)
 *     Controller_TelemetryReport @ 0x1C001F6A0 (Controller_TelemetryReport.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0020F30 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_CreateClearStallContext @ 0x1C00212A0 (Endpoint_CreateClearStallContext.c)
 *     Endpoint_Enable @ 0x1C0021610 (Endpoint_Enable.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0021A40 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C0021CE0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0022968 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C00236E0 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C0023AF4 (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C0023B88 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C0023CB8 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C0023D7C (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C0023ECC (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C002421C (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C00245E0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C0024D10 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C0024EF0 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0025280 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0025530 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Interrupter_Initialize @ 0x1C0026750 (Interrupter_Initialize.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C0027830 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0027A70 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_UcxEvtSetHubFeature @ 0x1C0027D60 (RootHub_UcxEvtSetHubFeature.c)
 *     TR_EnableForwardProgress_Internal @ 0x1C0028C04 (TR_EnableForwardProgress_Internal.c)
 *     TR_InitializeTransferRing @ 0x1C0028EB4 (TR_InitializeTransferRing.c)
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C002A390 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C002C790 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     UsbDevice_DisableCompletion @ 0x1C00303A4 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C0030630 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00309B0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C003143C (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0031780 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C0031B50 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0031D10 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0031F70 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0032110 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtHubInfo @ 0x1C0032840 (UsbDevice_UcxEvtHubInfo.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0032920 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C0032B80 (UsbDevice_UcxEvtUpdate.c)
 *     UsbDevice_UpdateCompletion @ 0x1C0032D70 (UsbDevice_UpdateCompletion.c)
 *     Etw_EndpointListRundown @ 0x1C00341A0 (Etw_EndpointListRundown.c)
 *     Crashdump_Initialize @ 0x1C0035090 (Crashdump_Initialize.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C0035388 (Crashdump_InitializeDeviceContext.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x1C0035EA0 (Crashdump_UcxEvtGetDumpData.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x1C0037238 (Crashdump_EventRing_PrepareForDump.c)
 *     Crashdump_Command_PrepareForDump @ 0x1C0037504 (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x1C0037B70 (Crashdump_Endpoint_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x1C0038448 (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C00387DC (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C0038B18 (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C0038C98 (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x1C0038F78 (Crashdump_UsbDevice_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C0039444 (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     TelemetryData_CreateReport @ 0x1C003B1C8 (TelemetryData_CreateReport.c)
 *     WerKernelSubmitReport @ 0x1C003B888 (WerKernelSubmitReport.c)
 *     WerpAllocateAndInitializeSid @ 0x1C003BF94 (WerpAllocateAndInitializeSid.c)
 *     Controller_CreateWdfDevice @ 0x1C004A040 (Controller_CreateWdfDevice.c)
 *     Interrupter_PrepareHardware @ 0x1C004A600 (Interrupter_PrepareHardware.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C004A6F8 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_CreateInterrupter @ 0x1C004A7FC (Interrupter_CreateInterrupter.c)
 *     Controller_Create @ 0x1C004AA30 (Controller_Create.c)
 *     CommonBuffer_Create @ 0x1C004B870 (CommonBuffer_Create.c)
 *     Controller_RetrievePciData @ 0x1C004BC98 (Controller_RetrievePciData.c)
 *     IoControl_Create @ 0x1C004C368 (IoControl_Create.c)
 *     Register_Create @ 0x1C004C4A4 (Register_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C004C8CC (Controller_ConfigureS0IdleSettings.c)
 *     RootHub_PrepareHardware @ 0x1C004CCE0 (RootHub_PrepareHardware.c)
 *     DeviceSlot_Create @ 0x1C004D668 (DeviceSlot_Create.c)
 *     RootHub_Create @ 0x1C004D774 (RootHub_Create.c)
 *     DeviceSlot_PrepareHardware @ 0x1C004DB40 (DeviceSlot_PrepareHardware.c)
 *     Controller_SetDeviceDescription @ 0x1C004DD90 (Controller_SetDeviceDescription.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C004E0D4 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     Wmi_Create @ 0x1C004E5B0 (Wmi_Create.c)
 *     Command_Create @ 0x1C004E6E4 (Command_Create.c)
 *     Command_CreateCommandTimeoutTimer @ 0x1C004E7F8 (Command_CreateCommandTimeoutTimer.c)
 *     DriverEntry @ 0x1C004E8C0 (DriverEntry.c)
 *     Counter_Register @ 0x1C004EBE0 (Counter_Register.c)
 *     Controller_ExecuteDSM @ 0x1C00513D4 (Controller_ExecuteDSM.c)
 *     Controller_RetrieveAcpiData @ 0x1C00518C0 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C0051AE4 (Controller_RetrieveUrsData.c)
 *     Controller_UpdateIdleTimeout @ 0x1C00523B8 (Controller_UpdateIdleTimeout.c)
 *     WppTraceCallback @ 0x1C0052B30 (WppTraceCallback.c)
 *     Endpoint_Create @ 0x1C0052D7C (Endpoint_Create.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C00533A0 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C0053590 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 *     TR_Create @ 0x1C0053D8C (TR_Create.c)
 *     Control_Initialize @ 0x1C00541A0 (Control_Initialize.c)
 *     Isoch_Initialize @ 0x1C00543A0 (Isoch_Initialize.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0054560 (UsbDevice_UcxEvtDeviceAdd.c)
 *     Wmi_WdfEvtWmi_GetControllerCapabilities @ 0x1C0054880 (Wmi_WdfEvtWmi_GetControllerCapabilities.c)
 *     IntelPptFilter_Create @ 0x1C0054910 (IntelPptFilter_Create.c)
 *     TelemetryData_pInitWerContext @ 0x1C0054EE0 (TelemetryData_pInitWerContext.c)
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
mset20:
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
    goto mset20;
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C00102BD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
