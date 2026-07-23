/*
 * XREFs of RtlInitUnicodeStringEx @ 0x1400C1850
 * Callers:
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     IopProcessSetInterfaceState @ 0x1403F1568 (IopProcessSetInterfaceState.c)
 *     _CmIsRootEnumeratedDevice @ 0x1403F3B14 (_CmIsRootEnumeratedDevice.c)
 *     PipCallDriverAddDevice @ 0x1403F3BB0 (PipCallDriverAddDevice.c)
 *     RtlQueryImageFileKeyOption @ 0x140472194 (RtlQueryImageFileKeyOption.c)
 *     PnpDisableDeviceInterfaces @ 0x14048367C (PnpDisableDeviceInterfaces.c)
 *     _PnpParseIndirectResourceString @ 0x1404A3088 (_PnpParseIndirectResourceString.c)
 *     NtApphelpCacheControl @ 0x1404A50E4 (NtApphelpCacheControl.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1404B6D6C (RtlpProcessIFEOKeyFilter.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404B757C (_CmGetDeviceSoftwareKey.c)
 *     DrvDbFindDatabaseNode @ 0x1404B7D3C (DrvDbFindDatabaseNode.c)
 *     PiNormalizeDeviceText @ 0x1404B7EB8 (PiNormalizeDeviceText.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1404C5784 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiCMOpenClassKey @ 0x1404C94B4 (PiCMOpenClassKey.c)
 *     PiCMSetObjectProperty @ 0x1404CCC18 (PiCMSetObjectProperty.c)
 *     _RegRtlSetValue @ 0x1404D0124 (_RegRtlSetValue.c)
 *     _PnpCtxRegDeleteValue @ 0x1404D2EA8 (_PnpCtxRegDeleteValue.c)
 *     PiCMGetDeviceInterfaceList @ 0x1404D8EBC (PiCMGetDeviceInterfaceList.c)
 *     IopGetDeviceInterfaces @ 0x1404D9968 (IopGetDeviceInterfaces.c)
 *     _CmIsDevicePresent @ 0x1404DA2B0 (_CmIsDevicePresent.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1404DA730 (PiPnpRtlEnumeratorFilterCallback.c)
 *     _CmGetDeviceStatus @ 0x1404DA838 (_CmGetDeviceStatus.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1404DA968 (IopDeviceInterfaceFilterCallback.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404DAB74 (_CmOpenCommonClassRegKeyWorker.c)
 *     _PnpIsValidGuidString @ 0x1404DAE44 (_PnpIsValidGuidString.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1404DB9D4 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404DBB94 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _RegRtlCreateKeyTransacted @ 0x1404DD8A0 (_RegRtlCreateKeyTransacted.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x1404DDFA4 (_CmIsDeviceInterfaceEnabled.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1404DE698 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1404DF0E0 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x1404DF4B0 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1404E0410 (_CmOpenDeviceRegKeyWorker.c)
 *     _RegRtlQueryValue @ 0x1404E09F0 (_RegRtlQueryValue.c)
 *     _RegRtlOpenKeyTransacted @ 0x1404E0B64 (_RegRtlOpenKeyTransacted.c)
 *     _CmGetDeviceRegPropWorker @ 0x1404E12F0 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1404E8C88 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14050B84C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceParent @ 0x14050CB90 (_CmGetDeviceParent.c)
 *     _CmIsRootDevice @ 0x14050CCF4 (_CmIsRootDevice.c)
 *     PnpGenerateDeviceIdsHash @ 0x14050D908 (PnpGenerateDeviceIdsHash.c)
 *     PiDeviceRegistration @ 0x14050F534 (PiDeviceRegistration.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1405135B4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     IopGetRootDevices @ 0x14051604C (IopGetRootDevices.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x140528EE0 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x140529090 (IoGetDeviceInterfaceAlias.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x1405293D0 (_CmGetDeviceInterfacePathFormat.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14052C9A8 (PiCMGetRelatedDeviceInstance.c)
 *     IoRegisterDeviceInterface @ 0x140540DA8 (IoRegisterDeviceInterface.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140543730 (IopDeviceObjectFromSymbolicName.c)
 *     IopIsReportedAlready @ 0x1405556E8 (IopIsReportedAlready.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140562D74 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1405631D8 (_CmEnumSubkeyCallback.c)
 *     _CmClassSubkeyCallback @ 0x140563500 (_CmClassSubkeyCallback.c)
 *     PnpDeleteDeviceInterfaces @ 0x14062B9BC (PnpDeleteDeviceInterfaces.c)
 *     PnpIsValidGuidString @ 0x14062DAE8 (PnpIsValidGuidString.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14062F344 (PiPnpRtlServiceFilterCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140630964 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140635480 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14063D290 (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x1406462C8 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140646C20 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceKey @ 0x1406470A0 (PiCMDeleteDeviceKey.c)
 *     PiCMDeviceAction @ 0x140647448 (PiCMDeviceAction.c)
 *     PiCMGenerateDeviceInstance @ 0x1406478D0 (PiCMGenerateDeviceInstance.c)
 *     PiCMGetDeviceDepth @ 0x140647BF8 (PiCMGetDeviceDepth.c)
 *     PiCMQueryRemove @ 0x14064810C (PiCMQueryRemove.c)
 *     PiCMSetRegistryProperty @ 0x140648964 (PiCMSetRegistryProperty.c)
 *     PiInitializeDevice @ 0x14064AD78 (PiInitializeDevice.c)
 *     ObpStopRuntimeStackTrace @ 0x140668948 (ObpStopRuntimeStackTrace.c)
 *     PfpQueryFileExtentsRequest @ 0x1406691FC (PfpQueryFileExtentsRequest.c)
 *     AslRegistryGetUInt32 @ 0x1406C57F0 (AslRegistryGetUInt32.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1406D7C44 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406D815C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1406D86D8 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1406D9D7C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmClassFilterCallback @ 0x1406DB898 (_CmClassFilterCallback.c)
 *     _CmGetDeviceRelationsList @ 0x1406DB9B8 (_CmGetDeviceRelationsList.c)
 *     _CmServiceFilterCallback @ 0x1406DBBF8 (_CmServiceFilterCallback.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC340 (_PnpGetGenericStorePropertyKeys.c)
 *     _CmGetDeviceChildren @ 0x1406DD05C (_CmGetDeviceChildren.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1406E1C00 (DrvDbGetObjectSubKeyCallback.c)
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
