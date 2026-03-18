/*
 * XREFs of CmpStartKeyNodeStackFromKcbStack @ 0x14060C000
 * Callers:
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1401B366C (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1401B3C44 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmQueryLayeredKey @ 0x1401B3DE4 (CmQueryLayeredKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140609FD4 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x14060A6C8 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14060B718 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1404400C0 (CmpGetKcbAtLayerHeight.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1404401F0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14060BCE4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpStartKeyNodeStack @ 0x14060BF6C (CmpStartKeyNodeStack.c)
 */

__int64 __fastcall CmpStartKeyNodeStackFromKcbStack(__int16 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int16 i; // bx
  __int64 EntryAtLayerHeight; // r14
  __int16 v9; // dx
  __int64 KcbAtLayerHeight; // rax
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx

  result = CmpStartKeyNodeStack((__int64)a1, *(_WORD *)(a2 + 2));
  if ( (int)result >= 0 )
  {
    for ( i = *a1; i >= 0; --i )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, i);
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, v9);
      v11 = KcbAtLayerHeight;
      v12 = *(unsigned int *)(KcbAtLayerHeight + 32);
      if ( (_DWORD)v12 != -1 )
      {
        v13 = *(_QWORD *)(KcbAtLayerHeight + 24);
        *(_QWORD *)EntryAtLayerHeight = v13;
        *(_DWORD *)(EntryAtLayerHeight + 8) = v12;
        *(_QWORD *)(EntryAtLayerHeight + 16) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v13 + 8))(
                                                 v13,
                                                 v12,
                                                 EntryAtLayerHeight + 24);
      }
      if ( a3 && (unsigned int)CmpGetEffectiveKcbSemantics(v11, a3) )
        break;
    }
    return 0LL;
  }
  return result;
}
