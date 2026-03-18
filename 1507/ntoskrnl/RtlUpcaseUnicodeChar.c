/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1404CC660
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14011CC68 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x140173AC4 (towupper.c)
 *     RtlpHashStringToAtom @ 0x140423FA0 (RtlpHashStringToAtom.c)
 *     CmpFindNameInListWithStatus @ 0x140429D80 (CmpFindNameInListWithStatus.c)
 *     CmpComputeHashKeyForCompressedName @ 0x14042A7E4 (CmpComputeHashKeyForCompressedName.c)
 *     CmpParseCacheComputeRegHashKey @ 0x14044C048 (CmpParseCacheComputeRegHashKey.c)
 *     CmpParseCacheCompareUnicodeStrings @ 0x14044C208 (CmpParseCacheCompareUnicodeStrings.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpBuildHashStackAndLookupCache @ 0x14049A140 (CmpBuildHashStackAndLookupCache.c)
 *     CmpCheckLexicographicalOrder @ 0x1404AE400 (CmpCheckLexicographicalOrder.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404CA940 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpCompareInIndex @ 0x1404CAF30 (CmpCompareInIndex.c)
 *     CmpCompareCompressedName @ 0x1404CB210 (CmpCompareCompressedName.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     CmpGetNameControlBlock @ 0x1404CBDC0 (CmpGetNameControlBlock.c)
 *     PfpRpFileKeyUpdate @ 0x1404CC0A0 (PfpRpFileKeyUpdate.c)
 *     CmpCheckLeaf @ 0x1404CD0D0 (CmpCheckLeaf.c)
 *     CmpComputeHashKey @ 0x140533C5C (CmpComputeHashKey.c)
 *     CmpCompareUnicodeString @ 0x140547818 (CmpCompareUnicodeString.c)
 *     ObpCreateSymbolicLinkName @ 0x140551904 (ObpCreateSymbolicLinkName.c)
 *     AslStringPatternMatchW @ 0x1405A9E4C (AslStringPatternMatchW.c)
 *     AslEnvVarQuery @ 0x1405AB380 (AslEnvVarQuery.c)
 *     CmpComputeKcbConvKey @ 0x140656A24 (CmpComputeKcbConvKey.c)
 *     CmpGetVirtualStoreRoot @ 0x140658CB4 (CmpGetVirtualStoreRoot.c)
 *     CmpCompareTwoCompressedNames @ 0x14065E874 (CmpCompareTwoCompressedNames.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406AB994 (ObpLookupDirectoryEntryEx.c)
 *     ObpUseSystemDeviceMap @ 0x1406ABC54 (ObpUseSystemDeviceMap.c)
 *     AslStringUpper @ 0x14070532C (AslStringUpper.c)
 *     VfUtilPrintCheckinString @ 0x1407379BC (VfUtilPrintCheckinString.c)
 *     VerifierRtlUpcaseUnicodeChar @ 0x140752E88 (VerifierRtlUpcaseUnicodeChar.c)
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
