/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x14060BC6C
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401B5C7C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401B6D2C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x14060A128 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14060A760 (CmpKeyEnumStackStartFromKeyNodeStack.c)
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
