/*
 * XREFs of memset @ 0x1C0034640
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001080 (McGenControlCallbackV2.c)
 *     HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C000297C (HUBHTX_ValidateAndCacheHubConfigDescriptor.c)
 *     HUBHTX_SendInterruptTransfer @ 0x1C0002C28 (HUBHTX_SendInterruptTransfer.c)
 *     HUBHTX_CompleteGetPortStatusWithPortStatusResult @ 0x1C0004EC8 (HUBHTX_CompleteGetPortStatusWithPortStatusResult.c)
 *     HUBHTX_CompleteGetPortStatusWithFailedStatus @ 0x1C00050BC (HUBHTX_CompleteGetPortStatusWithFailedStatus.c)
 *     HUBHTX_ClearTTBuffer @ 0x1C00055B0 (HUBHTX_ClearTTBuffer.c)
 *     HUBPARENT_SetHubConfiguration @ 0x1C0005CD8 (HUBPARENT_SetHubConfiguration.c)
 *     HUBPARENT_ResetHub @ 0x1C00063CC (HUBPARENT_ResetHub.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x1C00065E0 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C0006780 (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBHSM_ResettingInterruptPipeOnFailure @ 0x1C00072B0 (HUBHSM_ResettingInterruptPipeOnFailure.c)
 *     HUBHSM_ValidatingAndParsingHubDescriptor @ 0x1C0007DA0 (HUBHSM_ValidatingAndParsingHubDescriptor.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C00083FC (HUBSM_FindAndSetTargetState.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x1C0009ED8 (HUBFDO_GetDeviceCapabilities.c)
 *     HUBFDO_EvtIoInternalDeviceControlFromPDO @ 0x1C000AB00 (HUBFDO_EvtIoInternalDeviceControlFromPDO.c)
 *     HUBFDO_BuildUsb20HubDescriptor @ 0x1C000AD6C (HUBFDO_BuildUsb20HubDescriptor.c)
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000AEA0 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_PowerSettingCallback @ 0x1C000B580 (HUBFDO_PowerSettingCallback.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x1C000B9D8 (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMUX_CreatePSM @ 0x1C000BA18 (HUBMUX_CreatePSM.c)
 *     HUBMUX_CreateChildPSMs @ 0x1C000BF08 (HUBMUX_CreateChildPSMs.c)
 *     RtlStringCchPrintfExW @ 0x1C000F068 (RtlStringCchPrintfExW.c)
 *     HUBPDO_CompleteClientSerialRequestWithStatusSuccess @ 0x1C000FAD0 (HUBPDO_CompleteClientSerialRequestWithStatusSuccess.c)
 *     HUBPDO_CompleteClientSerialRequestWithStatusFailed @ 0x1C000FC98 (HUBPDO_CompleteClientSerialRequestWithStatusFailed.c)
 *     HUBPDO_CompleteClientSerialRequestWithLastStatus @ 0x1C000FE18 (HUBPDO_CompleteClientSerialRequestWithLastStatus.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C00100C0 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_GetHubName @ 0x1C0010488 (HUBPDO_GetHubName.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0010730 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x1C0010A60 (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C0010C40 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x1C00111BC (HUBPDO_ValidateSelectInterfaceUrb.c)
 *     HUBPDO_FindAndStoreMatchingInternalPipeHandle @ 0x1C00113C4 (HUBPDO_FindAndStoreMatchingInternalPipeHandle.c)
 *     HUBPDO_QueryForD3ColdSupportInAcpi @ 0x1C0011744 (HUBPDO_QueryForD3ColdSupportInAcpi.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0013520 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_SubmitDeviceWakeNotificationIoctl @ 0x1C0014794 (HUBPDO_SubmitDeviceWakeNotificationIoctl.c)
 *     HUBPDO_AllocateForwardProgressResources @ 0x1C0014B3C (HUBPDO_AllocateForwardProgressResources.c)
 *     HUBID_AppendStringToIDString @ 0x1C0015138 (HUBID_AppendStringToIDString.c)
 *     HUBID_BuildUxdPnpId @ 0x1C00152B8 (HUBID_BuildUxdPnpId.c)
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C0016E60 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C0016FE0 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_SettingConfigurationInformationInClientRequest @ 0x1C0017150 (HUBDSM_SettingConfigurationInformationInClientRequest.c)
 *     HUBDSM_SettingInterfaceInformationInClientRequest @ 0x1C0017380 (HUBDSM_SettingInterfaceInformationInClientRequest.c)
 *     HUBDSM_UpdatingDeviceInformationInEnum @ 0x1C00178D0 (HUBDSM_UpdatingDeviceInformationInEnum.c)
 *     HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x1C0017D00 (HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum.c)
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1C0018A70 (HUBDSM_ValidatingMSOSExtendedConfigDescriptor.c)
 *     HUBDSM_SettingNonZeroAddress @ 0x1C0018C60 (HUBDSM_SettingNonZeroAddress.c)
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x1C00192E0 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C0019460 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 *     HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x1C00195E0 (HUBDSM_ValidatingMsOs20DescriptorSetIfPresent.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x1C001B870 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x1C001C454 (HUBUCX_NotifyDeviceResetUsingUCXIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C001C60C (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C001C834 (HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C001C8E4 (HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C001CB40 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C001D160 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1C001D3DC (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl @ 0x1C001D80C (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x1C001DEEC (HUBUCX_UpdateHubInformationUsingUCXIoctl.c)
 *     HUBUCX_NotifyForwardProgress @ 0x1C001E770 (HUBUCX_NotifyForwardProgress.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C001FF0C (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C00202D8 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C0020884 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C0020CAC (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C0020EF0 (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x1C00210DC (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C0021470 (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x1C00217D4 (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C002199C (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 *     HUBDTX_LogBillboardEvent @ 0x1C0021CB4 (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_LogAlternateMode @ 0x1C0021DB4 (HUBDTX_LogAlternateMode.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C0023140 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C0023398 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C0023EEC (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 *     HUBMISC_CreateNewDSM @ 0x1C0025248 (HUBMISC_CreateNewDSM.c)
 *     HUBMISC_ControlTransfer @ 0x1C0026388 (HUBMISC_ControlTransfer.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C0026BD4 (HUBMISC_GetDeviceInterfacePath.c)
 *     HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice @ 0x1C0026FA0 (HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice.c)
 *     HUBMISC_CreateWerReport @ 0x1C002723C (HUBMISC_CreateWerReport.c)
 *     HUBREG_QueryUsbflagsAlternateSettingFilter @ 0x1C002759C (HUBREG_QueryUsbflagsAlternateSettingFilter.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C0027754 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002A83C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C002CE74 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x1C002E2B0 (HUBDESC_ValidateMsOs20ConfigurationSubset.c)
 *     HUBDESC_ValidateMsOs20FunctionSubset @ 0x1C002E520 (HUBDESC_ValidateMsOs20FunctionSubset.c)
 *     WER_CreateReport @ 0x1C002FB90 (WER_CreateReport.c)
 *     WMI_QueryInstanceDeviceNodeInfo @ 0x1C0030290 (WMI_QueryInstanceDeviceNodeInfo.c)
 *     HUBBOOT_RegisterBootDevice @ 0x1C0030578 (HUBBOOT_RegisterBootDevice.c)
 *     TelemetryData_CreateReport @ 0x1C0030BF8 (TelemetryData_CreateReport.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C0030FCC (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C00311E0 (USBDInternal_BuildServicePath.c)
 *     USBD_CreateHandle @ 0x1C00313D4 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C00317C8 (USBD_QueryUsbCapability.c)
 *     UsbSleepStudy_RegisterPdo @ 0x1C00328D0 (UsbSleepStudy_RegisterPdo.c)
 *     UsbSleepStudy_GetDeviceStringProperty @ 0x1C0032F70 (UsbSleepStudy_GetDeviceStringProperty.c)
 *     WerpAllocateAndInitializeSid @ 0x1C0033450 (WerpAllocateAndInitializeSid.c)
 *     WerKernelSubmitReport @ 0x1C0033B80 (WerKernelSubmitReport.c)
 *     WppTraceCallback @ 0x1C0061100 (WppTraceCallback.c)
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x1C0061690 (HUBDRIVER_EtwRundownUsbDevice.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C0061E20 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C00632E4 (HUBFDO_IoctlGetPortStatus.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C00634A8 (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C0063674 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C00639F4 (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C0063C14 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C0063DD0 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C0063FE4 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C00643C4 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C0064878 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C0064B00 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C0064EA8 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C0065D40 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C0066BA4 (HUBPDO_CreatePdoInternal.c)
 *     HUBCONNECTOR_RegisterPort @ 0x1C0067F0C (HUBCONNECTOR_RegisterPort.c)
 *     HUBMISC_InitializeHsm @ 0x1C0068DD0 (HUBMISC_InitializeHsm.c)
 *     HUBREG_QueryUxdPortKey @ 0x1C006C06C (HUBREG_QueryUxdPortKey.c)
 *     HUBREG_UpdateUxdSettings @ 0x1C006C558 (HUBREG_UpdateUxdSettings.c)
 *     HUBREG_DeleteUxdSubKeys @ 0x1C006CAD0 (HUBREG_DeleteUxdSubKeys.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C006DA30 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C006DE9C (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EnumChildren @ 0x1C006E264 (HUBACPI_EnumChildren.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C006E5EC (HUBACPI_GetAcpiPortAttributes.c)
 *     WMI_AcquireHubName @ 0x1C006ED48 (WMI_AcquireHubName.c)
 *     WMI_QueryInstanceHubNodeInfo @ 0x1C006EFC0 (WMI_QueryInstanceHubNodeInfo.c)
 *     WMI_GetPropertyString @ 0x1C006F23C (WMI_GetPropertyString.c)
 *     WMI_RegisterHub @ 0x1C006F4D8 (WMI_RegisterHub.c)
 *     WMI_RegisterDevice @ 0x1C006F69C (WMI_RegisterDevice.c)
 *     WMI_RegisterSurpriseRemovalNotificationInstance @ 0x1C006F7C0 (WMI_RegisterSurpriseRemovalNotificationInstance.c)
 *     TelemetryData_pInitWerContext @ 0x1C006FE8C (TelemetryData_pInitWerContext.c)
 *     DriverEntry @ 0x1C0072000 (DriverEntry.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C00346FD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
