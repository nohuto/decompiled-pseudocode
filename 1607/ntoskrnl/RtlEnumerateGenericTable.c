/*
 * XREFs of RtlEnumerateGenericTable @ 0x140126DC4
 * Callers:
 *     <none>
 * Callees:
 *     RtlRealSuccessor @ 0x1400A9A08 (RtlRealSuccessor.c)
 *     RtlSplay @ 0x1400C3880 (RtlSplay.c)
 */

PVOID __stdcall RtlEnumerateGenericTable(PRTL_GENERIC_TABLE Table, BOOLEAN Restart)
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
    goto LABEL_10;
  }
  v8 = RtlRealSuccessor(Table->TableRoot);
  TableRoot = v8;
  if ( v8 )
  {
    v7 = v8;
LABEL_10:
    Table->TableRoot = RtlSplay(v7);
    return &TableRoot[1].RightChild;
  }
  return v3;
}
