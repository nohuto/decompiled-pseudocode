/*
 * XREFs of CmpValueEnumStackGetEntryAtLayerHeight @ 0x14060B5E4
 * Callers:
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B376C (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401B5C7C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackAdvance @ 0x14060B480 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x14060B58C (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14060B650 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpValueEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 < 2 )
    return a1 + 32LL * a2 + 16;
  else
    return *(_QWORD *)(a1 + 80) + 32LL * (__int16)(a2 - 2);
}
