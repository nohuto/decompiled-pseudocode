/*
 * XREFs of KsepPoolFreePaged @ 0x14010B35C
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1401DCA94 (KsepEvntLogShimsApplied.c)
 *     KsepCacheHwIdFree @ 0x1401DCD4C (KsepCacheHwIdFree.c)
 *     KseAddHardwareId @ 0x14050D830 (KseAddHardwareId.c)
 *     KsepDbFreeDriverShims @ 0x140513C9C (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140514ED8 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x140514F80 (KsepStringFree.c)
 *     KsepCacheDeviceFree @ 0x140535688 (KsepCacheDeviceFree.c)
 *     KseDriverUnloadImage @ 0x140546D94 (KseDriverUnloadImage.c)
 *     KseShimDatabaseBootRelease @ 0x14056EC10 (KseShimDatabaseBootRelease.c)
 *     KseRegisterShimEx @ 0x14057097C (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x140570CC4 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x140571C68 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x140579410 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x14057E6F4 (KsepCacheDeviceInsertData.c)
 *     KsepDbGetShimInfo @ 0x1406527FC (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140652A78 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x140652DAC (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14065354C (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x140653CC8 (KsepStringSplitMultiString.c)
 *     KsepCacheUninitialize @ 0x140653F44 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x1406541D0 (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1406542C4 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x140654384 (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x1407BC020 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_1403073E4);
  }
}
