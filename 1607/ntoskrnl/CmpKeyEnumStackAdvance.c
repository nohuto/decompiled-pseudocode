/*
 * XREFs of CmpKeyEnumStackAdvance @ 0x14060A1DC
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1401B30E8 (CmpPartialPromoteSubkeys.c)
 *     CmpEnumerateLayeredKey @ 0x1405FEDD8 (CmpEnumerateLayeredKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14060A114 (CmpGetSubKeyCountForKeyNodeStack.c)
 * Callees:
 *     CmpKeyEnumStackAdvanceInternal @ 0x14060A26C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14060A700 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14060BD20 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14060BD98 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpKeyEnumStackAdvance(unsigned __int16 *a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *EntryAtLayerHeight; // rax
  _QWORD *v6; // r10

  for ( result = ((__int64 (*)(void))CmpKeyEnumStackAdvanceInternal)();
        (int)result >= 0;
        result = CmpKeyEnumStackAdvanceInternal(a1) )
  {
    v4 = *a1;
    if ( (v4 & 0x8000u) == 0LL )
    {
      while ( 1 )
      {
        CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 4, (unsigned __int16)v4, v3, v4);
        EntryAtLayerHeight = (_QWORD *)CmpKeyEnumStackGetEntryAtLayerHeight(a1);
        if ( v6[2] )
          break;
        if ( (!EntryAtLayerHeight[1] || !(unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight))
          && (_WORD)v4 != a1[1] )
        {
          LOWORD(v4) = v4 - 1;
          if ( (v4 & 0x8000u) == 0LL )
            continue;
        }
        goto LABEL_11;
      }
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v6) != 1 )
        return 0LL;
    }
LABEL_11:
    ;
  }
  return result;
}
