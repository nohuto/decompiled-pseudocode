/*
 * XREFs of KsepPoolAllocatePaged @ 0x14012980C
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14020C348 (KsepEvntLogShimsApplied.c)
 *     KseAddHardwareId @ 0x14054B3B8 (KseAddHardwareId.c)
 *     KsepStringDuplicate @ 0x14054B5E0 (KsepStringDuplicate.c)
 *     KsepGetShimsForDriver @ 0x140576F2C (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x140577014 (KsepDbGetDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140578820 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x1405788F8 (KsepStringDuplicateUnicode.c)
 *     KsepStringConcatenate @ 0x140578998 (KsepStringConcatenate.c)
 *     KsepDbCacheReadDevice @ 0x140578E70 (KsepDbCacheReadDevice.c)
 *     KseRegisterShimEx @ 0x1405B538C (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1405B56F4 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x1405B59E0 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1405BB9C8 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x1405C6DC8 (KsepCacheDeviceInsertData.c)
 *     KsepDbGetShimInfo @ 0x14069C004 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14069C2FC (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x14069D6EC (KsepStringSplitMultiString.c)
 *     KsepRegistryEnumValue @ 0x14069DBF4 (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x14069DCE8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x14069DDA8 (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x1407E77F0 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocatePaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x6145534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_140332740);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140332750);
  }
  return v3;
}
