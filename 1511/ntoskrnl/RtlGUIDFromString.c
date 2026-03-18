/*
 * XREFs of RtlGUIDFromString @ 0x14043FEA8
 * Callers:
 *     RtlQueryPackageClaims @ 0x1400FB1A4 (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x14012CA38 (PiDevCfgParseInterfaceKeyName.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1401C04F4 (PiDevCfgParsePropertyKeyName.c)
 *     _CmValidateDeviceInterfaceName @ 0x14043AD30 (_CmValidateDeviceInterfaceName.c)
 *     PiPnpRtlCmActionCallback @ 0x14043B138 (PiPnpRtlCmActionCallback.c)
 *     PiDmCacheDataDecode @ 0x14043E09C (PiDmCacheDataDecode.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14043E564 (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14043E634 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140440104 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x140441CC0 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14045AE44 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x140496C38 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     _PnpIsValidGuidString @ 0x1404DE530 (_PnpIsValidGuidString.c)
 *     IoVolumeDeviceToGuid @ 0x1404E7D08 (IoVolumeDeviceToGuid.c)
 *     PipProcessStartPhase3 @ 0x1404EC528 (PipProcessStartPhase3.c)
 *     PipGenerateContainerID @ 0x1404EC9C4 (PipGenerateContainerID.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     BiGetObjectIdentifier @ 0x1404F4F98 (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x1404FDAE8 (BiConvertRegistryDataToElement.c)
 *     EtwpStartAutoLogger @ 0x14050889C (EtwpStartAutoLogger.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14051496C (_PnpGetGenericStorePropertyKeys.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140515AA0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PnpIsValidGuidString @ 0x14051A7F0 (PnpIsValidGuidString.c)
 *     IoVolumeDeviceNameToGuid @ 0x14051AAA8 (IoVolumeDeviceNameToGuid.c)
 *     PiDcInitUpdateProperties @ 0x1405247C4 (PiDcInitUpdateProperties.c)
 *     EtwpEnableAutoLoggerProviders @ 0x140527308 (EtwpEnableAutoLoggerProviders.c)
 *     WdipSemLoadNextEndEvent @ 0x140532BD0 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140532EC4 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140533138 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140533420 (WdipSemLoadNextScenario.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x140607F90 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140608318 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140609340 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406182B0 (PiCreateDriverSwDeviceCallback.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14065D05C (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x14066E684 (ExpParseSignatureName.c)
 *     SddlpUuidFromString @ 0x140687BE4 (SddlpUuidFromString.c)
 *     BcdEnumerateObjects @ 0x14068D82C (BcdEnumerateObjects.c)
 *     BiBindEfiEntryToBcdObject @ 0x14068F154 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x14068F2A4 (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406909CC (BiGetObjectReferenceFromEfiEntry.c)
 *     VerifierRtlGUIDFromString @ 0x1406CF238 (VerifierRtlGUIDFromString.c)
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 *     EmpParseEntryTypes @ 0x14075F2D4 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140760228 (EmpInfParseGetGuidFromName.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     sub_14043FFA0 @ 0x14043FFA0 (sub_14043FFA0.c)
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
  if ( (unsigned int)sub_14043FFA0(
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
