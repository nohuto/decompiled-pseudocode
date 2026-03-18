/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1405132D0
 * Callers:
 *     CmpHashCompressedComponent @ 0x140087D2C (CmpHashCompressedComponent.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1400A0238 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x14014EE70 (towupper.c)
 *     CmpFindNameInListCellWithStatus @ 0x140402BC0 (CmpFindNameInListCellWithStatus.c)
 *     ObpLookupDirectoryEntryEx @ 0x14040CEF0 (ObpLookupDirectoryEntryEx.c)
 *     RtlpHashStringToAtom @ 0x140429580 (RtlpHashStringToAtom.c)
 *     CmpGetNameControlBlock @ 0x140436F80 (CmpGetNameControlBlock.c)
 *     CmpCheckRegistry2 @ 0x14043EF70 (CmpCheckRegistry2.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 *     CmpCheckLeaf @ 0x14043FDC0 (CmpCheckLeaf.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpComputeComponentHashes @ 0x1404B10A0 (CmpComputeComponentHashes.c)
 *     CmpHashUnicodeComponent @ 0x1404B1340 (CmpHashUnicodeComponent.c)
 *     ObpCreateSymbolicLinkName @ 0x1404B8FE8 (ObpCreateSymbolicLinkName.c)
 *     CmpCompareUnicodeString @ 0x1404D2580 (CmpCompareUnicodeString.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1405120D0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpCompareInIndex @ 0x1405126A0 (CmpCompareInIndex.c)
 *     CmpCompareCompressedName @ 0x140512960 (CmpCompareCompressedName.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140512A60 (CmpFindSubKeyInLeafWithStatus.c)
 *     PfpRpFileKeyUpdate @ 0x140512DD0 (PfpRpFileKeyUpdate.c)
 *     AslStringPatternMatchW @ 0x140578D34 (AslStringPatternMatchW.c)
 *     CmpCompareTwoCompressedNames @ 0x1406069B0 (CmpCompareTwoCompressedNames.c)
 *     VrpAllocateDiffHiveEntry @ 0x140616E48 (VrpAllocateDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x140617140 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     ObpUseSystemDeviceMap @ 0x14066551C (ObpUseSystemDeviceMap.c)
 *     AslStringUpper @ 0x1406C55C4 (AslStringUpper.c)
 *     AslEnvVarQuery @ 0x1406C6894 (AslEnvVarQuery.c)
 *     VfUtilPrintCheckinString @ 0x140702EC0 (VfUtilPrintCheckinString.c)
 * Callees:
 *     <none>
 */

WCHAR __stdcall RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x61u )
    return SourceCharacter;
  if ( SourceCharacter > 0x7Au )
    return SourceCharacter
         + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (SourceCharacter & 0xF)
                                                                   + 2
                                                                   * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((SourceCharacter >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)SourceCharacter >> 8)]]];
  return SourceCharacter - 32;
}
