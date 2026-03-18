/*
 * XREFs of AslAlloc @ 0x1405783E4
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1405743D0 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x140574548 (SdbpOpenDatabaseInMemory.c)
 *     AslStringUpcaseToMultiByteN @ 0x1405782C0 (AslStringUpcaseToMultiByteN.c)
 *     SdbpResolveMatchingFile @ 0x1405AA010 (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x1405AA20C (AslEnvExpandStrings2.c)
 *     AslFileMappingCreate @ 0x1405AAB1C (AslFileMappingCreate.c)
 *     SdbpCreateSearchDBContext @ 0x1405AAEC8 (SdbpCreateSearchDBContext.c)
 *     SdbpInitializeSearchDBContext @ 0x1405AB940 (SdbpInitializeSearchDBContext.c)
 *     AslPathToNetworkPathNt @ 0x1405ABCE8 (AslPathToNetworkPathNt.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1405ABE7C (SdbpCreateSearchPathPartsFromPath.c)
 *     AslRegistryBuildMachinePath @ 0x1405C5260 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1405C5300 (AslRegistryBuildUserPath.c)
 *     SdbOpenDatabaseEx @ 0x140701D44 (SdbOpenDatabaseEx.c)
 *     SdbQueryDataExTagID @ 0x140701FC4 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140702898 (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingTextEntry @ 0x140702DFC (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407035E8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetProcessHistory @ 0x140703CFC (SdbpGetProcessHistory.c)
 *     SdbResolveDatabase @ 0x140704364 (SdbResolveDatabase.c)
 *     SdbpCheckAllAttributes @ 0x140704904 (SdbpCheckAllAttributes.c)
 *     AslGuidToString_UStr @ 0x140704E64 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140704FA4 (AslStringAnsiToUnicode.c)
 *     AslStringDuplicate @ 0x1407050E0 (AslStringDuplicate.c)
 *     AslpFileGetVersionBlock @ 0x140707230 (AslpFileGetVersionBlock.c)
 *     AslpFileVerQueryValue @ 0x140708178 (AslpFileVerQueryValue.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
