/*
 * XREFs of RtlGUIDFromString @ 0x1404DE2FC
 * Callers:
 *     RtlQueryPackageClaims @ 0x14000C86C (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x1401CEBD4 (PiDevCfgParseInterfaceKeyName.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1401CEC6C (PiDevCfgParsePropertyKeyName.c)
 *     PipProcessStartPhase3 @ 0x140488964 (PipProcessStartPhase3.c)
 *     EtwStartAutoLogger @ 0x1404C3638 (EtwStartAutoLogger.c)
 *     PipGenerateContainerID @ 0x1404CD548 (PipGenerateContainerID.c)
 *     _PnpIsValidGuidString @ 0x1404DAE44 (_PnpIsValidGuidString.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1404DB9D4 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1404DE698 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1404DF0E0 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x1404DF4B0 (_CmValidateDeviceInterfaceName.c)
 *     PiPnpRtlCmActionCallback @ 0x1404DFF48 (PiPnpRtlCmActionCallback.c)
 *     PiDmCacheDataDecode @ 0x1404E2B40 (PiDmCacheDataDecode.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1404E34C4 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1404E8C88 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14050B84C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     IoVolumeDeviceToGuid @ 0x14052D50C (IoVolumeDeviceToGuid.c)
 *     BiGetObjectIdentifier @ 0x140532DC8 (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x14053EA70 (BiConvertRegistryDataToElement.c)
 *     EtwpEnableAutoLoggerProviders @ 0x140563D20 (EtwpEnableAutoLoggerProviders.c)
 *     WdipSemLoadNextEndEvent @ 0x140565058 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14056534C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x1405655C0 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1405658A8 (WdipSemLoadNextScenario.c)
 *     PiDcInitUpdateProperties @ 0x140577CF8 (PiDcInitUpdateProperties.c)
 *     IoVolumeDeviceNameToGuid @ 0x140625210 (IoVolumeDeviceNameToGuid.c)
 *     PnpIsValidGuidString @ 0x14062DAE8 (PnpIsValidGuidString.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1406360BC (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406383DC (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14063BAA8 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E8AC (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D548 (PiCreateDriverSwDeviceCallback.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14069BF80 (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x1406B14D4 (ExpParseSignatureName.c)
 *     SddlpUuidFromString @ 0x1406CC59C (SddlpUuidFromString.c)
 *     BcdEnumerateObjects @ 0x1406D21C0 (BcdEnumerateObjects.c)
 *     BiBindEfiEntryToBcdObject @ 0x1406D3A0C (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x1406D3B60 (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406D52C4 (BiGetObjectReferenceFromEfiEntry.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC340 (_PnpGetGenericStorePropertyKeys.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 *     EmpParseEntryTypes @ 0x1407A771C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1407A8524 (EmpInfParseGetGuidFromName.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x1404DE3F0 (ScanHexFormat.c)
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
