/*
 * XREFs of AslFree @ 0x140514714
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x140495C8C (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x140495E04 (SdbpOpenDatabaseInMemory.c)
 *     SdbReleaseDatabase @ 0x1404CEA90 (SdbReleaseDatabase.c)
 *     SdbCloseDatabaseRead @ 0x1404CEB70 (SdbCloseDatabaseRead.c)
 *     AslStringUpcaseToMultiByteN @ 0x140514574 (AslStringUpcaseToMultiByteN.c)
 *     SdbpReleaseSearchDBContext @ 0x14051463C (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingDelete @ 0x1405146D8 (AslFileMappingDelete.c)
 *     SdbpCreateSearchDBContext @ 0x140514734 (SdbpCreateSearchDBContext.c)
 *     AslRegistryGetKey @ 0x140573A40 (AslRegistryGetKey.c)
 *     SdbOpenDatabaseEx @ 0x1406C175C (SdbOpenDatabaseEx.c)
 *     SdbQueryDataExTagID @ 0x1406C1B14 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingFiles @ 0x1406C22E4 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1406C26A4 (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingText @ 0x1406C2B08 (SdbpCheckMatchingText.c)
 *     SdbpCheckMatchingTextEntry @ 0x1406C2C20 (SdbpCheckMatchingTextEntry.c)
 *     SdbpFreePackageAttributes @ 0x1406C3340 (SdbpFreePackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x1406C3424 (SdbpGetMatchingTextAttributes.c)
 *     SdbpResolveMatchingFile @ 0x1406C3BA4 (SdbpResolveMatchingFile.c)
 *     SdbGetAppPatchDirEx @ 0x1406C4544 (SdbGetAppPatchDirEx.c)
 *     SdbResolveDatabase @ 0x1406C45E4 (SdbResolveDatabase.c)
 *     SdbpCheckAllAttributes @ 0x1406C4B68 (SdbpCheckAllAttributes.c)
 *     AslGuidToString_UStr @ 0x1406C5234 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x1406C5374 (AslStringAnsiToUnicode.c)
 *     AslStringDuplicate @ 0x1406C54B0 (AslStringDuplicate.c)
 *     AslHashFree @ 0x1406C5F60 (AslHashFree.c)
 *     AslPathToNetworkPathNt @ 0x1406C61EC (AslPathToNetworkPathNt.c)
 *     AslEnvExpandStrings2 @ 0x1406C6668 (AslEnvExpandStrings2.c)
 *     AslpFileGetVersionBlock @ 0x1406C820C (AslpFileGetVersionBlock.c)
 *     AslpFileVerQueryBlock @ 0x1406C91EC (AslpFileVerQueryBlock.c)
 *     AslpFileLargeMapDelete @ 0x1406C9D0C (AslpFileLargeMapDelete.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall AslFree(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0x74705041u);
}
