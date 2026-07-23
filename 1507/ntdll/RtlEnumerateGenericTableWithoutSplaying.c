/*
 * XREFs of RtlEnumerateGenericTableWithoutSplaying @ 0x180061B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlEnumerateGenericTableWithoutSplaying(PRTL_GENERIC_TABLE Table, PVOID *RestartKey)
{
  PRTL_SPLAY_LINKS TableRoot; // r8
  void *v4; // rcx
  PRTL_SPLAY_LINKS *v5; // rdx
  _RTL_SPLAY_LINKS *i; // rax
  _QWORD *j; // rax
  _RTL_SPLAY_LINKS *k; // rax

  TableRoot = Table->TableRoot;
  v4 = 0LL;
  if ( TableRoot )
  {
    v5 = (PRTL_SPLAY_LINKS *)*RestartKey;
    if ( v5 )
    {
      TableRoot = v5[2];
      if ( TableRoot )
      {
        for ( i = TableRoot->LeftChild; i; i = i->LeftChild )
          TableRoot = i;
      }
      else
      {
        for ( j = *v5; (PRTL_SPLAY_LINKS *)j[2] == v5; j = (_QWORD *)*j )
          v5 = (PRTL_SPLAY_LINKS *)j;
        TableRoot = 0LL;
        if ( (PRTL_SPLAY_LINKS *)(*v5)->LeftChild == v5 )
          TableRoot = *v5;
      }
      if ( !TableRoot )
        return v4;
    }
    else
    {
      for ( k = TableRoot->LeftChild; k; k = k->LeftChild )
        TableRoot = k;
    }
    *RestartKey = TableRoot;
    return &TableRoot[1].RightChild;
  }
  return 0LL;
}
