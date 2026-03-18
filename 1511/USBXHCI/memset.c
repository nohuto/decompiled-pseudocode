/*
 * XREFs of memset @ 0x1C0011000
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001000 (McGenControlCallbackV2.c)
 *     Etw_EnableCallback @ 0x1C0001140 (Etw_EnableCallback.c)
 *     Isoch_TransferData_Initialize @ 0x1C0003674 (Isoch_TransferData_Initialize.c)
 *     TR_ReleaseSegments @ 0x1C0003CD0 (TR_ReleaseSegments.c)
 *     Bulk_TransferData_Initialize @ 0x1C0003F30 (Bulk_TransferData_Initialize.c)
 *     DeviceSlot_ScratchpadBuffersInitialize @ 0x1C0005444 (DeviceSlot_ScratchpadBuffersInitialize.c)
 *     RootHub_UcxEvtGetHubStatus @ 0x1C00056D0 (RootHub_UcxEvtGetHubStatus.c)
 *     Interrupter_D0Entry @ 0x1C0005800 (Interrupter_D0Entry.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0005CF0 (RootHub_UcxEvtInterruptTransfer.c)
 *     Command_Initialize @ 0x1C0007028 (Command_Initialize.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0007A80 (Wmi_CreateControllerCapabilities.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0007DD8 (Command_D0EntryPostInterruptsEnabled.c)
 *     RootHub_UcxEvtGetInfo @ 0x1C0008310 (RootHub_UcxEvtGetInfo.c)
 *     CommonBuffer_AcquireLargeBuffers @ 0x1C0009390 (CommonBuffer_AcquireLargeBuffers.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0009960 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireLargeBuffer @ 0x1C0009AC0 (CommonBuffer_AcquireLargeBuffer.c)
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C0009E40 (RootHub_UcxEvtGet30PortInfo.c)
 *     RootHub_UcxEvtGet20PortInfo @ 0x1C000A260 (RootHub_UcxEvtGet20PortInfo.c)
 *     UsbDevice_SetAddress @ 0x1C00100F8 (UsbDevice_SetAddress.c)
 *     Control_WdfEvtIoDefault @ 0x1C0010440 (Control_WdfEvtIoDefault.c)
 *     Control_TransferData_Initialize @ 0x1C0010650 (Control_TransferData_Initialize.c)
 *     CommonBuffer_AcquireSmallBuffer @ 0x1C001D184 (CommonBuffer_AcquireSmallBuffer.c)
 *     CommonBuffer_AcquireSmallBuffers @ 0x1C001D2A0 (CommonBuffer_AcquireSmallBuffers.c)
 *     Controller_TelemetryReport @ 0x1C001F240 (Controller_TelemetryReport.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0020940 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_CreateClearStallContext @ 0x1C0020CB0 (Endpoint_CreateClearStallContext.c)
 *     Endpoint_Enable @ 0x1C0021020 (Endpoint_Enable.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0021450 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C00216F0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0022368 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C00230E0 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C00234F4 (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C0023588 (Endpoint_SM_ResetEndpoint.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C00236B8 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C002377C (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C00238CC (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C0023C1C (Endpoint_SetUpConfigureEndpointCommand.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0023FE0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C0024700 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C00248E0 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0024C70 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0024F20 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Interrupter_Initialize @ 0x1C0025FF8 (Interrupter_Initialize.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C0027200 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0027440 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_UcxEvtSetHubFeature @ 0x1C0027730 (RootHub_UcxEvtSetHubFeature.c)
 *     TR_EnableForwardProgress_Internal @ 0x1C00285D4 (TR_EnableForwardProgress_Internal.c)
 *     TR_InitializeTransferRing @ 0x1C0028884 (TR_InitializeTransferRing.c)
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C0029D70 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C002C240 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     UsbDevice_DisableCompletion @ 0x1C002FE34 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C00300C0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0030440 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C0030E5C (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0031100 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C00314D0 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0031690 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C00318F0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0031A90 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtHubInfo @ 0x1C0032160 (UsbDevice_UcxEvtHubInfo.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0032240 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C00324A0 (UsbDevice_UcxEvtUpdate.c)
 *     UsbDevice_UpdateCompletion @ 0x1C0032690 (UsbDevice_UpdateCompletion.c)
 *     Etw_DeviceListRundown @ 0x1C00338D0 (Etw_DeviceListRundown.c)
 *     Etw_EndpointListRundown @ 0x1C0033C80 (Etw_EndpointListRundown.c)
 *     Crashdump_Initialize @ 0x1C0034B70 (Crashdump_Initialize.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C0034DDC (Crashdump_InitializeDeviceContext.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x1C00358F0 (Crashdump_UcxEvtGetDumpData.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x1C0036CD8 (Crashdump_EventRing_PrepareForDump.c)
 *     Crashdump_Command_PrepareForDump @ 0x1C0036F84 (Crashdump_Command_PrepareForDump.c)
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x1C00375E0 (Crashdump_Endpoint_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x1C0037EA0 (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C0038234 (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C003854C (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C00386CC (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x1C00389AC (Crashdump_UsbDevice_PrepareForHibernate.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C0038E78 (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 *     TelemetryData_CreateReport @ 0x1C003ABF8 (TelemetryData_CreateReport.c)
 *     WerKernelSubmitReport @ 0x1C003B2BC (WerKernelSubmitReport.c)
 *     WerpAllocateAndInitializeSid @ 0x1C003B9C8 (WerpAllocateAndInitializeSid.c)
 *     Controller_CreateWdfDevice @ 0x1C0048040 (Controller_CreateWdfDevice.c)
 *     Command_Create @ 0x1C00485F8 (Command_Create.c)
 *     Command_CreateCommandTimeoutTimer @ 0x1C004870C (Command_CreateCommandTimeoutTimer.c)
 *     Wmi_Create @ 0x1C0048AA0 (Wmi_Create.c)
 *     Interrupter_PrepareHardware @ 0x1C0048D00 (Interrupter_PrepareHardware.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C0048DF8 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_CreateInterrupter @ 0x1C0048EFC (Interrupter_CreateInterrupter.c)
 *     RootHub_Create @ 0x1C00493FC (RootHub_Create.c)
 *     RootHub_PrepareHardware @ 0x1C0049A50 (RootHub_PrepareHardware.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C0049DBC (Controller_ConfigureS0IdleSettings.c)
 *     Register_Create @ 0x1C004A83C (Register_Create.c)
 *     IoControl_Create @ 0x1C004A948 (IoControl_Create.c)
 *     DeviceSlot_Create @ 0x1C004AA84 (DeviceSlot_Create.c)
 *     Controller_RetrievePciData @ 0x1C004AF44 (Controller_RetrievePciData.c)
 *     CommonBuffer_Create @ 0x1C004B100 (CommonBuffer_Create.c)
 *     DeviceSlot_PrepareHardware @ 0x1C004B6E0 (DeviceSlot_PrepareHardware.c)
 *     Controller_SetDeviceDescription @ 0x1C004B870 (Controller_SetDeviceDescription.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C004BBB4 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 *     Controller_Create @ 0x1C004BE90 (Controller_Create.c)
 *     DriverEntry @ 0x1C004C4D0 (DriverEntry.c)
 *     Counter_Register @ 0x1C004C7EC (Counter_Register.c)
 *     Controller_ExecuteDSM @ 0x1C004F2E0 (Controller_ExecuteDSM.c)
 *     Controller_RetrieveAcpiData @ 0x1C004F7C0 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C004F9E4 (Controller_RetrieveUrsData.c)
 *     Controller_UpdateIdleTimeout @ 0x1C00502B8 (Controller_UpdateIdleTimeout.c)
 *     WppTraceCallback @ 0x1C0050A30 (WppTraceCallback.c)
 *     Endpoint_Create @ 0x1C0050C7C (Endpoint_Create.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C00512A0 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C0051490 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 *     TR_Create @ 0x1C0051C78 (TR_Create.c)
 *     Control_Initialize @ 0x1C0052080 (Control_Initialize.c)
 *     Isoch_Initialize @ 0x1C0052280 (Isoch_Initialize.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0052440 (UsbDevice_UcxEvtDeviceAdd.c)
 *     Wmi_WdfEvtWmi_GetControllerCapabilities @ 0x1C0052760 (Wmi_WdfEvtWmi_GetControllerCapabilities.c)
 *     IntelPptFilter_Create @ 0x1C00527F0 (IntelPptFilter_Create.c)
 *     TelemetryData_pInitWerContext @ 0x1C0052DC0 (TelemetryData_pInitWerContext.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C00110BD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
