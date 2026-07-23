/*
 * XREFs of RtlDeleteElementGenericTable @ 0x18006D420
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x18006D698 (FindNodeOrParent_0.c)
 *     RtlDelete @ 0x18006D950 (RtlDelete.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

BOOLEAN __cdecl RtlDeleteElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS v3; // rsi
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // rcx
  PRTL_GENERIC_FREE_ROUTINE FreeRoutine; // rbx
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent_0(Table, Buffer, &Links) != 1 )
    return 0;
  v3 = Links;
  Table->TableRoot = RtlDelete(Links);
  Parent = v3[1].Parent;
  LeftChild = v3[1].LeftChild;
  if ( Parent->LeftChild != &v3[1] || LeftChild->Parent != &v3[1] )
    __fastfail(3u);
  LeftChild->Parent = Parent;
  Parent->LeftChild = LeftChild;
  FreeRoutine = Table->FreeRoutine;
  --Table->NumberGenericTableElements;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = &Table->InsertOrderList;
  ((void (__fastcall *)(PRTL_GENERIC_TABLE, PRTL_SPLAY_LINKS))FreeRoutine)(Table, v3);
  return 1;
}
