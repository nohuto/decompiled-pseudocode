/*
 * XREFs of RtlGUIDFromString @ 0x14043D910
 * Callers:
 *     RtlQueryPackageClaims @ 0x14001ADB0 (RtlQueryPackageClaims.c)
 *     _CmValidateDeviceInterfaceName @ 0x140436820 (_CmValidateDeviceInterfaceName.c)
 *     PiDmCacheDataDecode @ 0x140439E44 (PiDmCacheDataDecode.c)
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14043D720 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14043E1DC (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x14043F2AC (_CmGetDeviceInterfaceClassGuid.c)
 *     _PnpIsValidGuidString @ 0x14043FF5C (_PnpIsValidGuidString.c)
 *     PipProcessStartPhase3 @ 0x14045ED7C (PipProcessStartPhase3.c)
 *     EtwpStartAutoLogger @ 0x1404A887C (EtwpStartAutoLogger.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404DC05C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1404DF26C (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140532058 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PipGenerateContainerID @ 0x140554BA8 (PipGenerateContainerID.c)
 *     IoVolumeDeviceToGuid @ 0x1405624CC (IoVolumeDeviceToGuid.c)
 *     BiGetObjectIdentifier @ 0x1405693A0 (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x140570730 (BiConvertRegistryDataToElement.c)
 *     PnpIsValidGuidString @ 0x14058E904 (PnpIsValidGuidString.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405941CC (EtwpEnableAutoLoggerProviders.c)
 *     WdipSemLoadNextEndEvent @ 0x1405AE0B4 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x1405AE3A8 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x1405AE61C (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1405AE904 (WdipSemLoadNextScenario.c)
 *     PiDcInitUpdateProperties @ 0x1405B9CB8 (PiDcInitUpdateProperties.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406835F4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x140683FDC (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14068606C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14068822C (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14068A004 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406968A0 (PiCreateDriverSwDeviceCallback.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1406DF904 (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x1406F203C (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x14070D344 (BcdEnumerateObjects.c)
 *     BiBindEfiEntryToBcdObject @ 0x14070EC6C (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x14070EDBC (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1407104E4 (BiGetObjectReferenceFromEfiEntry.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140716CBC (_PnpGetGenericStorePropertyKeys.c)
 *     VerifierRtlGUIDFromString @ 0x140752D04 (VerifierRtlGUIDFromString.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 *     EmpParseEntryTypes @ 0x1407CDB50 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1407CEAA0 (EmpInfParseGetGuidFromName.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     sub_14043DA10 @ 0x14043DA10 (sub_14043DA10.c)
 */

NTSTATUS __stdcall RtlGUIDFromString(PCUNICODE_STRING GuidString, GUID *Guid)
{
  int v3; // ebx
  unsigned __int8 *Data4; // rdx
  unsigned __int8 *v5; // rax
  unsigned __int8 v6; // cl
  __int16 v8; // [rsp+70h] [rbp-28h] BYREF
  __int64 v9; // [rsp+72h] [rbp-26h] BYREF
  int v10; // [rsp+7Ah] [rbp-1Eh] BYREF
  __int16 v11; // [rsp+7Eh] [rbp-1Ah] BYREF

  v3 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  if ( (unsigned int)sub_14043DA10(
                       GuidString->Buffer,
                       GuidString->Length >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       Guid,
                       &Guid->Data2,
                       &Guid->Data3,
                       &v8,
                       &v9,
                       (char *)&v9 + 2,
                       (char *)&v9 + 4,
                       (char *)&v9 + 6,
                       &v10,
                       (char *)&v10 + 2,
                       &v11) == -1 )
    return -1073741811;
  Data4 = Guid->Data4;
  v5 = (unsigned __int8 *)&v8;
  do
  {
    v6 = *v5;
    v5 += 2;
    ++v3;
    *Data4++ = v6;
  }
  while ( (unsigned __int64)v3 < 8 );
  return 0;
}
