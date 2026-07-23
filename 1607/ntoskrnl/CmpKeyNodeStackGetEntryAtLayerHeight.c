/*
 * XREFs of CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14060BD98
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1401B30E8 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B3650 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1401B3B28 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1401B5A7C (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401B5B60 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401B6C10 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14060A114 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x14060A1DC (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14060A26C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14060A814 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x14060B964 (CmpCleanupKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14060C0B4 (CmpStartKeyNodeStackFromKcbStack.c)
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
