/*
 * XREFs of CmpCleanupKeyNodeStack @ 0x14060B8B0
 * Callers:
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1401B366C (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1401B3C44 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmQueryLayeredKey @ 0x1401B3DE4 (CmQueryLayeredKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140609FD4 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackCleanup @ 0x14060A308 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x14060A6C8 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14060B718 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     MiDeleteSubsection @ 0x140087410 (MiDeleteSubsection.c)
 *     CmpKeyNodeStackEntryCleanup @ 0x14060BCC4 (CmpKeyNodeStackEntryCleanup.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14060BCE4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
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
