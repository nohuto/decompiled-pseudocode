/*
 * XREFs of AslAlloc @ 0x1403B8554
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1403B5E60 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x1403B5FD8 (SdbpOpenDatabaseInMemory.c)
 *     AslFileMappingCreate @ 0x1403B6E64 (AslFileMappingCreate.c)
 *     AslStringUpcaseToMultiByteN @ 0x1403B7C1C (AslStringUpcaseToMultiByteN.c)
 *     SdbpCreateSearchDBContext @ 0x1403B83B4 (SdbpCreateSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140535724 (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x140535920 (AslEnvExpandStrings2.c)
 *     SdbpInitializeSearchDBContext @ 0x140535E24 (SdbpInitializeSearchDBContext.c)
 *     AslPathToNetworkPathNt @ 0x1405361CC (AslPathToNetworkPathNt.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140536360 (SdbpCreateSearchPathPartsFromPath.c)
 *     AslFileMappingCreateFromImageView @ 0x14053FBC4 (AslFileMappingCreateFromImageView.c)
 *     AslRegistryBuildMachinePath @ 0x14054DB20 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14054DBC0 (AslRegistryBuildUserPath.c)
 *     SdbOpenDatabaseEx @ 0x14067CED8 (SdbOpenDatabaseEx.c)
 *     SdbQueryDataExTagID @ 0x14067D158 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14067DA2C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingTextEntry @ 0x14067DFA8 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x14067E794 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetProcessHistory @ 0x14067EEA8 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabase @ 0x14067F510 (SdbResolveDatabase.c)
 *     SdbpCheckAllAttributes @ 0x14067FAB0 (SdbpCheckAllAttributes.c)
 *     AslGuidToString_UStr @ 0x140680030 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140680170 (AslStringAnsiToUnicode.c)
 *     AslStringDuplicate @ 0x1406802AC (AslStringDuplicate.c)
 *     AslpFileGetVersionBlock @ 0x140682514 (AslpFileGetVersionBlock.c)
 *     AslpFileVerQueryValue @ 0x1406834D4 (AslpFileVerQueryValue.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AslAlloc(__int64 a1, SIZE_T a2)
{
  PVOID PoolWithTag; // rax
  PVOID v4; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2, 0x74705041u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, a2);
  return v4;
}
