/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x14060BD20
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401B5B60 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401B6C10 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x14060A1DC (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14060A814 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveKeyNodeSemantics(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 144) & 0x80000) != 0 )
    return *(_BYTE *)(a2 + 13) & 3;
  else
    return 0LL;
}
