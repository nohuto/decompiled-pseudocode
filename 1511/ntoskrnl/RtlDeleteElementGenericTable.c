/*
 * XREFs of RtlDeleteElementGenericTable @ 0x1400CE25C
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x1400CE42C (RtlDelete.c)
 *     sub_1400CE8B8 @ 0x1400CE8B8 (sub_1400CE8B8.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS v3; // rdi
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // r8
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)sub_1400CE8B8(Table, Buffer, &Links) != 1 )
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
