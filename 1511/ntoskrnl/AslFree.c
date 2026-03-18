/*
 * XREFs of AslFree @ 0x1403B7E1C
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1403B5E60 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x1403B5FD8 (SdbpOpenDatabaseInMemory.c)
 *     SdbReleaseDatabase @ 0x1403B607C (SdbReleaseDatabase.c)
 *     SdbCloseDatabaseRead @ 0x1403B615C (SdbCloseDatabaseRead.c)
 *     AslStringUpcaseToMultiByteN @ 0x1403B7C1C (AslStringUpcaseToMultiByteN.c)
 *     SdbpReleaseSearchDBContext @ 0x1403B7CE4 (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingDelete @ 0x1403B7DE0 (AslFileMappingDelete.c)
 *     SdbpCreateSearchDBContext @ 0x1403B83B4 (SdbpCreateSearchDBContext.c)
 *     SdbpCheckMatchingFiles @ 0x140535580 (SdbpCheckMatchingFiles.c)
 *     SdbpResolveMatchingFile @ 0x140535724 (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x140535920 (AslEnvExpandStrings2.c)
 *     AslPathToNetworkPathNt @ 0x1405361CC (AslPathToNetworkPathNt.c)
 *     AslRegistryGetKey @ 0x14054DA4C (AslRegistryGetKey.c)
 *     SdbOpenDatabaseEx @ 0x14067CED8 (SdbOpenDatabaseEx.c)
 *     SdbQueryDataExTagID @ 0x14067D158 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14067DA2C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingText @ 0x14067DE90 (SdbpCheckMatchingText.c)
 *     SdbpCheckMatchingTextEntry @ 0x14067DFA8 (SdbpCheckMatchingTextEntry.c)
 *     SdbpFreePackageAttributes @ 0x14067E6B8 (SdbpFreePackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x14067E794 (SdbpGetMatchingTextAttributes.c)
 *     SdbGetAppPatchDirEx @ 0x14067F470 (SdbGetAppPatchDirEx.c)
 *     SdbResolveDatabase @ 0x14067F510 (SdbResolveDatabase.c)
 *     SdbpCheckAllAttributes @ 0x14067FAB0 (SdbpCheckAllAttributes.c)
 *     AslGuidToString_UStr @ 0x140680030 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140680170 (AslStringAnsiToUnicode.c)
 *     AslStringDuplicate @ 0x1406802AC (AslStringDuplicate.c)
 *     AslHashFree @ 0x140680D34 (AslHashFree.c)
 *     AslpFileGetVersionBlock @ 0x140682514 (AslpFileGetVersionBlock.c)
 *     AslpFileVerQueryValue @ 0x1406834D4 (AslpFileVerQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall AslFree(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0x74705041u);
}
