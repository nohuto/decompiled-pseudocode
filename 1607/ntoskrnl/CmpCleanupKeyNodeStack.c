/*
 * XREFs of CmpCleanupKeyNodeStack @ 0x14060B964
 * Callers:
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1401B3550 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1401B3B28 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmQueryLayeredKey @ 0x1401B3CC8 (CmQueryLayeredKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x14060A088 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackCleanup @ 0x14060A3BC (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x14060A77C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14060B7CC (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     CmpKeyNodeStackEntryCleanup @ 0x14060BD78 (CmpKeyNodeStackEntryCleanup.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14060BD98 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpCleanupKeyNodeStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 i; // di
  __int64 EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v7; // rcx

  for ( i = 0; i <= *(_WORD *)a1; ++i )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1, i, a3, a4);
    CmpKeyNodeStackEntryCleanup(EntryAtLayerHeight);
  }
  v7 = *(struct _PRIVILEGE_SET **)(a1 + 72);
  if ( v7 )
    MiDeleteSubsection(v7);
}
