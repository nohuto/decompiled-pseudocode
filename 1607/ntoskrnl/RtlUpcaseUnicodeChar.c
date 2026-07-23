/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1404F66C0
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14009EB60 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     CmpHashCompressedComponent @ 0x14010BF1C (CmpHashCompressedComponent.c)
 *     towupper @ 0x14014F430 (towupper.c)
 *     CmpFindNameInListCellWithStatus @ 0x140401A80 (CmpFindNameInListCellWithStatus.c)
 *     ObpLookupDirectoryEntryEx @ 0x14040BDB0 (ObpLookupDirectoryEntryEx.c)
 *     RtlpHashStringToAtom @ 0x140428450 (RtlpHashStringToAtom.c)
 *     CmpGetNameControlBlock @ 0x140435E50 (CmpGetNameControlBlock.c)
 *     CmpCheckRegistry2 @ 0x14043DE40 (CmpCheckRegistry2.c)
 *     CmQueryValueKey @ 0x14043E2F0 (CmQueryValueKey.c)
 *     CmpCheckLeaf @ 0x14043EC90 (CmpCheckLeaf.c)
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpComputeComponentHashes @ 0x14049B480 (CmpComputeComponentHashes.c)
 *     CmpHashUnicodeComponent @ 0x14049B720 (CmpHashUnicodeComponent.c)
 *     ObpCreateSymbolicLinkName @ 0x1404A33C8 (ObpCreateSymbolicLinkName.c)
 *     CmpCompareUnicodeString @ 0x1404B6020 (CmpCompareUnicodeString.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404F54C0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpCompareInIndex @ 0x1404F5A90 (CmpCompareInIndex.c)
 *     CmpCompareCompressedName @ 0x1404F5D50 (CmpCompareCompressedName.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404F5E50 (CmpFindSubKeyInLeafWithStatus.c)
 *     PfpRpFileKeyUpdate @ 0x1404F61C0 (PfpRpFileKeyUpdate.c)
 *     AslStringPatternMatchW @ 0x140579274 (AslStringPatternMatchW.c)
 *     CmpCompareTwoCompressedNames @ 0x140606A64 (CmpCompareTwoCompressedNames.c)
 *     VrpAllocateDiffHiveEntry @ 0x140616EFC (VrpAllocateDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1406171F4 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     ObpUseSystemDeviceMap @ 0x140665600 (ObpUseSystemDeviceMap.c)
 *     AslStringUpper @ 0x1406C56FC (AslStringUpper.c)
 *     AslEnvVarQuery @ 0x1406C69CC (AslEnvVarQuery.c)
 *     VfUtilPrintCheckinString @ 0x140702EF0 (VfUtilPrintCheckinString.c)
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
