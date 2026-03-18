/*
 * XREFs of RtlGUIDFromString @ 0x1404FB370
 * Callers:
 *     RtlQueryPackageClaims @ 0x14000CCEC (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x1401CEE40 (PiDevCfgParseInterfaceKeyName.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1401CEED8 (PiDevCfgParsePropertyKeyName.c)
 *     PipProcessStartPhase3 @ 0x1403EEA60 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404CE780 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     EtwStartAutoLogger @ 0x1404E0034 (EtwStartAutoLogger.c)
 *     PipGenerateContainerID @ 0x1404EB3C4 (PipGenerateContainerID.c)
 *     _PnpIsValidGuidString @ 0x1404F7EB8 (_PnpIsValidGuidString.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1404F8A48 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1404FB708 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1404FC150 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x1404FC520 (_CmValidateDeviceInterfaceName.c)
 *     PiPnpRtlCmActionCallback @ 0x1404FCFB8 (PiPnpRtlCmActionCallback.c)
 *     PiDmCacheDataDecode @ 0x1404FFBB0 (PiDmCacheDataDecode.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140500534 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x140505CF8 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     IoVolumeDeviceToGuid @ 0x14052CFCC (IoVolumeDeviceToGuid.c)
 *     BiGetObjectIdentifier @ 0x140532888 (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x14053E530 (BiConvertRegistryDataToElement.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405637E0 (EtwpEnableAutoLoggerProviders.c)
 *     WdipSemLoadNextEndEvent @ 0x140564B18 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140564E0C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140565080 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140565368 (WdipSemLoadNextScenario.c)
 *     PiDcInitUpdateProperties @ 0x1405777B8 (PiDcInitUpdateProperties.c)
 *     IoVolumeDeviceNameToGuid @ 0x14062515C (IoVolumeDeviceNameToGuid.c)
 *     PnpIsValidGuidString @ 0x14062DA34 (PnpIsValidGuidString.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x140636008 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140638328 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14063B9F4 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E7C8 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D464 (PiCreateDriverSwDeviceCallback.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14069BE9C (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x1406B139C (ExpParseSignatureName.c)
 *     SddlpUuidFromString @ 0x1406CC464 (SddlpUuidFromString.c)
 *     BcdEnumerateObjects @ 0x1406D2088 (BcdEnumerateObjects.c)
 *     BiBindEfiEntryToBcdObject @ 0x1406D38D4 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x1406D3A28 (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406D518C (BiGetObjectReferenceFromEfiEntry.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC208 (_PnpGetGenericStorePropertyKeys.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 *     EmpParseEntryTypes @ 0x1407A771C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1407A8524 (EmpInfParseGetGuidFromName.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x1404FB460 (ScanHexFormat.c)
 */

NTSTATUS __stdcall RtlGUIDFromString(PCUNICODE_STRING GuidString, GUID *Guid)
{
  unsigned __int16 *p_Data2; // r8
  int v4; // ebx
  unsigned __int16 *p_Data3; // rax
  unsigned int Length; // edx
  wchar_t *Buffer; // rcx
  unsigned __int8 *Data4; // rcx
  unsigned __int8 *v9; // rdx
  __int16 v11; // [rsp+78h] [rbp+37h] BYREF
  __int64 v12; // [rsp+7Ah] [rbp+39h] BYREF
  int v13; // [rsp+82h] [rbp+41h] BYREF
  __int16 v14; // [rsp+86h] [rbp+45h] BYREF

  p_Data2 = &Guid->Data2;
  v12 = 0LL;
  v13 = 0;
  v4 = 0;
  v14 = 0;
  p_Data3 = &Guid->Data3;
  Length = GuidString->Length;
  Buffer = GuidString->Buffer;
  v11 = 0;
  if ( (unsigned int)ScanHexFormat(
                       Buffer,
                       Length >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       Guid,
                       p_Data2,
                       p_Data3,
                       &v11,
                       &v12,
                       (char *)&v12 + 2,
                       (char *)&v12 + 4,
                       (char *)&v12 + 6,
                       &v13,
                       (char *)&v13 + 2,
                       &v14) == -1 )
    return -1073741811;
  Data4 = Guid->Data4;
  v9 = (unsigned __int8 *)&v11;
  do
  {
    ++v4;
    *Data4 = *v9;
    v9 += 2;
    ++Data4;
  }
  while ( (unsigned __int64)v4 < 8 );
  return 0;
}
