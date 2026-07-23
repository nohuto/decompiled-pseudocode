/*
 * XREFs of RtlInsertElementGenericTableFull @ 0x18006D530
 * Callers:
 *     RtlInsertElementGenericTable @ 0x18006D4C0 (RtlInsertElementGenericTable.c)
 * Callees:
 *     RtlSplay @ 0x18006D740 (RtlSplay.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

PVOID __cdecl RtlInsertElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  size_t v6; // r15
  _QWORD *v10; // rax
  _RTL_SPLAY_LINKS *v11; // rbx
  _LIST_ENTRY *v12; // rax
  _LIST_ENTRY *Blink; // rdx

  v6 = BufferSize;
  if ( SearchResult == TableFoundNode )
  {
    v11 = (_RTL_SPLAY_LINKS *)NodeOrParent;
LABEL_10:
    Table->TableRoot = RtlSplay(v11);
    if ( NewElement )
      *NewElement = SearchResult != TableFoundNode;
    return &v11[1].RightChild;
  }
  if ( BufferSize + 40 >= BufferSize )
  {
    v10 = (_QWORD *)((__int64 (__fastcall *)(PRTL_GENERIC_TABLE, _QWORD))Table->AllocateRoutine)(Table, BufferSize + 40);
    v11 = (_RTL_SPLAY_LINKS *)v10;
    if ( v10 )
    {
      *v10 = v10;
      v10[1] = 0LL;
      v10[2] = 0LL;
      v12 = (_LIST_ENTRY *)(v10 + 3);
      Blink = Table->InsertOrderList.Blink;
      v12->Flink = &Table->InsertOrderList;
      v12->Blink = Blink;
      if ( Blink->Flink != &Table->InsertOrderList )
        __fastfail(3u);
      Blink->Flink = v12;
      Table->InsertOrderList.Blink = v12;
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        if ( SearchResult == TableInsertAsLeft )
          *((_QWORD *)NodeOrParent + 1) = v11;
        else
          *((_QWORD *)NodeOrParent + 2) = v11;
        v11->Parent = (_RTL_SPLAY_LINKS *)NodeOrParent;
      }
      else
      {
        Table->TableRoot = v11;
      }
      memmove(&v11[1].RightChild, Buffer, v6);
      goto LABEL_10;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
