/*
 * XREFs of RtlInitUnicodeStringEx @ 0x14008FB20
 * Callers:
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     PiDeviceRegistration @ 0x1403B9274 (PiDeviceRegistration.c)
 *     IopGetRootDevices @ 0x1403B9DD4 (IopGetRootDevices.c)
 *     IopGetRegistryValue @ 0x1403BCBA8 (IopGetRegistryValue.c)
 *     _CmValidateDeviceInterfaceName @ 0x14043AD30 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14043B720 (_CmOpenDeviceRegKeyWorker.c)
 *     _RegRtlQueryValue @ 0x14043BD34 (_RegRtlQueryValue.c)
 *     _RegRtlOpenKeyTransacted @ 0x14043BEB8 (_RegRtlOpenKeyTransacted.c)
 *     _CmGetDeviceRegPropWorker @ 0x14043C61C (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14043E634 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x14043F358 (_CmIsDeviceInterfaceEnabled.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140440104 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x140441CC0 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140442270 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _RegRtlCreateKeyTransacted @ 0x140444F38 (_RegRtlCreateKeyTransacted.c)
 *     DrvDbFindDatabaseNode @ 0x140447070 (DrvDbFindDatabaseNode.c)
 *     IopProcessSetInterfaceState @ 0x140456288 (IopProcessSetInterfaceState.c)
 *     _CmIsRootEnumeratedDevice @ 0x140458E9C (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14045AE44 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceStatus @ 0x14045BF1C (_CmGetDeviceStatus.c)
 *     _PnpParseIndirectResourceString @ 0x140492DD4 (_PnpParseIndirectResourceString.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1404969B0 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x140496C38 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     NtApphelpCacheControl @ 0x14049C958 (NtApphelpCacheControl.c)
 *     PnpDisableDeviceInterfaces @ 0x1404A091C (PnpDisableDeviceInterfaces.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1404AE068 (RtlpProcessIFEOKeyFilter.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404AF568 (_CmGetDeviceSoftwareKey.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1404B00D8 (PiPnpRtlEnumeratorFilterCallback.c)
 *     _CmIsDevicePresent @ 0x1404B01E0 (_CmIsDevicePresent.c)
 *     _CmIsRootDevice @ 0x1404B1458 (_CmIsRootDevice.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1404B157C (IopDeviceInterfaceFilterCallback.c)
 *     RtlQueryImageFileKeyOption @ 0x1404B33FC (RtlQueryImageFileKeyOption.c)
 *     PiCMOpenClassKey @ 0x1404BE4F4 (PiCMOpenClassKey.c)
 *     _RegRtlSetValue @ 0x1404BFC84 (_RegRtlSetValue.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1404C2098 (IopDeviceObjectFromSymbolicName.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1404DD2D8 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PiCMGetDeviceInterfaceList @ 0x1404DD618 (PiCMGetDeviceInterfaceList.c)
 *     IopGetDeviceInterfaces @ 0x1404DD828 (IopGetDeviceInterfaces.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404DE228 (_CmOpenCommonClassRegKeyWorker.c)
 *     _PnpIsValidGuidString @ 0x1404DE530 (_PnpIsValidGuidString.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1404E35C4 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x1404E377C (IoGetDeviceInterfaceAlias.c)
 *     PiCMSetObjectProperty @ 0x1404E5A40 (PiCMSetObjectProperty.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x1404E6310 (_CmGetDeviceInterfacePathFormat.c)
 *     PipCallDriverAddDevice @ 0x1404E68A0 (PipCallDriverAddDevice.c)
 *     _PnpCtxRegDeleteValue @ 0x1404EBE98 (_PnpCtxRegDeleteValue.c)
 *     PnpGenerateDeviceIdsHash @ 0x1404F0B04 (PnpGenerateDeviceIdsHash.c)
 *     PiNormalizeDeviceText @ 0x1404F1278 (PiNormalizeDeviceText.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1404F1C44 (PiCMGetRelatedDeviceInstance.c)
 *     _CmGetDeviceParent @ 0x1404F1E6C (_CmGetDeviceParent.c)
 *     _CmGetDeviceChildren @ 0x1404F9AB8 (_CmGetDeviceChildren.c)
 *     IoRegisterDeviceInterface @ 0x14050927C (IoRegisterDeviceInterface.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1405142AC (PiDevCfgConfigureDeviceInterfaces.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14051496C (_PnpGetGenericStorePropertyKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x140515118 (PiDevCfgCopyDeviceKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140517310 (DrvDbGetObjectSubKeyCallback.c)
 *     PnpIsValidGuidString @ 0x14051A7F0 (PnpIsValidGuidString.c)
 *     IopIsReportedAlready @ 0x1405291E0 (IopIsReportedAlready.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140531D0C (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140532164 (_CmEnumSubkeyCallback.c)
 *     _CmClassSubkeyCallback @ 0x14053248C (_CmClassSubkeyCallback.c)
 *     PnpDeleteDeviceInterfaces @ 0x1406018BC (PnpDeleteDeviceInterfaces.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1406052B8 (PiPnpRtlServiceFilterCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14060649C (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140609B14 (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x140611DAC (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406125F8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceKey @ 0x140612A78 (PiCMDeleteDeviceKey.c)
 *     PiCMDeviceAction @ 0x140612E20 (PiCMDeviceAction.c)
 *     PiCMGenerateDeviceInstance @ 0x1406132A8 (PiCMGenerateDeviceInstance.c)
 *     PiCMGetDeviceDepth @ 0x140613584 (PiCMGetDeviceDepth.c)
 *     PiCMQueryRemove @ 0x140613880 (PiCMQueryRemove.c)
 *     PiCMSetRegistryProperty @ 0x1406140E8 (PiCMSetRegistryProperty.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 *     ObpStopRuntimeStackTrace @ 0x14063076C (ObpStopRuntimeStackTrace.c)
 *     PfpQueryFileExtentsRequest @ 0x140630EFC (PfpQueryFileExtentsRequest.c)
 *     AslRegistryGetUInt32 @ 0x1406805EC (AslRegistryGetUInt32.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140692BDC (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406930F8 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140693674 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140694D24 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmClassFilterCallback @ 0x1406967E0 (_CmClassFilterCallback.c)
 *     _CmGetDeviceRelationsList @ 0x1406968FC (_CmGetDeviceRelationsList.c)
 *     _CmServiceFilterCallback @ 0x140696B44 (_CmServiceFilterCallback.c)
 *     CmpAddDriverToList @ 0x1407547E0 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140754E2C (CmpIsLoadType.c)
 *     IopInitCrashDumpRegCallback @ 0x140767D60 (IopInitCrashDumpRegCallback.c)
 *     ObpInitStackTrace @ 0x14077148C (ObpInitStackTrace.c)
 *     MfgInitSystem @ 0x1407720A4 (MfgInitSystem.c)
 *     CmpLoadManufacturingProfileNode @ 0x140782448 (CmpLoadManufacturingProfileNode.c)
 *     VhdiGetVolumeNumber @ 0x14078680C (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140786954 (VhdiInitializeBootDisk.c)
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
