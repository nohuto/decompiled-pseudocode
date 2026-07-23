/*
 * XREFs of RtlDeleteElementGenericTable @ 0x1400C35A4
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x1400C3774 (RtlDelete.c)
 *     FindNodeOrParent_0 @ 0x1400C3BFC (FindNodeOrParent_0.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS v3; // rdi
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // r8
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
  --Table->NumberGenericTableElements;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = &Table->InsertOrderList;
  ((void (__fastcall *)(PRTL_GENERIC_TABLE, PRTL_SPLAY_LINKS))Table->FreeRoutine)(Table, v3);
  return 1;
}
