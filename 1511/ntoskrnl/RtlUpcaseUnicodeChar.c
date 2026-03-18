/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1403FB1D0
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1400066A8 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x140145A94 (towupper.c)
 *     CmpParseCacheComputeRegHashKey @ 0x1403BB524 (CmpParseCacheComputeRegHashKey.c)
 *     CmpParseCacheCompareUnicodeStrings @ 0x1403BB6BC (CmpParseCacheCompareUnicodeStrings.c)
 *     CmpCompareUnicodeString @ 0x1403BC8B8 (CmpCompareUnicodeString.c)
 *     CmpCompareInIndex @ 0x1403D9DB0 (CmpCompareInIndex.c)
 *     CmpComputeHashKey @ 0x1403DA088 (CmpComputeHashKey.c)
 *     CmpComputeHashKeyForCompressedName @ 0x1403E06DC (CmpComputeHashKeyForCompressedName.c)
 *     CmpFindNameInListWithStatus @ 0x1403F40F0 (CmpFindNameInListWithStatus.c)
 *     RtlpHashStringToAtom @ 0x1403F6D70 (RtlpHashStringToAtom.c)
 *     CmpCheckLeaf @ 0x1403F9670 (CmpCheckLeaf.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpGetNameControlBlock @ 0x1403FAA10 (CmpGetNameControlBlock.c)
 *     PfpRpFileKeyUpdate @ 0x1403FACF0 (PfpRpFileKeyUpdate.c)
 *     CmpCompareCompressedName @ 0x1403FBC30 (CmpCompareCompressedName.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1403FE290 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpCheckRegistry2 @ 0x140405850 (CmpCheckRegistry2.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmpBuildHashStackAndLookupCache @ 0x140408290 (CmpBuildHashStackAndLookupCache.c)
 *     ObpCreateSymbolicLinkName @ 0x1404BAF58 (ObpCreateSymbolicLinkName.c)
 *     AslStringPatternMatchW @ 0x140535084 (AslStringPatternMatchW.c)
 *     AslEnvVarQuery @ 0x140535D40 (AslEnvVarQuery.c)
 *     CmpComputeKcbConvKey @ 0x1405E0E78 (CmpComputeKcbConvKey.c)
 *     CmpCompareTwoCompressedNames @ 0x1405E7418 (CmpCompareTwoCompressedNames.c)
 *     ObpLookupDirectoryEntryEx @ 0x14062DD54 (ObpLookupDirectoryEntryEx.c)
 *     AslStringUpper @ 0x1406804F8 (AslStringUpper.c)
 *     VfUtilPrintCheckinString @ 0x1406B76C8 (VfUtilPrintCheckinString.c)
 *     VerifierRtlUpcaseUnicodeChar @ 0x1406CF3BC (VerifierRtlUpcaseUnicodeChar.c)
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
