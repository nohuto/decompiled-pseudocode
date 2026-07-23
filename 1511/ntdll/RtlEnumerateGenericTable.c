/*
 * XREFs of RtlEnumerateGenericTable @ 0x18006D390
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x18006D740 (RtlSplay.c)
 *     RtlRealSuccessor @ 0x18006DC00 (RtlRealSuccessor.c)
 */

PVOID __cdecl RtlEnumerateGenericTable(PRTL_GENERIC_TABLE Table, BOOLEAN Restart)
{
  PRTL_SPLAY_LINKS TableRoot; // rbx
  void *v3; // rdi
  _RTL_SPLAY_LINKS *i; // rax
  _RTL_SPLAY_LINKS *v7; // rcx
  PRTL_SPLAY_LINKS v8; // rax

  TableRoot = Table->TableRoot;
  v3 = 0LL;
  if ( !Table->TableRoot )
    return 0LL;
  if ( Restart )
  {
    for ( i = TableRoot->LeftChild; i; i = i->LeftChild )
      TableRoot = i;
    v7 = TableRoot;
  }
  else
  {
    v8 = RtlRealSuccessor(Table->TableRoot);
    TableRoot = v8;
    if ( !v8 )
      return v3;
    v7 = v8;
  }
  Table->TableRoot = RtlSplay(v7);
  return &TableRoot[1].RightChild;
}
