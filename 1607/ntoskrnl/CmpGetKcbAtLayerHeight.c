/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x14043EF90
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B030 (CmpGetSymbolicLinkTarget.c)
 *     CmpConstructNameFromKeyNodes @ 0x14002D310 (CmpConstructNameFromKeyNodes.c)
 *     CmpWalkOneLevel @ 0x14002D530 (CmpWalkOneLevel.c)
 *     CmpPartialPromoteSubkeys @ 0x1401B30E8 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1401B3308 (CmpPromoteKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1401B3550 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1401B3B28 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmQueryLayeredKey @ 0x1401B3CC8 (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4118 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpCreateTombstone @ 0x1401B6144 (CmpCreateTombstone.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1403FADCC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockKcbStackExclusive @ 0x1403FAE14 (CmpLockKcbStackExclusive.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpIsKeyStackSymlink @ 0x140402638 (CmpIsKeyStackSymlink.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14043F010 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCDA4 (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405FEDD8 (CmpEnumerateLayeredKey.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14060C0B4 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmRmIsKcbStackVisible @ 0x14060DD80 (CmRmIsKcbStackVisible.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetKcbAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (a2 - 2));
  else
    return *(_QWORD *)(a1 + 8LL * a2 + 8);
}
