/*
 * XREFs of KsepPoolFreePaged @ 0x140153D50
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14020C348 (KsepEvntLogShimsApplied.c)
 *     KsepCacheHwIdFree @ 0x14020C600 (KsepCacheHwIdFree.c)
 *     KseDriverUnloadImage @ 0x1404531F0 (KseDriverUnloadImage.c)
 *     KseAddHardwareId @ 0x14054B3B8 (KseAddHardwareId.c)
 *     KsepGetShimsForDriver @ 0x140576F2C (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x140577014 (KsepDbGetDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140578820 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x1405788C8 (KsepStringFree.c)
 *     KsepCacheDeviceFree @ 0x140578FDC (KsepCacheDeviceFree.c)
 *     KseShimDatabaseBootRelease @ 0x1405B2648 (KseShimDatabaseBootRelease.c)
 *     KseRegisterShimEx @ 0x1405B538C (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1405B56F4 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x1405B59E0 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1405BB9C8 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x1405C6DC8 (KsepCacheDeviceInsertData.c)
 *     KsepDbGetShimInfo @ 0x14069C004 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14069C2FC (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x14069C630 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14069CE00 (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x14069D6EC (KsepStringSplitMultiString.c)
 *     KsepCacheUninitialize @ 0x14069D968 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x14069DBF4 (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x14069DCE8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x14069DDA8 (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x1407E77F0 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_140332744);
  }
}
