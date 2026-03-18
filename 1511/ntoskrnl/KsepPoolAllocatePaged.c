/*
 * XREFs of KsepPoolAllocatePaged @ 0x1400028EC
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1401CCFE4 (KsepEvntLogShimsApplied.c)
 *     KsepGetShimsForDriver @ 0x1403B6FE4 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x1403B70C8 (KsepDbGetDriverShims.c)
 *     KsepStringConcatenate @ 0x1403B8750 (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1403B8AC4 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x1403B8B9C (KsepStringDuplicateUnicode.c)
 *     KseAddHardwareId @ 0x1404F0BC8 (KseAddHardwareId.c)
 *     KsepStringDuplicate @ 0x1404F1B98 (KsepStringDuplicate.c)
 *     KsepDbCacheReadDevice @ 0x1404FA314 (KsepDbCacheReadDevice.c)
 *     KsepCacheInitialize @ 0x140524A54 (KsepCacheInitialize.c)
 *     KseRegisterShimEx @ 0x140524BB0 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x140524EF8 (KsepGetLoadedModulesList.c)
 *     KsepRegistryQuerySZ @ 0x140544E20 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x14054F040 (KsepCacheDeviceInsertData.c)
 *     KsepDbGetShimInfo @ 0x14061D424 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14061D71C (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x14061E96C (KsepStringSplitMultiString.c)
 *     KsepRegistryEnumValue @ 0x14061EE74 (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x14061EF68 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x14061F028 (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x140755DF0 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocatePaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x6145534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_1402E22E0);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_1402E22F0);
  }
  return v3;
}
