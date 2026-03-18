/*
 * XREFs of KsepPoolFreePaged @ 0x140084D54
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1401DCC68 (KsepEvntLogShimsApplied.c)
 *     KsepCacheHwIdFree @ 0x1401DCF20 (KsepCacheHwIdFree.c)
 *     KsepDbFreeDriverShims @ 0x140484914 (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140485B50 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x140485BF8 (KsepStringFree.c)
 *     KseAddHardwareId @ 0x1404E3884 (KseAddHardwareId.c)
 *     KsepCacheDeviceFree @ 0x140535148 (KsepCacheDeviceFree.c)
 *     KseDriverUnloadImage @ 0x140546854 (KseDriverUnloadImage.c)
 *     KseShimDatabaseBootRelease @ 0x14056E6D0 (KseShimDatabaseBootRelease.c)
 *     KseRegisterShimEx @ 0x14057043C (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x140570784 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x140571728 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x140578ED0 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x14057E248 (KsepCacheDeviceInsertData.c)
 *     KsepDbGetShimInfo @ 0x140652718 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140652994 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x140652CC8 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140653468 (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x140653BE4 (KsepStringSplitMultiString.c)
 *     KsepCacheUninitialize @ 0x140653E60 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x1406540EC (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1406541E0 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1406542A0 (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x1407BC020 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_1403073A4);
  }
}
