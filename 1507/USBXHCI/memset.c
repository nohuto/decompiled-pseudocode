/*
 * XREFs of memset @ 0x1C0007F80
 * Callers:
 *     DeviceSlot_D0EntryCleanupState @ 0x1C0001460 (DeviceSlot_D0EntryCleanupState.c)
 *     RootHub_UcxEvtGetHubStatus @ 0x1C0002570 (RootHub_UcxEvtGetHubStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0002AA0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0002CD0 (RootHub_UcxEvtClearPortFeature.c)
 *     Command_Initialize @ 0x1C000420C (Command_Initialize.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0004300 (Controller_WdfEvtDeviceD0Entry.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0004A60 (Wmi_CreateControllerCapabilities.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0004DB8 (Command_D0EntryPostInterruptsEnabled.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0005400 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireLargeBuffer @ 0x1C0005560 (CommonBuffer_AcquireLargeBuffer.c)
 *     CommonBuffer_AcquireLargeBuffers @ 0x1C00059A0 (CommonBuffer_AcquireLargeBuffers.c)
 *     RootHub_UcxEvtGetInfo @ 0x1C0005F00 (RootHub_UcxEvtGetInfo.c)
 *     McGenControlCallbackV2 @ 0x1C0006DF0 (McGenControlCallbackV2.c)
 *     Etw_EnableCallback @ 0x1C0006F30 (Etw_EnableCallback.c)
 *     Etw_DeviceListRundown @ 0x1C00071D0 (Etw_DeviceListRundown.c)
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C0007230 (RootHub_UcxEvtGet30PortInfo.c)
 *     RootHub_UcxEvtGet20PortInfo @ 0x1C0007650 (RootHub_UcxEvtGet20PortInfo.c)
 *     Control_TransferData_Initialize @ 0x1C0008094 (Control_TransferData_Initialize.c)
 *     CommonBuffer_AcquireSmallBuffer @ 0x1C0013BE4 (CommonBuffer_AcquireSmallBuffer.c)
 *     CommonBuffer_AcquireSmallBuffers @ 0x1C0013D00 (CommonBuffer_AcquireSmallBuffers.c)
 *     Controller_TelemetryReport @ 0x1C0015B70 (Controller_TelemetryReport.c)
 *     DeviceSlot_ScratchpadBuffersInitialize @ 0x1C0016FCC (DeviceSlot_ScratchpadBuffersInitialize.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0017230 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_CreateClearStallContext @ 0x1C00175A0 (Endpoint_CreateClearStallContext.c)
 *     Endpoint_Enable @ 0x1C0017910 (Endpoint_Enable.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0017D40 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C0017FE0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0018C78 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C00199F0 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C0019E04 (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C0019E98 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C0019FC8 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C001A08C (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C001A1DC (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C001A52C (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001ACF0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C001B410 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C001B5F0 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C001B980 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C001BC30 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Interrupter_Initialize @ 0x1C001CECC (Interrupter_Initialize.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C001EC20 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C001EE60 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_UcxEvtSetHubFeature @ 0x1C001F150 (RootHub_UcxEvtSetHubFeature.c)
 *     TR_EnableForwardProgress_Internal @ 0x1C0020244 (TR_EnableForwardProgress_Internal.c)
 *     TR_InitializeTransferRing @ 0x1C0020848 (TR_InitializeTransferRing.c)
 *     TR_ReleaseSegments @ 0x1C00209BC (TR_ReleaseSegments.c)
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C0023150 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Control_WdfEvtIoDefault @ 0x1C00232E0 (Control_WdfEvtIoDefault.c)
 *     Isoch_TransferData_Initialize @ 0x1C0027A34 (Isoch_TransferData_Initialize.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C00284E0 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     Bulk_TransferData_Initialize @ 0x1C002CB50 (Bulk_TransferData_Initialize.c)
 *     UsbDevice_DisableCompletion @ 0x1C002EC24 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C002EEB0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C002F230 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C002FC4C (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SetAddress @ 0x1C002FEE4 (UsbDevice_SetAddress.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0030230 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C00306E0 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00308A0 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0030B00 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0030CA0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtHubInfo @ 0x1C0031370 (UsbDevice_UcxEvtHubInfo.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0031450 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C00316B0 (UsbDevice_UcxEvtUpdate.c)
 *     UsbDevice_UpdateCompletion @ 0x1C00318A0 (UsbDevice_UpdateCompletion.c)
 *     Etw_EndpointListRundown @ 0x1C0032CB0 (Etw_EndpointListRundown.c)
 *     Crashdump_Initialize @ 0x1C0033B90 (Crashdump_Initialize.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C0033DFC (Crashdump_InitializeDeviceContext.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x1C0034910 (Crashdump_UcxEvtGetDumpData.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x1C0035CF8 (Crashdump_EventRing_PrepareForDump.c)
 *     Crashdump_Command_PrepareForDump @ 0x1C0035FA4 (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x1C0036600 (Crashdump_Endpoint_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x1C0036EC0 (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C0037254 (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C003756C (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C00376EC (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x1C00379CC (Crashdump_UsbDevice_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C0037E98 (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     TelemetryData_CreateReport @ 0x1C0039CEC (TelemetryData_CreateReport.c)
 *     WerKernelSubmitReport @ 0x1C003A3B0 (WerKernelSubmitReport.c)
 *     WerpAllocateAndInitializeSid @ 0x1C003AABC (WerpAllocateAndInitializeSid.c)
 *     Command_Create @ 0x1C0047020 (Command_Create.c)
 *     Command_CreateCommandTimeoutTimer @ 0x1C0047134 (Command_CreateCommandTimeoutTimer.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C00474D0 (Controller_ConfigureS0IdleSettings.c)
 *     Wmi_Create @ 0x1C0047750 (Wmi_Create.c)
 *     Interrupter_PrepareHardware @ 0x1C0047884 (Interrupter_PrepareHardware.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C004797C (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_CreateInterrupter @ 0x1C0047A80 (Interrupter_CreateInterrupter.c)
 *     Controller_SetDeviceDescription @ 0x1C0047CB0 (Controller_SetDeviceDescription.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C0047FF4 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     DeviceSlot_PrepareHardware @ 0x1C0048360 (DeviceSlot_PrepareHardware.c)
 *     RootHub_Create @ 0x1C004872C (RootHub_Create.c)
 *     CommonBuffer_Create @ 0x1C0048950 (CommonBuffer_Create.c)
 *     Controller_RetrievePciData @ 0x1C0048CDC (Controller_RetrievePciData.c)
 *     DeviceSlot_Create @ 0x1C0048FF4 (DeviceSlot_Create.c)
 *     IoControl_Create @ 0x1C0049100 (IoControl_Create.c)
 *     Register_Create @ 0x1C004923C (Register_Create.c)
 *     RootHub_PrepareHardware @ 0x1C0049820 (RootHub_PrepareHardware.c)
 *     Controller_Create @ 0x1C004A8A0 (Controller_Create.c)
 *     Controller_CreateWdfDevice @ 0x1C004B000 (Controller_CreateWdfDevice.c)
 *     DriverEntry @ 0x1C004B5C0 (DriverEntry.c)
 *     Counter_Register @ 0x1C004B8D8 (Counter_Register.c)
 *     Controller_ExecuteDSM @ 0x1C004E268 (Controller_ExecuteDSM.c)
 *     Controller_RetrieveAcpiData @ 0x1C004E778 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C004E99C (Controller_RetrieveUrsData.c)
 *     Controller_UpdateIdleTimeout @ 0x1C004F268 (Controller_UpdateIdleTimeout.c)
 *     WppTraceCallback @ 0x1C004F9C0 (WppTraceCallback.c)
 *     Endpoint_Create @ 0x1C004FC0C (Endpoint_Create.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C0050230 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C0050420 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 *     TR_Create @ 0x1C0050C08 (TR_Create.c)
 *     Control_Initialize @ 0x1C0051010 (Control_Initialize.c)
 *     Isoch_Initialize @ 0x1C0051210 (Isoch_Initialize.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C00513D0 (UsbDevice_UcxEvtDeviceAdd.c)
 *     Wmi_WdfEvtWmi_GetControllerCapabilities @ 0x1C00516F0 (Wmi_WdfEvtWmi_GetControllerCapabilities.c)
 *     IntelPptFilter_Create @ 0x1C0051780 (IntelPptFilter_Create.c)
 *     TelemetryData_pInitWerContext @ 0x1C0051D50 (TelemetryData_pInitWerContext.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C000803D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
