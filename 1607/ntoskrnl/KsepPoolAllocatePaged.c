/*
 * XREFs of KsepPoolAllocatePaged @ 0x14010B37C
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1401DCA94 (KsepEvntLogShimsApplied.c)
 *     KseAddHardwareId @ 0x14050D830 (KseAddHardwareId.c)
 *     KsepGetShimsForDriver @ 0x1405139C0 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x140513AA4 (KsepDbGetDriverShims.c)
 *     KsepStringDuplicate @ 0x140514AB8 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x140514B64 (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140514ED8 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x140514FB0 (KsepStringDuplicateUnicode.c)
 *     KsepDbCacheReadDevice @ 0x14053551C (KsepDbCacheReadDevice.c)
 *     KseRegisterShimEx @ 0x14057097C (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x140570CC4 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x140571C68 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x140579410 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x14057E6F4 (KsepCacheDeviceInsertData.c)
 *     KsepDbGetShimInfo @ 0x1406527FC (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140652A78 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140653CC8 (KsepStringSplitMultiString.c)
 *     KsepRegistryEnumValue @ 0x1406541D0 (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1406542C4 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x140654384 (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x1407BC020 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
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
    _InterlockedIncrement(&dword_1403073E0);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_1403073F0);
  }
  return v3;
}
