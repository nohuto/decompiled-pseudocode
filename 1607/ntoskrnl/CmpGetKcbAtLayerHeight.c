/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x1404400C0
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     CmpConstructNameFromKeyNodes @ 0x14002D790 (CmpConstructNameFromKeyNodes.c)
 *     CmpWalkOneLevel @ 0x14002D9B0 (CmpWalkOneLevel.c)
 *     CmpPartialPromoteSubkeys @ 0x1401B3204 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1401B3424 (CmpPromoteKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1401B366C (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1401B3C44 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmQueryLayeredKey @ 0x1401B3DE4 (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4234 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpCreateTombstone @ 0x1401B6260 (CmpCreateTombstone.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1403FBF0C (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockKcbStackExclusive @ 0x1403FBF54 (CmpLockKcbStackExclusive.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmpIsKeyStackSymlink @ 0x140403778 (CmpIsKeyStackSymlink.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140440140 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCCF0 (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405FED24 (CmpEnumerateLayeredKey.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14060C000 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmRmIsKcbStackVisible @ 0x14060DCCC (CmRmIsKcbStackVisible.c)
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
