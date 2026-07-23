/*
 * XREFs of RtlInsertElementGenericTableFullAvl @ 0x1800687A0
 * Callers:
 *     RtlInsertElementGenericTableAvl @ 0x180068730 (RtlInsertElementGenericTableAvl.c)
 * Callees:
 *     RebalanceNode @ 0x180068B9C (RebalanceNode.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

PVOID __cdecl RtlInsertElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  size_t v6; // r13
  _RTL_BALANCED_LINKS *v10; // rax
  _RTL_BALANCED_LINKS *v11; // rbx
  _RTL_BALANCED_LINKS *v12; // r8
  _RTL_BALANCED_LINKS *v13; // rcx
  char v14; // dl

  v6 = BufferSize;
  if ( SearchResult == TableFoundNode )
  {
    v11 = (_RTL_BALANCED_LINKS *)NodeOrParent;
LABEL_15:
    if ( NewElement )
      *NewElement = SearchResult != TableFoundNode;
    return &v11[1];
  }
  if ( BufferSize + 32 >= BufferSize )
  {
    v10 = (_RTL_BALANCED_LINKS *)Table->AllocateRoutine(Table, BufferSize + 32);
    v11 = v10;
    if ( v10 )
    {
      memset(v10, 0, sizeof(_RTL_BALANCED_LINKS));
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        v12 = v11;
        v13 = (_RTL_BALANCED_LINKS *)NodeOrParent;
        if ( SearchResult == TableInsertAsLeft )
          *((_QWORD *)NodeOrParent + 1) = v11;
        else
          *((_QWORD *)NodeOrParent + 2) = v11;
        v11->Parent = (_RTL_BALANCED_LINKS *)NodeOrParent;
        Table->BalancedRoot.Balance = -1;
        while ( 1 )
        {
          v14 = 1;
          if ( v12->Parent->LeftChild == v12 )
            v14 = -1;
          if ( v13->Balance )
            break;
          v13->Balance = v14;
          v12 = v13;
          v13 = v13->Parent;
        }
        if ( v13->Balance == v14 )
        {
          RebalanceNode();
        }
        else
        {
          v13->Balance = 0;
          if ( !Table->BalancedRoot.Balance )
            ++Table->DepthOfTree;
        }
      }
      else
      {
        Table->BalancedRoot.RightChild = v11;
        v11->Parent = &Table->BalancedRoot;
        Table->DepthOfTree = 1;
      }
      memmove(&v11[1], Buffer, v6);
      goto LABEL_15;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
