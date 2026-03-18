/*
 * XREFs of KsepPoolAllocatePaged @ 0x140084D74
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1401DCC68 (KsepEvntLogShimsApplied.c)
 *     KsepGetShimsForDriver @ 0x140484638 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x14048471C (KsepDbGetDriverShims.c)
 *     KsepStringDuplicate @ 0x140485730 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x1404857DC (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140485B50 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x140485C28 (KsepStringDuplicateUnicode.c)
 *     KseAddHardwareId @ 0x1404E3884 (KseAddHardwareId.c)
 *     KsepDbCacheReadDevice @ 0x140534FDC (KsepDbCacheReadDevice.c)
 *     KseRegisterShimEx @ 0x14057043C (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x140570784 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x140571728 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x140578ED0 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x14057E248 (KsepCacheDeviceInsertData.c)
 *     KsepDbGetShimInfo @ 0x140652718 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140652994 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140653BE4 (KsepStringSplitMultiString.c)
 *     KsepRegistryEnumValue @ 0x1406540EC (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1406541E0 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1406542A0 (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x1407BC020 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocatePaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x6145534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_1403073A0);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_1403073B0);
  }
  return v3;
}
