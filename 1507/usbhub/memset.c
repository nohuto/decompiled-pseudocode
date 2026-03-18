/*
 * XREFs of memset @ 0x1C002A1C0
 * Callers:
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C0004D70 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhRegDriverEntry @ 0x1C0004F60 (UsbhRegDriverEntry.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C000508C (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetDeviceInformation @ 0x1C000544C (UsbhGetDeviceInformation.c)
 *     UsbhUpdateUxdSettings @ 0x1C0005860 (UsbhUpdateUxdSettings.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0005CB4 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhReadPdoRegistryKeys @ 0x1C0005E80 (UsbhReadPdoRegistryKeys.c)
 *     UsbhGetPdoRegistryParameter @ 0x1C0006624 (UsbhGetPdoRegistryParameter.c)
 *     UsbhGetRegUsbClassFlags @ 0x1C0006C78 (UsbhGetRegUsbClassFlags.c)
 *     UsbhGetSerialNumber @ 0x1C0006F9C (UsbhGetSerialNumber.c)
 *     UsbhSetupDevice @ 0x1C0007110 (UsbhSetupDevice.c)
 *     UsbhGetLanguageIdString @ 0x1C00075F8 (UsbhGetLanguageIdString.c)
 *     UsbhIncPdoIoCount @ 0x1C0007B30 (UsbhIncPdoIoCount.c)
 *     UsbhCreatePdo @ 0x1C0007C50 (UsbhCreatePdo.c)
 *     UsbhBuildCompatibleID @ 0x1C0008538 (UsbhBuildCompatibleID.c)
 *     UsbhMakeId @ 0x1C0008D00 (UsbhMakeId.c)
 *     UsbhAddDevice @ 0x1C00094A0 (UsbhAddDevice.c)
 *     UsbhReferenceListAdd @ 0x1C000A030 (UsbhReferenceListAdd.c)
 *     UsbhLatchPdo @ 0x1C000ADCC (UsbhLatchPdo.c)
 *     UsbhPdoPnp_QueryId @ 0x1C000B9B0 (UsbhPdoPnp_QueryId.c)
 *     UsbhRefPdo @ 0x1C000BE50 (UsbhRefPdo.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0011DC0 (UsbhHubDispatchPortEvent.c)
 *     UsbhHubProcessIsr @ 0x1C00127E0 (UsbhHubProcessIsr.c)
 *     UsbhSyncSendCommand @ 0x1C0014BD0 (UsbhSyncSendCommand.c)
 *     UsbhQueryBusRelations @ 0x1C00158F0 (UsbhQueryBusRelations.c)
 *     UsbhGetBusInterface @ 0x1C0017D60 (UsbhGetBusInterface.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0018E48 (UsbhGetHubDeviceInformation.c)
 *     UsbhEtwWrite @ 0x1C001B750 (UsbhEtwWrite.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C001B890 (UsbhPdoPnp_StartDevice.c)
 *     UsbhGetExtendedHubInformation @ 0x1C001C710 (UsbhGetExtendedHubInformation.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C001C900 (UsbhGetAcpiPortAttributes.c)
 *     UsbhBusPnpStart @ 0x1C001CED0 (UsbhBusPnpStart.c)
 *     UsbhAllocateTimerObject @ 0x1C001D5B0 (UsbhAllocateTimerObject.c)
 *     UsbhQueryD3ColdSupport @ 0x1C001E2C4 (UsbhQueryD3ColdSupport.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001F6F0 (UsbhSyncSendCommandToDevice.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C001FEA0 (UsbhCreateConfigurationRequestEx.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C00204E0 (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetHubClassDescriptor @ 0x1C00205F8 (UsbhGetHubClassDescriptor.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C00230C0 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhHubSSH_Timer @ 0x1C00237A0 (UsbhHubSSH_Timer.c)
 *     UsbhPostInterrupt @ 0x1C00239F0 (UsbhPostInterrupt.c)
 *     RtlStringCchPrintfExW @ 0x1C0024440 (RtlStringCchPrintfExW.c)
 *     UsbhAllocWorkItem @ 0x1C0024BCC (UsbhAllocWorkItem.c)
 *     UsbhAcquirePowerContext @ 0x1C0024DD0 (UsbhAcquirePowerContext.c)
 *     UsbhPdoPnp_QueryCapabilities @ 0x1C0025350 (UsbhPdoPnp_QueryCapabilities.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C0025C50 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0025E3C (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhCopyPnpString @ 0x1C0025FD0 (UsbhCopyPnpString.c)
 *     UsbhQueryParentHubConfig @ 0x1C002615C (UsbhQueryParentHubConfig.c)
 *     USBHUB_InitBugCheck @ 0x1C002658C (USBHUB_InitBugCheck.c)
 *     UsbhInitGlobal @ 0x1C00266B4 (UsbhInitGlobal.c)
 *     UsbhInitializeDevice @ 0x1C0026B6C (UsbhInitializeDevice.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C0027610 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C0027A20 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhWmiDriverEntry @ 0x1C0027FC0 (UsbhWmiDriverEntry.c)
 *     UsbhBuildContainerID @ 0x1C002881C (UsbhBuildContainerID.c)
 *     UsbhGetProductIdString @ 0x1C0028D74 (UsbhGetProductIdString.c)
 *     UsbhBuildDeviceCompatibleID @ 0x1C0029A0C (UsbhBuildDeviceCompatibleID.c)
 *     UsbhGetControllerName @ 0x1C003BBF0 (UsbhGetControllerName.c)
 *     UsbhGetDeviceBusInfo @ 0x1C003BD68 (UsbhGetDeviceBusInfo.c)
 *     UsbhGetHubPdoName @ 0x1C003C154 (UsbhGetHubPdoName.c)
 *     UsbhLogStartFailure @ 0x1C003C34C (UsbhLogStartFailure.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003C6A4 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhFdoRecordFailure @ 0x1C003E6FC (UsbhFdoRecordFailure.c)
 *     USBD_ValidateConfigurationDescriptorInternal @ 0x1C003F3F8 (USBD_ValidateConfigurationDescriptorInternal.c)
 *     USBD_ValidateExtendedConfigurationDescriptor @ 0x1C003F7D0 (USBD_ValidateExtendedConfigurationDescriptor.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C003FC00 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C003FD4C (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C00401C4 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0043334 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetBillboardInfo @ 0x1C00434A0 (UsbhGetBillboardInfo.c)
 *     UsbhResetIrqPipe @ 0x1C0044140 (UsbhResetIrqPipe.c)
 *     UsbhGetDeviceInformationEx @ 0x1C0047450 (UsbhGetDeviceInformationEx.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C0047598 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C00486BC (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048950 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048BB4 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049004 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049310 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C00495E4 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0049898 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0049B54 (UsbhIoctlGetPortConnectorProperties.c)
 *     QueryFeatureOverride @ 0x1C004A8D4 (QueryFeatureOverride.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C004DAB0 (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C004DD3C (UsbhGetHubNodeInfo.c)
 *     UsbhGetPerformanceInfo @ 0x1C004DF9C (UsbhGetPerformanceInfo.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C004FAF4 (RtlStringExHandleOtherFlagsW.c)
 *     UsbhValidateBOSDescriptorSet @ 0x1C0052D0C (UsbhValidateBOSDescriptorSet.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x1C0052F50 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x1C00532A0 (UsbhValidateMsOs20FunctionSubset.c)
 *     UsbhCloseDeviceConfiguration @ 0x1C005362C (UsbhCloseDeviceConfiguration.c)
 *     UsbhGetBosDescriptor @ 0x1C0053D80 (UsbhGetBosDescriptor.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0054AE8 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhBuildUxdPnpId @ 0x1C00564D8 (UsbhBuildUxdPnpId.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0056858 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdLoadKeySettings @ 0x1C0056C58 (UsbhGetUxdLoadKeySettings.c)
 *     UsbhQueryUxdDevice @ 0x1C0056FC0 (UsbhQueryUxdDevice.c)
 *     UsbhRegisterBootDeviceNotification @ 0x1C005770C (UsbhRegisterBootDeviceNotification.c)
 *     WppTraceCallback @ 0x1C006F510 (WppTraceCallback.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C002A27D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
