/*
 * XREFs of CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14060BCE4
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1401B3204 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B376C (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1401B3C44 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1401B5B98 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401B5C7C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401B6D2C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14060A060 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x14060A128 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14060A1B8 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14060A760 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x14060B8B0 (CmpCleanupKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14060C000 (CmpStartKeyNodeStackFromKcbStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpKeyNodeStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 < 2 )
    return a1 + 32LL * a2 + 8;
  else
    return *(_QWORD *)(a1 + 72) + 32LL * (__int16)(a2 - 2);
}
