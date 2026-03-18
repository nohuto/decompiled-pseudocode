/*
 * XREFs of AslFree @ 0x1405783C4
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1405743D0 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x140574548 (SdbpOpenDatabaseInMemory.c)
 *     AslStringUpcaseToMultiByteN @ 0x1405782C0 (AslStringUpcaseToMultiByteN.c)
 *     AslFileMappingDelete @ 0x140578388 (AslFileMappingDelete.c)
 *     SdbCloseDatabaseRead @ 0x140578BAC (SdbCloseDatabaseRead.c)
 *     SdbReleaseDatabase @ 0x140578BDC (SdbReleaseDatabase.c)
 *     SdbpResolveMatchingFile @ 0x1405AA010 (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x1405AA20C (AslEnvExpandStrings2.c)
 *     SdbpReleaseSearchDBContext @ 0x1405AAA20 (SdbpReleaseSearchDBContext.c)
 *     SdbpCreateSearchDBContext @ 0x1405AAEC8 (SdbpCreateSearchDBContext.c)
 *     SdbpCheckMatchingFiles @ 0x1405AB79C (SdbpCheckMatchingFiles.c)
 *     AslPathToNetworkPathNt @ 0x1405ABCE8 (AslPathToNetworkPathNt.c)
 *     AslRegistryGetKey @ 0x1405C518C (AslRegistryGetKey.c)
 *     SdbOpenDatabaseEx @ 0x140701D44 (SdbOpenDatabaseEx.c)
 *     SdbQueryDataExTagID @ 0x140701FC4 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140702898 (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingText @ 0x140702CE4 (SdbpCheckMatchingText.c)
 *     SdbpCheckMatchingTextEntry @ 0x140702DFC (SdbpCheckMatchingTextEntry.c)
 *     SdbpFreePackageAttributes @ 0x14070350C (SdbpFreePackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407035E8 (SdbpGetMatchingTextAttributes.c)
 *     SdbGetAppPatchDirEx @ 0x1407042C4 (SdbGetAppPatchDirEx.c)
 *     SdbResolveDatabase @ 0x140704364 (SdbResolveDatabase.c)
 *     SdbpCheckAllAttributes @ 0x140704904 (SdbpCheckAllAttributes.c)
 *     AslGuidToString_UStr @ 0x140704E64 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140704FA4 (AslStringAnsiToUnicode.c)
 *     AslStringDuplicate @ 0x1407050E0 (AslStringDuplicate.c)
 *     AslHashFree @ 0x140705AF0 (AslHashFree.c)
 *     AslpFileGetVersionBlock @ 0x140707230 (AslpFileGetVersionBlock.c)
 *     AslpFileVerQueryValue @ 0x140708178 (AslpFileVerQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall AslFree(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0x74705041u);
}
