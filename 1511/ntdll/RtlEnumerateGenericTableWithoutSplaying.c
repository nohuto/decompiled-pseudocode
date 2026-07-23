/*
 * XREFs of RtlEnumerateGenericTableWithoutSplaying @ 0x18006C1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlEnumerateGenericTableWithoutSplaying(PRTL_GENERIC_TABLE Table, PVOID *RestartKey)
{
  PRTL_SPLAY_LINKS TableRoot; // r8
  void *v4; // rcx
  PRTL_SPLAY_LINKS *v6; // rdx
  _RTL_SPLAY_LINKS *k; // rax
  _RTL_SPLAY_LINKS *i; // rax
  _QWORD *j; // rax

  TableRoot = Table->TableRoot;
  v4 = 0LL;
  if ( !TableRoot )
    return 0LL;
  v6 = (PRTL_SPLAY_LINKS *)*RestartKey;
  if ( v6 )
  {
    TableRoot = v6[2];
    if ( TableRoot )
    {
      for ( i = TableRoot->LeftChild; i; i = i->LeftChild )
        TableRoot = i;
    }
    else
    {
      for ( j = *v6; (PRTL_SPLAY_LINKS *)j[2] == v6; j = (_QWORD *)*j )
        v6 = (PRTL_SPLAY_LINKS *)j;
      TableRoot = 0LL;
      if ( (PRTL_SPLAY_LINKS *)(*v6)->LeftChild == v6 )
        TableRoot = *v6;
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
