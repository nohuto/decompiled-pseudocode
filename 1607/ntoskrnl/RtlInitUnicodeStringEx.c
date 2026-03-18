/*
 * XREFs of RtlInitUnicodeStringEx @ 0x1400C39C0
 * Callers:
 *     RtlAppendUnicodeToString @ 0x1400C3920 (RtlAppendUnicodeToString.c)
 *     IopProcessSetInterfaceState @ 0x1403F26A4 (IopProcessSetInterfaceState.c)
 *     _CmIsRootEnumeratedDevice @ 0x1403F4C50 (_CmIsRootEnumeratedDevice.c)
 *     PipCallDriverAddDevice @ 0x1403F4CEC (PipCallDriverAddDevice.c)
 *     RtlQueryImageFileKeyOption @ 0x1404732C4 (RtlQueryImageFileKeyOption.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1404867A4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     IopGetRootDevices @ 0x14049DC40 (IopGetRootDevices.c)
 *     IopGetRegistryValue @ 0x14049F430 (IopGetRegistryValue.c)
 *     _PnpParseIndirectResourceString @ 0x1404B8CA8 (_PnpParseIndirectResourceString.c)
 *     NtApphelpCacheControl @ 0x1404B93AC (NtApphelpCacheControl.c)
 *     PnpDisableDeviceInterfaces @ 0x1404C3314 (PnpDisableDeviceInterfaces.c)
 *     PiDeviceRegistration @ 0x1404C7D00 (PiDeviceRegistration.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404CE780 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceParent @ 0x1404CFAC4 (_CmGetDeviceParent.c)
 *     _CmIsRootDevice @ 0x1404CFC28 (_CmIsRootDevice.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1404D32CC (RtlpProcessIFEOKeyFilter.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404D3ADC (_CmGetDeviceSoftwareKey.c)
 *     DrvDbFindDatabaseNode @ 0x1404D429C (DrvDbFindDatabaseNode.c)
 *     PiNormalizeDeviceText @ 0x1404D48B4 (PiNormalizeDeviceText.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1404E2820 (PiPnpRtlGetFilteredDeviceList.c)
 *     PnpGenerateDeviceIdsHash @ 0x1404E63C8 (PnpGenerateDeviceIdsHash.c)
 *     PiCMOpenClassKey @ 0x1404E6B44 (PiCMOpenClassKey.c)
 *     PiCMSetObjectProperty @ 0x1404EAA14 (PiCMSetObjectProperty.c)
 *     _RegRtlSetValue @ 0x1404EE05C (_RegRtlSetValue.c)
 *     _PnpCtxRegDeleteValue @ 0x1404F0DB4 (_PnpCtxRegDeleteValue.c)
 *     PiCMGetDeviceInterfaceList @ 0x1404F5F30 (PiCMGetDeviceInterfaceList.c)
 *     IopGetDeviceInterfaces @ 0x1404F69DC (IopGetDeviceInterfaces.c)
 *     _CmIsDevicePresent @ 0x1404F7324 (_CmIsDevicePresent.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1404F77A4 (PiPnpRtlEnumeratorFilterCallback.c)
 *     _CmGetDeviceStatus @ 0x1404F78AC (_CmGetDeviceStatus.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1404F79DC (IopDeviceInterfaceFilterCallback.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404F7BE8 (_CmOpenCommonClassRegKeyWorker.c)
 *     _PnpIsValidGuidString @ 0x1404F7EB8 (_PnpIsValidGuidString.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1404F8A48 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404F8C08 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _RegRtlCreateKeyTransacted @ 0x1404FA914 (_RegRtlCreateKeyTransacted.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x1404FB018 (_CmIsDeviceInterfaceEnabled.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1404FB708 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1404FC150 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x1404FC520 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1404FD480 (_CmOpenDeviceRegKeyWorker.c)
 *     _RegRtlQueryValue @ 0x1404FDA60 (_RegRtlQueryValue.c)
 *     _RegRtlOpenKeyTransacted @ 0x1404FDBD4 (_RegRtlOpenKeyTransacted.c)
 *     _CmGetDeviceRegPropWorker @ 0x1404FE360 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x140505CF8 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1405289A0 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x140528B50 (IoGetDeviceInterfaceAlias.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x140528E90 (_CmGetDeviceInterfacePathFormat.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14052C468 (PiCMGetRelatedDeviceInstance.c)
 *     IoRegisterDeviceInterface @ 0x140540868 (IoRegisterDeviceInterface.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1405431F0 (IopDeviceObjectFromSymbolicName.c)
 *     IopIsReportedAlready @ 0x1405551A8 (IopIsReportedAlready.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140562834 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140562C98 (_CmEnumSubkeyCallback.c)
 *     _CmClassSubkeyCallback @ 0x140562FC0 (_CmClassSubkeyCallback.c)
 *     PnpDeleteDeviceInterfaces @ 0x14062B908 (PnpDeleteDeviceInterfaces.c)
 *     PnpIsValidGuidString @ 0x14062DA34 (PnpIsValidGuidString.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14062F290 (PiPnpRtlServiceFilterCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1406308B0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406353CC (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x140636298 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14063D1DC (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140646B3C (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceKey @ 0x140646FBC (PiCMDeleteDeviceKey.c)
 *     PiCMDeviceAction @ 0x140647364 (PiCMDeviceAction.c)
 *     PiCMGenerateDeviceInstance @ 0x1406477EC (PiCMGenerateDeviceInstance.c)
 *     PiCMGetDeviceDepth @ 0x140647B14 (PiCMGetDeviceDepth.c)
 *     PiCMQueryRemove @ 0x140648028 (PiCMQueryRemove.c)
 *     PiCMSetRegistryProperty @ 0x140648880 (PiCMSetRegistryProperty.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 *     ObpStopRuntimeStackTrace @ 0x140668864 (ObpStopRuntimeStackTrace.c)
 *     PfpQueryFileExtentsRequest @ 0x140669118 (PfpQueryFileExtentsRequest.c)
 *     AslRegistryGetUInt32 @ 0x1406C56B8 (AslRegistryGetUInt32.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1406D7B0C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406D8024 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1406D85A0 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1406D9C44 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmClassFilterCallback @ 0x1406DB760 (_CmClassFilterCallback.c)
 *     _CmGetDeviceRelationsList @ 0x1406DB880 (_CmGetDeviceRelationsList.c)
 *     _CmServiceFilterCallback @ 0x1406DBAC0 (_CmServiceFilterCallback.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC208 (_PnpGetGenericStorePropertyKeys.c)
 *     _CmGetDeviceChildren @ 0x1406DCF24 (_CmGetDeviceChildren.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1406E1AC8 (DrvDbGetObjectSubKeyCallback.c)
 *     CmpAddDriverToList @ 0x1407AFE90 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x1407B04F8 (CmpIsLoadType.c)
 *     IopInitCrashDumpRegCallback @ 0x1407B24BC (IopInitCrashDumpRegCallback.c)
 *     ObpInitStackTrace @ 0x1407BAD00 (ObpInitStackTrace.c)
 *     MfgInitSystem @ 0x1407BD004 (MfgInitSystem.c)
 *     CmpLoadManufacturingProfileNode @ 0x1407CDC40 (CmpLoadManufacturingProfileNode.c)
 *     VhdiGetVolumeNumber @ 0x1407D29AC (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1407D2AF4 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitUnicodeStringEx(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  unsigned __int64 v2; // rax
  unsigned __int16 v3; // ax

  DestinationString->Buffer = (wchar_t *)SourceString;
  *(_DWORD *)&DestinationString->Length = 0;
  if ( !SourceString )
    return 0;
  v2 = -1LL;
  do
    ++v2;
  while ( SourceString[v2] );
  if ( v2 <= 0x7FFE )
  {
    v3 = 2 * v2;
    DestinationString->Length = v3;
    DestinationString->MaximumLength = v3 + 2;
    return 0;
  }
  return -1073741562;
}
