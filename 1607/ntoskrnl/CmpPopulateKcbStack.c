/*
 * XREFs of CmpPopulateKcbStack @ 0x14043EFE0
 * Callers:
 *     CmpConstructNameFromKeyNodes @ 0x14002D310 (CmpConstructNameFromKeyNodes.c)
 *     CmpWalkOneLevel @ 0x14002D530 (CmpWalkOneLevel.c)
 *     CmpPartialPromoteSubkeys @ 0x1401B30E8 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1401B3308 (CmpPromoteKey.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 * Callees:
 *     CmpSetKcbAtLayerHeight @ 0x1404B0A9C (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpPopulateKcbStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 v3; // r10
  __int64 i; // r11
  __int64 v5; // r11
  __int16 v6; // r10

  result = *(unsigned __int16 *)(a2 + 58);
  *(_WORD *)(a1 + 2) = result;
  v3 = *(_WORD *)(a2 + 58);
  if ( v3 )
  {
    for ( i = *(_QWORD *)(a2 + 184); i; v3 = v6 - 1 )
    {
      result = CmpSetKcbAtLayerHeight(a1, v3, *(_QWORD *)(i + 16));
      i = *(_QWORD *)(v5 + 24);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = a2;
  }
  return result;
}
