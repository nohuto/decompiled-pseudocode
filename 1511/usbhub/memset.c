/*
 * XREFs of memset @ 0x1C0029180
 * Callers:
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C0004D20 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhRegDriverEntry @ 0x1C0004F10 (UsbhRegDriverEntry.c)
 *     UsbhGetSerialNumber @ 0x1C00052B8 (UsbhGetSerialNumber.c)
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 *     UsbhGetLanguageIdString @ 0x1C0005910 (UsbhGetLanguageIdString.c)
 *     UsbhCreatePdo @ 0x1C0005A80 (UsbhCreatePdo.c)
 *     UsbhGetDeviceInformation @ 0x1C0006310 (UsbhGetDeviceInformation.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0006538 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetRegUsbClassFlags @ 0x1C000684C (UsbhGetRegUsbClassFlags.c)
 *     UsbhUpdateUxdSettings @ 0x1C00069A4 (UsbhUpdateUxdSettings.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0006AFC (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhReadPdoRegistryKeys @ 0x1C0006CC0 (UsbhReadPdoRegistryKeys.c)
 *     UsbhGetPdoRegistryParameter @ 0x1C00073F4 (UsbhGetPdoRegistryParameter.c)
 *     UsbhBuildCompatibleID @ 0x1C00074EC (UsbhBuildCompatibleID.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C0007D40 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C0007FCC (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbHubFlags @ 0x1C0008230 (UsbhGetRegUsbHubFlags.c)
 *     UsbhMakeId @ 0x1C00084B0 (UsbhMakeId.c)
 *     UsbhQueryD3ColdSupport @ 0x1C0008F68 (UsbhQueryD3ColdSupport.c)
 *     UsbhRefPdo @ 0x1C00095D0 (UsbhRefPdo.c)
 *     UsbhInitializeDevice @ 0x1C0009770 (UsbhInitializeDevice.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C000BAB0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhLatchPdo @ 0x1C000C288 (UsbhLatchPdo.c)
 *     UsbhPdoPnp_QueryCapabilities @ 0x1C000C860 (UsbhPdoPnp_QueryCapabilities.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C000CBE0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPnp_QueryId @ 0x1C000D390 (UsbhPdoPnp_QueryId.c)
 *     UsbhEtwWrite @ 0x1C000F240 (UsbhEtwWrite.c)
 *     UsbhGetBusInterface @ 0x1C0010490 (UsbhGetBusInterface.c)
 *     UsbhQueryBusRelations @ 0x1C0012300 (UsbhQueryBusRelations.c)
 *     UsbhHubProcessIsr @ 0x1C0012AD0 (UsbhHubProcessIsr.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0018370 (UsbhHubDispatchPortEvent.c)
 *     UsbhSyncSendCommand @ 0x1C001A080 (UsbhSyncSendCommand.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001C5D4 (UsbhSyncSendCommandToDevice.c)
 *     UsbhGetHubClassDescriptor @ 0x1C001CC20 (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C001CD1C (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C001D740 (UsbhCreateConfigurationRequestEx.c)
 *     UsbhAddDevice @ 0x1C001D8F0 (UsbhAddDevice.c)
 *     UsbhReferenceListAdd @ 0x1C001E480 (UsbhReferenceListAdd.c)
 *     UsbhIncPdoIoCount @ 0x1C001EE40 (UsbhIncPdoIoCount.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C001F3E0 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhCopyPnpString @ 0x1C001F574 (UsbhCopyPnpString.c)
 *     UsbhBusPnpStart @ 0x1C0020F40 (UsbhBusPnpStart.c)
 *     UsbhAllocateTimerObject @ 0x1C0021620 (UsbhAllocateTimerObject.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C0022800 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhGetExtendedHubInformation @ 0x1C0022C30 (UsbhGetExtendedHubInformation.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C0022E20 (UsbhGetAcpiPortAttributes.c)
 *     UsbhHubSSH_Timer @ 0x1C0023680 (UsbhHubSSH_Timer.c)
 *     UsbhPostInterrupt @ 0x1C00238D0 (UsbhPostInterrupt.c)
 *     RtlStringCchPrintfExW @ 0x1C0024320 (RtlStringCchPrintfExW.c)
 *     UsbhAllocWorkItem @ 0x1C0024AAC (UsbhAllocWorkItem.c)
 *     UsbhAcquirePowerContext @ 0x1C0024BFC (UsbhAcquirePowerContext.c)
 *     UsbhQueryParentHubConfig @ 0x1C0024FC4 (UsbhQueryParentHubConfig.c)
 *     USBHUB_InitBugCheck @ 0x1C00253D4 (USBHUB_InitBugCheck.c)
 *     UsbhInitGlobal @ 0x1C00254FC (UsbhInitGlobal.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C00268C0 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C0026C00 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhWmiDriverEntry @ 0x1C0026FF0 (UsbhWmiDriverEntry.c)
 *     UsbhBuildContainerID @ 0x1C00277DC (UsbhBuildContainerID.c)
 *     UsbhGetProductIdString @ 0x1C0027D34 (UsbhGetProductIdString.c)
 *     UsbhBuildDeviceCompatibleID @ 0x1C00289CC (UsbhBuildDeviceCompatibleID.c)
 *     UsbhGetControllerName @ 0x1C003BE1C (UsbhGetControllerName.c)
 *     UsbhGetDeviceBusInfo @ 0x1C003BF94 (UsbhGetDeviceBusInfo.c)
 *     UsbhGetHubPdoName @ 0x1C003C380 (UsbhGetHubPdoName.c)
 *     UsbhLogStartFailure @ 0x1C003C578 (UsbhLogStartFailure.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003C8D4 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhFdoRecordFailure @ 0x1C003E92C (UsbhFdoRecordFailure.c)
 *     USBD_ValidateConfigurationDescriptorInternal @ 0x1C003F628 (USBD_ValidateConfigurationDescriptorInternal.c)
 *     USBD_ValidateExtendedConfigurationDescriptor @ 0x1C003FA00 (USBD_ValidateExtendedConfigurationDescriptor.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C003FE30 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C003FF7C (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C00403E0 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0043554 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetBillboardInfo @ 0x1C00436C0 (UsbhGetBillboardInfo.c)
 *     UsbhResetIrqPipe @ 0x1C0044270 (UsbhResetIrqPipe.c)
 *     UsbhGetDeviceInformationEx @ 0x1C00474D0 (UsbhGetDeviceInformationEx.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C0047618 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C004880C (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048AA0 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048D04 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049154 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049460 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C0049734 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C00499E8 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0049CA4 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C004DA10 (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C004DC9C (UsbhGetHubNodeInfo.c)
 *     UsbhGetPerformanceInfo @ 0x1C004DEFC (UsbhGetPerformanceInfo.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C004FA54 (RtlStringExHandleOtherFlagsW.c)
 *     UsbhValidateBOSDescriptorSet @ 0x1C0052C6C (UsbhValidateBOSDescriptorSet.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x1C0052EB0 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x1C0053200 (UsbhValidateMsOs20FunctionSubset.c)
 *     UsbhCloseDeviceConfiguration @ 0x1C0053604 (UsbhCloseDeviceConfiguration.c)
 *     UsbhGetBosDescriptor @ 0x1C0053D60 (UsbhGetBosDescriptor.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0054A28 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhPublishBillboardDetails @ 0x1C0054BFC (UsbhPublishBillboardDetails.c)
 *     UsbhBuildUxdPnpId @ 0x1C0056650 (UsbhBuildUxdPnpId.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C00569D0 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdLoadKeySettings @ 0x1C0056DD0 (UsbhGetUxdLoadKeySettings.c)
 *     UsbhQueryUxdDevice @ 0x1C0057130 (UsbhQueryUxdDevice.c)
 *     UsbhRegisterBootDeviceNotification @ 0x1C005787C (UsbhRegisterBootDeviceNotification.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C002923D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
