/*
 * XREFs of CmpValueEnumStackCleanup @ 0x14060B640
 * Callers:
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B3650 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1401B5A7C (CmpGetValueCountForKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCDA4 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     CmpValueEnumStackEntryCleanup @ 0x1401B5B40 (CmpValueEnumStackEntryCleanup.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14060B698 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpValueEnumStackCleanup(__int64 a1)
{
  unsigned __int16 i; // di
  _QWORD *EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v4; // rcx

  for ( i = 0; i <= *(_WORD *)(a1 + 12); ++i )
  {
    EntryAtLayerHeight = (_QWORD *)CmpValueEnumStackGetEntryAtLayerHeight(a1, i);
    CmpValueEnumStackEntryCleanup(EntryAtLayerHeight);
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 80);
  if ( v4 )
    MiDeleteSubsection(v4);
}
