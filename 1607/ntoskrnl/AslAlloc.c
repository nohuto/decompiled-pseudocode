/*
 * XREFs of AslAlloc @ 0x1405148D4
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x140495C8C (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x140495E04 (SdbpOpenDatabaseInMemory.c)
 *     AslStringUpcaseToMultiByteN @ 0x140514574 (AslStringUpcaseToMultiByteN.c)
 *     SdbpCreateSearchDBContext @ 0x140514734 (SdbpCreateSearchDBContext.c)
 *     AslFileMappingCreate @ 0x1405153C4 (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x140571838 (AslFileMappingCreateFromImageView.c)
 *     AslRegistryBuildMachinePath @ 0x140573B14 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140573BB4 (AslRegistryBuildUserPath.c)
 *     SdbOpenDatabaseEx @ 0x1406C175C (SdbOpenDatabaseEx.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1406C193C (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbQueryDataExTagID @ 0x1406C1B14 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1406C26A4 (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingTextEntry @ 0x1406C2C20 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x1406C3424 (SdbpGetMatchingTextAttributes.c)
 *     SdbpInitializeSearchDBContext @ 0x1406C395C (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x1406C3BA4 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHistory @ 0x1406C4148 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabase @ 0x1406C45E4 (SdbResolveDatabase.c)
 *     SdbpCheckAllAttributes @ 0x1406C4B68 (SdbpCheckAllAttributes.c)
 *     AslGuidToString_UStr @ 0x1406C5234 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x1406C5374 (AslStringAnsiToUnicode.c)
 *     AslStringDuplicate @ 0x1406C54B0 (AslStringDuplicate.c)
 *     AslPathToNetworkPathNt @ 0x1406C61EC (AslPathToNetworkPathNt.c)
 *     AslEnvExpandStrings2 @ 0x1406C6668 (AslEnvExpandStrings2.c)
 *     AslpFileGetVersionBlock @ 0x1406C820C (AslpFileGetVersionBlock.c)
 *     AslpFileLargeMapCreate @ 0x1406C9AA8 (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
