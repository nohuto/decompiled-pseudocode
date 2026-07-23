/*
 * XREFs of RtlInsertElementGenericTableFull @ 0x140105A08
 * Callers:
 *     RtlInsertElementGenericTable @ 0x1401059A8 (RtlInsertElementGenericTable.c)
 * Callees:
 *     RtlSplay @ 0x140105B70 (RtlSplay.c)
 *     memmove @ 0x140195740 (memmove.c)
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
  _QWORD *v12; // rax
  struct _LIST_ENTRY *v13; // rax
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
    v12 = (_QWORD *)((__int64 (*)(void))Table->AllocateRoutine)();
    v10 = (_RTL_SPLAY_LINKS *)v12;
    if ( v12 )
    {
      *v12 = v12;
      v12[1] = 0LL;
      v12[2] = 0LL;
      v13 = (struct _LIST_ENTRY *)(v12 + 3);
      Blink = Table->InsertOrderList.Blink;
      v13->Flink = &Table->InsertOrderList;
      v13->Blink = Blink;
      if ( Blink->Flink != &Table->InsertOrderList )
        __fastfail(3u);
      Blink->Flink = v13;
      Table->InsertOrderList.Blink = v13;
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        if ( SearchResult == TableInsertAsLeft )
          *((_QWORD *)NodeOrParent + 1) = v10;
        else
          *((_QWORD *)NodeOrParent + 2) = v10;
        v10->Parent = (_RTL_SPLAY_LINKS *)NodeOrParent;
      }
      else
      {
        Table->TableRoot = v10;
      }
      memmove(&v10[1].RightChild, Buffer, v6);
      goto LABEL_3;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
