/*
 * XREFs of RtlInitUnicodeStringEx @ 0x140015260
 * Callers:
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     NtApphelpCacheControl @ 0x14040D608 (NtApphelpCacheControl.c)
 *     _RegRtlOpenKeyTransacted @ 0x140435A8C (_RegRtlOpenKeyTransacted.c)
 *     _CmValidateDeviceInterfaceName @ 0x140436820 (_CmValidateDeviceInterfaceName.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x140436A7C (_CmIsDeviceInterfaceEnabled.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14043CBC8 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14043D720 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceRegPropWorker @ 0x14043DB74 (_CmGetDeviceRegPropWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14043EF34 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x14043F2AC (_CmGetDeviceInterfaceClassGuid.c)
 *     _PnpIsValidGuidString @ 0x14043FF5C (_PnpIsValidGuidString.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14043FFC0 (IopDeviceInterfaceFilterCallback.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140440170 (_CmOpenCommonClassRegKeyWorker.c)
 *     PiCMOpenClassKey @ 0x1404428B0 (PiCMOpenClassKey.c)
 *     PiCMGetDeviceInterfaceList @ 0x140457DA8 (PiCMGetDeviceInterfaceList.c)
 *     IopGetDeviceInterfaces @ 0x140457F6C (IopGetDeviceInterfaces.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14045BFC8 (IopDeviceObjectFromSymbolicName.c)
 *     PiCMSetObjectProperty @ 0x1404DA470 (PiCMSetObjectProperty.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404DC05C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceStatus @ 0x1404DCCB8 (_CmGetDeviceStatus.c)
 *     _RegRtlCreateKeyTransacted @ 0x1404DE7D8 (_RegRtlCreateKeyTransacted.c)
 *     _CmGetDeviceParent @ 0x1404DEA74 (_CmGetDeviceParent.c)
 *     _CmIsRootDevice @ 0x1404DEBD8 (_CmIsRootDevice.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1404DF26C (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     _CmIsRootEnumeratedDevice @ 0x1404E2280 (_CmIsRootEnumeratedDevice.c)
 *     PipCallDriverAddDevice @ 0x1404E231C (PipCallDriverAddDevice.c)
 *     IopProcessSetInterfaceState @ 0x1404E3518 (IopProcessSetInterfaceState.c)
 *     PiDeviceRegistration @ 0x1404E6474 (PiDeviceRegistration.c)
 *     IopGetRootDevices @ 0x1404E7140 (IopGetRootDevices.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     _PnpParseIndirectResourceString @ 0x140522934 (_PnpParseIndirectResourceString.c)
 *     _RegRtlQueryValue @ 0x140530770 (_RegRtlQueryValue.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140532058 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140537FFC (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PnpDisableDeviceInterfaces @ 0x140538D8C (PnpDisableDeviceInterfaces.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140540030 (RtlpProcessIFEOKeyFilter.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1405447FC (PiPnpRtlEnumeratorFilterCallback.c)
 *     RtlQueryImageFileKeyOption @ 0x140545DF4 (RtlQueryImageFileKeyOption.c)
 *     _CmGetDeviceSoftwareKey @ 0x140549A10 (_CmGetDeviceSoftwareKey.c)
 *     PnpGenerateDeviceIdsHash @ 0x14054DE28 (PnpGenerateDeviceIdsHash.c)
 *     PiNormalizeDeviceText @ 0x14054F2C8 (PiNormalizeDeviceText.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405506E4 (PiCMGetRelatedDeviceInstance.c)
 *     DrvDbFindDatabaseNode @ 0x140553AE0 (DrvDbFindDatabaseNode.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x140555D3C (PiPnpRtlGetFilteredDeviceList.c)
 *     _RegRtlSetValue @ 0x140556964 (_RegRtlSetValue.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14055E6C0 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x14055E874 (IoGetDeviceInterfaceAlias.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x14055EBD4 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmIsDevicePresent @ 0x140560F00 (_CmIsDevicePresent.c)
 *     _PnpCtxRegDeleteValue @ 0x140564078 (_PnpCtxRegDeleteValue.c)
 *     IoRegisterDeviceInterface @ 0x14057EEA0 (IoRegisterDeviceInterface.c)
 *     PiCMQueryRemove @ 0x14058A87C (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14058ACF4 (PiCMDeviceAction.c)
 *     PiCMSetRegistryProperty @ 0x14058C0C0 (PiCMSetRegistryProperty.c)
 *     PiCMGetDeviceDepth @ 0x14058D600 (PiCMGetDeviceDepth.c)
 *     PnpIsValidGuidString @ 0x14058E904 (PnpIsValidGuidString.c)
 *     IopIsReportedAlready @ 0x14059BAAC (IopIsReportedAlready.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405A8E28 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1405A9344 (_CmEnumSubkeyCallback.c)
 *     _CmClassSubkeyCallback @ 0x1405A966C (_CmClassSubkeyCallback.c)
 *     PnpDeleteDeviceInterfaces @ 0x14067C4CC (PnpDeleteDeviceInterfaces.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140680078 (PiPnpRtlServiceFilterCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140681244 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406835F4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140688F1C (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406923BC (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceKey @ 0x14069289C (PiCMDeleteDeviceKey.c)
 *     PiCMGenerateDeviceInstance @ 0x140692DCC (PiCMGenerateDeviceInstance.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 *     ObpStopRuntimeStackTrace @ 0x1406AE860 (ObpStopRuntimeStackTrace.c)
 *     PfpQueryFileExtentsRequest @ 0x1406AF41C (PfpQueryFileExtentsRequest.c)
 *     AslRegistryGetUInt32 @ 0x140705420 (AslRegistryGetUInt32.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140712778 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140712C94 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140713210 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1407148B4 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmClassFilterCallback @ 0x140716370 (_CmClassFilterCallback.c)
 *     _CmGetDeviceRelationsList @ 0x14071648C (_CmGetDeviceRelationsList.c)
 *     _CmServiceFilterCallback @ 0x1407166D4 (_CmServiceFilterCallback.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140716CBC (_PnpGetGenericStorePropertyKeys.c)
 *     _CmGetDeviceChildren @ 0x1407179D8 (_CmGetDeviceChildren.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x14071B63C (DrvDbGetObjectSubKeyCallback.c)
 *     CmpAddDriverToList @ 0x1407BAEFC (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x1407BB548 (CmpIsLoadType.c)
 *     IopInitCrashDumpRegCallback @ 0x1407DC720 (IopInitCrashDumpRegCallback.c)
 *     ObpInitStackTrace @ 0x1407E7A5C (ObpInitStackTrace.c)
 *     MfgInitSystem @ 0x1407E8BA0 (MfgInitSystem.c)
 *     CmpLoadManufacturingProfileNode @ 0x1407F89DC (CmpLoadManufacturingProfileNode.c)
 *     VhdiGetVolumeNumber @ 0x1407FC9D8 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1407FCB20 (VhdiInitializeBootDisk.c)
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
