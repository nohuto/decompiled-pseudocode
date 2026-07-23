/*
 * XREFs of RtlEnumerateGenericTable @ 0x1800631F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x180063500 (RtlSplay.c)
 *     RtlRealSuccessor @ 0x180063A70 (RtlRealSuccessor.c)
 */

PVOID __cdecl RtlEnumerateGenericTable(PRTL_GENERIC_TABLE Table, BOOLEAN Restart)
{
  PRTL_SPLAY_LINKS TableRoot; // rbx
  void *v3; // rdi
  _RTL_SPLAY_LINKS *i; // rax
  _RTL_SPLAY_LINKS *v6; // rcx
  PRTL_SPLAY_LINKS v8; // rax

  TableRoot = Table->TableRoot;
  v3 = 0LL;
  if ( Table->TableRoot )
  {
    if ( Restart )
    {
      for ( i = TableRoot->LeftChild; i; i = i->LeftChild )
        TableRoot = i;
      v6 = TableRoot;
    }
    else
    {
      v8 = RtlRealSuccessor(Table->TableRoot);
      TableRoot = v8;
      if ( !v8 )
        return v3;
      v6 = v8;
    }
    Table->TableRoot = RtlSplay(v6);
    return &TableRoot[1].RightChild;
  }
  return 0LL;
}
