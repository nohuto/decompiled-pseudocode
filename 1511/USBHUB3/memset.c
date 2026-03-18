/*
 * XREFs of memset @ 0x1C0035340
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001080 (McGenControlCallbackV2.c)
 *     HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C0002CBC (HUBHTX_ValidateAndCacheHubConfigDescriptor.c)
 *     HUBHTX_SendInterruptTransfer @ 0x1C0002F68 (HUBHTX_SendInterruptTransfer.c)
 *     HUBHTX_CompleteGetPortStatusWithPortStatusResult @ 0x1C00053FC (HUBHTX_CompleteGetPortStatusWithPortStatusResult.c)
 *     HUBHTX_CompleteGetPortStatusWithFailedStatus @ 0x1C00055F0 (HUBHTX_CompleteGetPortStatusWithFailedStatus.c)
 *     HUBHTX_ClearTTBuffer @ 0x1C0005AE0 (HUBHTX_ClearTTBuffer.c)
 *     HUBPARENT_SetHubConfiguration @ 0x1C0006208 (HUBPARENT_SetHubConfiguration.c)
 *     HUBPARENT_ResetHub @ 0x1C00068FC (HUBPARENT_ResetHub.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x1C0006B10 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C0006CB0 (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBHSM_ResettingInterruptPipeOnFailure @ 0x1C0007810 (HUBHSM_ResettingInterruptPipeOnFailure.c)
 *     HUBHSM_ValidatingAndParsingHubDescriptor @ 0x1C0008300 (HUBHSM_ValidatingAndParsingHubDescriptor.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C000897C (HUBSM_FindAndSetTargetState.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x1C000A458 (HUBFDO_GetDeviceCapabilities.c)
 *     HUBFDO_EvtIoInternalDeviceControlFromPDO @ 0x1C000B080 (HUBFDO_EvtIoInternalDeviceControlFromPDO.c)
 *     HUBFDO_BuildUsb20HubDescriptor @ 0x1C000B2EC (HUBFDO_BuildUsb20HubDescriptor.c)
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000B420 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_PowerSettingCallback @ 0x1C000BB00 (HUBFDO_PowerSettingCallback.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x1C000BF58 (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMUX_CreatePSM @ 0x1C000BF98 (HUBMUX_CreatePSM.c)
 *     HUBMUX_CreateChildPSMs @ 0x1C000C488 (HUBMUX_CreateChildPSMs.c)
 *     RtlStringCchPrintfExW @ 0x1C000F628 (RtlStringCchPrintfExW.c)
 *     HUBPDO_CompleteClientSerialRequestWithStatusSuccess @ 0x1C00101A8 (HUBPDO_CompleteClientSerialRequestWithStatusSuccess.c)
 *     HUBPDO_CompleteClientSerialRequestWithStatusFailed @ 0x1C0010370 (HUBPDO_CompleteClientSerialRequestWithStatusFailed.c)
 *     HUBPDO_CompleteClientSerialRequestWithLastStatus @ 0x1C00104F0 (HUBPDO_CompleteClientSerialRequestWithLastStatus.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C0010790 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_GetHubName @ 0x1C0010AF8 (HUBPDO_GetHubName.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0010DA0 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x1C00110D0 (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C00112B0 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x1C001182C (HUBPDO_ValidateSelectInterfaceUrb.c)
 *     HUBPDO_FindAndStoreMatchingInternalPipeHandle @ 0x1C0011A34 (HUBPDO_FindAndStoreMatchingInternalPipeHandle.c)
 *     HUBPDO_QueryForD3ColdSupportInAcpi @ 0x1C0011DB4 (HUBPDO_QueryForD3ColdSupportInAcpi.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0013C30 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_SubmitDeviceWakeNotificationIoctl @ 0x1C0014DE4 (HUBPDO_SubmitDeviceWakeNotificationIoctl.c)
 *     HUBPDO_AllocateForwardProgressResources @ 0x1C001518C (HUBPDO_AllocateForwardProgressResources.c)
 *     HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion @ 0x1C00156E0 (HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion.c)
 *     HUBID_AppendStringToIDString @ 0x1C0015B5C (HUBID_AppendStringToIDString.c)
 *     HUBID_BuildUxdPnpId @ 0x1C0015CDC (HUBID_BuildUxdPnpId.c)
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C0017890 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C0017A10 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_SettingConfigurationInformationInClientRequest @ 0x1C0017B80 (HUBDSM_SettingConfigurationInformationInClientRequest.c)
 *     HUBDSM_SettingInterfaceInformationInClientRequest @ 0x1C0017DB0 (HUBDSM_SettingInterfaceInformationInClientRequest.c)
 *     HUBDSM_UpdatingDeviceInformationInEnum @ 0x1C0018300 (HUBDSM_UpdatingDeviceInformationInEnum.c)
 *     HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x1C0018730 (HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum.c)
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1C00194A0 (HUBDSM_ValidatingMSOSExtendedConfigDescriptor.c)
 *     HUBDSM_SettingNonZeroAddress @ 0x1C0019690 (HUBDSM_SettingNonZeroAddress.c)
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x1C0019CA0 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C0019E20 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 *     HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x1C0019FA0 (HUBDSM_ValidatingMsOs20DescriptorSetIfPresent.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x1C001C410 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x1C001CFF0 (HUBUCX_NotifyDeviceResetUsingUCXIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C001D1A8 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C001D3D0 (HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C001D480 (HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C001D6DC (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C001DCB0 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1C001DF2C (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl @ 0x1C001E34C (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x1C001EA2C (HUBUCX_UpdateHubInformationUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoUsingUCXIoctl @ 0x1C001EF8C (HUBUCX_PurgeDeviceIoUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl @ 0x1C001F038 (HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl @ 0x1C001F0E4 (HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl.c)
 *     HUBUCX_NotifyForwardProgress @ 0x1C001F380 (HUBUCX_NotifyForwardProgress.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0020B24 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C0020F0C (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C00214B8 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C00218E0 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C0021B24 (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x1C0021D10 (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C00220B0 (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x1C0022414 (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C00225DC (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 *     HUBDTX_LogBillboardEvent @ 0x1C00228F4 (HUBDTX_LogBillboardEvent.c)
 *     HUBDTX_LogAlternateMode @ 0x1C00229F4 (HUBDTX_LogAlternateMode.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C0023D90 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C0023FE8 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C0024B3C (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 *     HUBMISC_CreateNewDSM @ 0x1C0025E98 (HUBMISC_CreateNewDSM.c)
 *     HUBMISC_ControlTransfer @ 0x1C0026FD8 (HUBMISC_ControlTransfer.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C0027824 (HUBMISC_GetDeviceInterfacePath.c)
 *     HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice @ 0x1C0027BF0 (HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice.c)
 *     HUBMISC_CreateWerReport @ 0x1C0027E8C (HUBMISC_CreateWerReport.c)
 *     HUBREG_QueryUsbflagsAlternateSettingFilter @ 0x1C00281EC (HUBREG_QueryUsbflagsAlternateSettingFilter.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C00283A4 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002B514 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C002DB98 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x1C002EFE0 (HUBDESC_ValidateMsOs20ConfigurationSubset.c)
 *     HUBDESC_ValidateMsOs20FunctionSubset @ 0x1C002F250 (HUBDESC_ValidateMsOs20FunctionSubset.c)
 *     WER_CreateReport @ 0x1C00308C0 (WER_CreateReport.c)
 *     WMI_QueryInstanceDeviceNodeInfo @ 0x1C0030FC0 (WMI_QueryInstanceDeviceNodeInfo.c)
 *     HUBBOOT_RegisterBootDevice @ 0x1C00312A8 (HUBBOOT_RegisterBootDevice.c)
 *     TelemetryData_CreateReport @ 0x1C0031570 (TelemetryData_CreateReport.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C003194C (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C0031B60 (USBDInternal_BuildServicePath.c)
 *     USBD_CreateHandle @ 0x1C0031D54 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C0032148 (USBD_QueryUsbCapability.c)
 *     UsbSleepStudy_RegisterPdo @ 0x1C0033250 (UsbSleepStudy_RegisterPdo.c)
 *     UsbSleepStudy_GetDeviceStringProperty @ 0x1C00338F0 (UsbSleepStudy_GetDeviceStringProperty.c)
 *     WerpAllocateAndInitializeSid @ 0x1C0033DD0 (WerpAllocateAndInitializeSid.c)
 *     WerKernelSubmitReport @ 0x1C0034500 (WerKernelSubmitReport.c)
 *     WppTraceCallback @ 0x1C0061100 (WppTraceCallback.c)
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x1C0061914 (HUBDRIVER_EtwRundownUsbDevice.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C0062160 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C00638E4 (HUBFDO_IoctlGetPortStatus.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C0063AA8 (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C0063C74 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C0063FF4 (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C0064214 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C00643D0 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C00645E4 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C00649C4 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C0064F58 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C00651E0 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C0065588 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C00664B0 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_PublishBillboardDetails @ 0x1C00670AC (HUBPDO_PublishBillboardDetails.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C0067804 (HUBPDO_CreatePdoInternal.c)
 *     HUBCONNECTOR_RegisterPort @ 0x1C0068B7C (HUBCONNECTOR_RegisterPort.c)
 *     HUBMISC_InitializeHsm @ 0x1C0069A40 (HUBMISC_InitializeHsm.c)
 *     HUBREG_QueryUxdPortKey @ 0x1C006CCDC (HUBREG_QueryUxdPortKey.c)
 *     HUBREG_UpdateUxdSettings @ 0x1C006D1C8 (HUBREG_UpdateUxdSettings.c)
 *     HUBREG_DeleteUxdSubKeys @ 0x1C006D740 (HUBREG_DeleteUxdSubKeys.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C006E6A0 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C006EB0C (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EnumChildren @ 0x1C006EED4 (HUBACPI_EnumChildren.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C006F25C (HUBACPI_GetAcpiPortAttributes.c)
 *     WMI_AcquireHubName @ 0x1C006F9B8 (WMI_AcquireHubName.c)
 *     WMI_QueryInstanceHubNodeInfo @ 0x1C006FC30 (WMI_QueryInstanceHubNodeInfo.c)
 *     WMI_GetPropertyString @ 0x1C006FEAC (WMI_GetPropertyString.c)
 *     WMI_RegisterHub @ 0x1C0070148 (WMI_RegisterHub.c)
 *     WMI_RegisterDevice @ 0x1C007030C (WMI_RegisterDevice.c)
 *     WMI_RegisterSurpriseRemovalNotificationInstance @ 0x1C0070430 (WMI_RegisterSurpriseRemovalNotificationInstance.c)
 *     TelemetryData_pInitWerContext @ 0x1C0070B58 (TelemetryData_pInitWerContext.c)
 *     DriverEntry @ 0x1C0073000 (DriverEntry.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C00353FD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
