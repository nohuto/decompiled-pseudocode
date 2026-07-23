/*
 * XREFs of RtlInsertElementGenericTableFull @ 0x1400C3680
 * Callers:
 *     RtlInsertElementGenericTable @ 0x1400C3620 (RtlInsertElementGenericTable.c)
 * Callees:
 *     RtlSplay @ 0x1400C3880 (RtlSplay.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

PVOID __stdcall RtlInsertElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  size_t v6; // r15
  _RTL_SPLAY_LINKS *v10; // rbx
  _RTL_SPLAY_LINKS *v12; // rax
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *Blink; // rdx

  v6 = BufferSize;
  if ( SearchResult == TableFoundNode )
  {
    v10 = (_RTL_SPLAY_LINKS *)NodeOrParent;
LABEL_3:
    Table->TableRoot = RtlSplay(v10);
    if ( NewElement )
      *NewElement = SearchResult != TableFoundNode;
    return &v10[1].RightChild;
  }
  if ( BufferSize + 40 >= BufferSize )
  {
    v12 = (_RTL_SPLAY_LINKS *)((__int64 (*)(void))Table->AllocateRoutine)();
    v10 = v12;
    if ( v12 )
    {
      v12->Parent = v12;
      v13 = (struct _LIST_ENTRY *)&v12[1];
      v12->LeftChild = 0LL;
      v12->RightChild = 0LL;
      Blink = Table->InsertOrderList.Blink;
      if ( Blink->Flink != &Table->InsertOrderList )
        __fastfail(3u);
      v13->Flink = &Table->InsertOrderList;
      v12[1].LeftChild = (_RTL_SPLAY_LINKS *)Blink;
      Blink->Flink = v13;
      Table->InsertOrderList.Blink = v13;
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        if ( SearchResult == TableInsertAsLeft )
          *((_QWORD *)NodeOrParent + 1) = v12;
        else
          *((_QWORD *)NodeOrParent + 2) = v12;
        v12->Parent = (_RTL_SPLAY_LINKS *)NodeOrParent;
      }
      else
      {
        Table->TableRoot = v12;
      }
      memmove(&v12[1].RightChild, Buffer, v6);
      goto LABEL_3;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
