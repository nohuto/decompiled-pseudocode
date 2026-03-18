/*
 * XREFs of CmpKeyEnumStackCleanup @ 0x14060A308
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1401B3204 (CmpPartialPromoteSubkeys.c)
 *     CmpEnumerateLayeredKey @ 0x1405FED24 (CmpEnumerateLayeredKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14060A060 (CmpGetSubKeyCountForKeyNodeStack.c)
 * Callees:
 *     MiDeleteSubsection @ 0x140087410 (MiDeleteSubsection.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x14060A468 (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14060A64C (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpCleanupKeyNodeStack @ 0x14060B8B0 (CmpCleanupKeyNodeStack.c)
 */

void __fastcall CmpKeyEnumStackCleanup(__int64 a1)
{
  __int16 i; // di
  __int64 EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v4; // rcx

  CmpCleanupKeyNodeStack(a1 + 8);
  for ( i = 0; i <= *(__int16 *)a1; ++i )
  {
    EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
    CmpKeyEnumStackEntryCleanup(EntryAtLayerHeight);
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 344);
  if ( v4 )
    MiDeleteSubsection(v4);
}
