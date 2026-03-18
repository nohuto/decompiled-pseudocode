/*
 * XREFs of KsepPoolFreePaged @ 0x1400028CC
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1401CCFE4 (KsepEvntLogShimsApplied.c)
 *     KsepCacheHwIdFree @ 0x1401CD29C (KsepCacheHwIdFree.c)
 *     KsepGetShimsForDriver @ 0x1403B6FE4 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x1403B70C8 (KsepDbGetDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1403B8AC4 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x1403B8B6C (KsepStringFree.c)
 *     KseDriverUnloadImage @ 0x1404C57BC (KseDriverUnloadImage.c)
 *     KseAddHardwareId @ 0x1404F0BC8 (KseAddHardwareId.c)
 *     KsepCacheDeviceFree @ 0x1404FA2C0 (KsepCacheDeviceFree.c)
 *     KsepCacheInitialize @ 0x140524A54 (KsepCacheInitialize.c)
 *     KseRegisterShimEx @ 0x140524BB0 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x140524EF8 (KsepGetLoadedModulesList.c)
 *     KseShimDatabaseBootRelease @ 0x14053D4B4 (KseShimDatabaseBootRelease.c)
 *     KsepRegistryQuerySZ @ 0x140544E20 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x14054F040 (KsepCacheDeviceInsertData.c)
 *     KsepDbGetShimInfo @ 0x14061D424 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14061D71C (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x14061DA50 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14061E1F0 (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x14061E96C (KsepStringSplitMultiString.c)
 *     KsepCacheUninitialize @ 0x14061EBE8 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x14061EE74 (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x14061EF68 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x14061F028 (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x140755DF0 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_1402E22E4);
  }
}
