/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14060A64C
 * Callers:
 *     CmpKeyEnumStackAdvance @ 0x14060A128 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14060A1B8 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackCleanup @ 0x14060A308 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14060A760 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpKeyEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 344) + ((unsigned __int64)(unsigned int)(a2 - 2) << 7);
  else
    return ((unsigned __int64)(unsigned int)a2 << 7) + a1 + 88;
}
