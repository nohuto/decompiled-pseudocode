/*
 * XREFs of memset @ 0x1C0029900
 * Callers:
 *     UsbhRegDriverEntry @ 0x1C0004DE0 (UsbhRegDriverEntry.c)
 *     UsbhWmiDriverEntry @ 0x1C0004F10 (UsbhWmiDriverEntry.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0005208 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhCopyPnpString @ 0x1C000539C (UsbhCopyPnpString.c)
 *     UsbhSetupDevice @ 0x1C0005530 (UsbhSetupDevice.c)
 *     UsbhGetLanguageIdString @ 0x1C0005A20 (UsbhGetLanguageIdString.c)
 *     UsbhCreatePdo @ 0x1C0005B90 (UsbhCreatePdo.c)
 *     UsbhBuildCompatibleID @ 0x1C0006424 (UsbhBuildCompatibleID.c)
 *     UsbhMakeId @ 0x1C0006BF0 (UsbhMakeId.c)
 *     UsbhIncPdoIoCount @ 0x1C00074E0 (UsbhIncPdoIoCount.c)
 *     UsbhGetSerialNumber @ 0x1C0007640 (UsbhGetSerialNumber.c)
 *     UsbhGetDeviceInformation @ 0x1C0007814 (UsbhGetDeviceInformation.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0007A3C (UsbhGetHubDeviceInformation.c)
 *     UsbhGetRegUsbClassFlags @ 0x1C0007D50 (UsbhGetRegUsbClassFlags.c)
 *     UsbhUpdateUxdSettings @ 0x1C0007FDC (UsbhUpdateUxdSettings.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C00081D0 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C000845C (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbHubFlags @ 0x1C00086C0 (UsbhGetRegUsbHubFlags.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0008AE8 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhGetPdoRegistryParameter @ 0x1C0008CAC (UsbhGetPdoRegistryParameter.c)
 *     UsbhReadPdoRegistryKeys @ 0x1C0008DB0 (UsbhReadPdoRegistryKeys.c)
 *     UsbhAddDevice @ 0x1C000A140 (UsbhAddDevice.c)
 *     UsbhReferenceListAdd @ 0x1C000B670 (UsbhReferenceListAdd.c)
 *     UsbhBusPnpStart @ 0x1C000C330 (UsbhBusPnpStart.c)
 *     UsbhAllocateTimerObject @ 0x1C000CA10 (UsbhAllocateTimerObject.c)
 *     UsbhRefPdo @ 0x1C000D410 (UsbhRefPdo.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0013130 (UsbhHubDispatchPortEvent.c)
 *     UsbhHubProcessIsr @ 0x1C0013B50 (UsbhHubProcessIsr.c)
 *     UsbhSyncSendCommand @ 0x1C0015A50 (UsbhSyncSendCommand.c)
 *     UsbhQueryBusRelations @ 0x1C0017A30 (UsbhQueryBusRelations.c)
 *     UsbhPdoPnp_QueryId @ 0x1C0017FF0 (UsbhPdoPnp_QueryId.c)
 *     UsbhGetBusInterface @ 0x1C0019140 (UsbhGetBusInterface.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C001A2F0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPnp_QueryCapabilities @ 0x1C001AA60 (UsbhPdoPnp_QueryCapabilities.c)
 *     UsbhLatchPdo @ 0x1C001B444 (UsbhLatchPdo.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001B820 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhEtwWrite @ 0x1C001D860 (UsbhEtwWrite.c)
 *     UsbhHubSSH_Timer @ 0x1C001D930 (UsbhHubSSH_Timer.c)
 *     UsbhGetExtendedHubInformation @ 0x1C001EBD0 (UsbhGetExtendedHubInformation.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C001EDC0 (UsbhGetAcpiPortAttributes.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C001F230 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhQueryD3ColdSupport @ 0x1C001F764 (UsbhQueryD3ColdSupport.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001FEA0 (UsbhSyncSendCommandToDevice.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C0020650 (UsbhCreateConfigurationRequestEx.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C0020C8C (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetHubClassDescriptor @ 0x1C0020DA4 (UsbhGetHubClassDescriptor.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C0023E60 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhPostInterrupt @ 0x1C0024290 (UsbhPostInterrupt.c)
 *     RtlStringCchPrintfExW @ 0x1C0024BE0 (RtlStringCchPrintfExW.c)
 *     UsbhAllocWorkItem @ 0x1C00251C0 (UsbhAllocWorkItem.c)
 *     UsbhAcquirePowerContext @ 0x1C00253C4 (UsbhAcquirePowerContext.c)
 *     UsbhQueryParentHubConfig @ 0x1C0026128 (UsbhQueryParentHubConfig.c)
 *     USBHUB_InitBugCheck @ 0x1C0026568 (USBHUB_InitBugCheck.c)
 *     UsbhInitGlobal @ 0x1C0026690 (UsbhInitGlobal.c)
 *     UsbhInitializeDevice @ 0x1C0026B94 (UsbhInitializeDevice.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C0027360 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C0027580 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhBuildContainerID @ 0x1C0027E9C (UsbhBuildContainerID.c)
 *     UsbhGetProductIdString @ 0x1C00283F4 (UsbhGetProductIdString.c)
 *     UsbhBuildDeviceCompatibleID @ 0x1C002908C (UsbhBuildDeviceCompatibleID.c)
 *     UsbhGetControllerName @ 0x1C003C23C (UsbhGetControllerName.c)
 *     UsbhGetDeviceBusInfo @ 0x1C003C3B4 (UsbhGetDeviceBusInfo.c)
 *     UsbhGetHubPdoName @ 0x1C003C7A0 (UsbhGetHubPdoName.c)
 *     UsbhLogStartFailure @ 0x1C003C998 (UsbhLogStartFailure.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003CCF4 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhFdoRecordFailure @ 0x1C003EC4C (UsbhFdoRecordFailure.c)
 *     USBD_ValidateConfigurationDescriptorInternal @ 0x1C003F948 (USBD_ValidateConfigurationDescriptorInternal.c)
 *     USBD_ValidateExtendedConfigurationDescriptor @ 0x1C003FD20 (USBD_ValidateExtendedConfigurationDescriptor.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C0040150 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C004029C (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C0040714 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0043894 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetBillboardInfo @ 0x1C0043A00 (UsbhGetBillboardInfo.c)
 *     UsbhResetIrqPipe @ 0x1C00445B0 (UsbhResetIrqPipe.c)
 *     UsbhGetDeviceInformationEx @ 0x1C00478C0 (UsbhGetDeviceInformationEx.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C0047A08 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C0048C20 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048EB4 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0049118 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049554 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049860 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C0049B34 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0049DE8 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C004A0A4 (UsbhIoctlGetPortConnectorProperties.c)
 *     QueryFeatureOverride @ 0x1C004AE68 (QueryFeatureOverride.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C004E180 (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C004E40C (UsbhGetHubNodeInfo.c)
 *     UsbhGetPerformanceInfo @ 0x1C004E66C (UsbhGetPerformanceInfo.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C00501C4 (RtlStringExHandleOtherFlagsW.c)
 *     UsbhValidateBOSDescriptorSet @ 0x1C0053290 (UsbhValidateBOSDescriptorSet.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x1C00534E0 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x1C0053830 (UsbhValidateMsOs20FunctionSubset.c)
 *     UsbhCloseDeviceConfiguration @ 0x1C0053C34 (UsbhCloseDeviceConfiguration.c)
 *     UsbhGetBosDescriptor @ 0x1C0054390 (UsbhGetBosDescriptor.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0055058 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhPublishBillboardDetails @ 0x1C005522C (UsbhPublishBillboardDetails.c)
 *     UsbhBuildUxdPnpId @ 0x1C0056C80 (UsbhBuildUxdPnpId.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0057000 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdLoadKeySettings @ 0x1C0057400 (UsbhGetUxdLoadKeySettings.c)
 *     UsbhQueryUxdDevice @ 0x1C0057760 (UsbhQueryUxdDevice.c)
 *     UsbhRegisterBootDeviceNotification @ 0x1C0057E3C (UsbhRegisterBootDeviceNotification.c)
 *     WppTraceCallback @ 0x1C0070510 (WppTraceCallback.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C00299BD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
