/*
 * XREFs of AslFree @ 0x14048538C
 * Callers:
 *     AslStringUpcaseToMultiByteN @ 0x1404851EC (AslStringUpcaseToMultiByteN.c)
 *     SdbpReleaseSearchDBContext @ 0x1404852B4 (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingDelete @ 0x140485350 (AslFileMappingDelete.c)
 *     SdbpCreateSearchDBContext @ 0x1404853AC (SdbpCreateSearchDBContext.c)
 *     SdbInitDatabaseInMemory @ 0x1404951FC (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x140495374 (SdbpOpenDatabaseInMemory.c)
 *     SdbReleaseDatabase @ 0x140499BF8 (SdbReleaseDatabase.c)
 *     SdbCloseDatabaseRead @ 0x140499CD8 (SdbCloseDatabaseRead.c)
 *     AslRegistryGetKey @ 0x140573500 (AslRegistryGetKey.c)
 *     SdbOpenDatabaseEx @ 0x1406C1624 (SdbOpenDatabaseEx.c)
 *     SdbQueryDataExTagID @ 0x1406C19DC (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingFiles @ 0x1406C21AC (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1406C256C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingText @ 0x1406C29D0 (SdbpCheckMatchingText.c)
 *     SdbpCheckMatchingTextEntry @ 0x1406C2AE8 (SdbpCheckMatchingTextEntry.c)
 *     SdbpFreePackageAttributes @ 0x1406C3208 (SdbpFreePackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x1406C32EC (SdbpGetMatchingTextAttributes.c)
 *     SdbpResolveMatchingFile @ 0x1406C3A6C (SdbpResolveMatchingFile.c)
 *     SdbGetAppPatchDirEx @ 0x1406C440C (SdbGetAppPatchDirEx.c)
 *     SdbResolveDatabase @ 0x1406C44AC (SdbResolveDatabase.c)
 *     SdbpCheckAllAttributes @ 0x1406C4A30 (SdbpCheckAllAttributes.c)
 *     AslGuidToString_UStr @ 0x1406C50FC (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x1406C523C (AslStringAnsiToUnicode.c)
 *     AslStringDuplicate @ 0x1406C5378 (AslStringDuplicate.c)
 *     AslHashFree @ 0x1406C5E28 (AslHashFree.c)
 *     AslPathToNetworkPathNt @ 0x1406C60B4 (AslPathToNetworkPathNt.c)
 *     AslEnvExpandStrings2 @ 0x1406C6530 (AslEnvExpandStrings2.c)
 *     AslpFileGetVersionBlock @ 0x1406C80D4 (AslpFileGetVersionBlock.c)
 *     AslpFileVerQueryBlock @ 0x1406C90B4 (AslpFileVerQueryBlock.c)
 *     AslpFileLargeMapDelete @ 0x1406C9BD4 (AslpFileLargeMapDelete.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall AslFree(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0x74705041u);
}
