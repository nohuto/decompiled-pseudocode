/*
 * XREFs of AslAlloc @ 0x14048554C
 * Callers:
 *     AslStringUpcaseToMultiByteN @ 0x1404851EC (AslStringUpcaseToMultiByteN.c)
 *     SdbpCreateSearchDBContext @ 0x1404853AC (SdbpCreateSearchDBContext.c)
 *     SdbInitDatabaseInMemory @ 0x1404951FC (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x140495374 (SdbpOpenDatabaseInMemory.c)
 *     AslFileMappingCreate @ 0x14049D54C (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x1405712F8 (AslFileMappingCreateFromImageView.c)
 *     AslRegistryBuildMachinePath @ 0x1405735D4 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140573674 (AslRegistryBuildUserPath.c)
 *     SdbOpenDatabaseEx @ 0x1406C1624 (SdbOpenDatabaseEx.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1406C1804 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbQueryDataExTagID @ 0x1406C19DC (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1406C256C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingTextEntry @ 0x1406C2AE8 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x1406C32EC (SdbpGetMatchingTextAttributes.c)
 *     SdbpInitializeSearchDBContext @ 0x1406C3824 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x1406C3A6C (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHistory @ 0x1406C4010 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabase @ 0x1406C44AC (SdbResolveDatabase.c)
 *     SdbpCheckAllAttributes @ 0x1406C4A30 (SdbpCheckAllAttributes.c)
 *     AslGuidToString_UStr @ 0x1406C50FC (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x1406C523C (AslStringAnsiToUnicode.c)
 *     AslStringDuplicate @ 0x1406C5378 (AslStringDuplicate.c)
 *     AslPathToNetworkPathNt @ 0x1406C60B4 (AslPathToNetworkPathNt.c)
 *     AslEnvExpandStrings2 @ 0x1406C6530 (AslEnvExpandStrings2.c)
 *     AslpFileGetVersionBlock @ 0x1406C80D4 (AslpFileGetVersionBlock.c)
 *     AslpFileLargeMapCreate @ 0x1406C9970 (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
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
