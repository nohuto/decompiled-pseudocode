/*
 * XREFs of RtlInsertElementGenericTableFullAvl @ 0x1400C2150
 * Callers:
 *     RtlInsertElementGenericTableAvl @ 0x1400C23E4 (RtlInsertElementGenericTableAvl.c)
 *     PiPnpRtlObjectEventCreate @ 0x1404E4568 (PiPnpRtlObjectEventCreate.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E9218 (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     RebalanceNode @ 0x1400C227C (RebalanceNode.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

PVOID __stdcall RtlInsertElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  BOOLEAN v6; // r12
  size_t v7; // rsi
  _RTL_BALANCED_LINKS *v11; // rax
  _RTL_BALANCED_LINKS *v12; // rbx
  _RTL_BALANCED_LINKS *v13; // rcx
  _RTL_BALANCED_LINKS *v14; // r8
  char v15; // dl

  v6 = 1;
  v7 = BufferSize;
  if ( SearchResult == TableFoundNode )
  {
    v12 = (_RTL_BALANCED_LINKS *)NodeOrParent;
LABEL_16:
    if ( NewElement )
    {
      if ( SearchResult == TableFoundNode )
        v6 = 0;
      *NewElement = v6;
    }
    return &v12[1];
  }
  if ( BufferSize + 32 >= BufferSize )
  {
    v11 = (_RTL_BALANCED_LINKS *)((__int64 (*)(void))Table->AllocateRoutine)();
    v12 = v11;
    if ( v11 )
    {
      memset(v11, 0, sizeof(_RTL_BALANCED_LINKS));
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        v13 = (_RTL_BALANCED_LINKS *)NodeOrParent;
        v14 = v12;
        if ( SearchResult == TableInsertAsLeft )
          *((_QWORD *)NodeOrParent + 1) = v12;
        else
          *((_QWORD *)NodeOrParent + 2) = v12;
        v12->Parent = (_RTL_BALANCED_LINKS *)NodeOrParent;
        Table->BalancedRoot.Balance = -1;
        while ( 1 )
        {
          v15 = 1;
          if ( v14->Parent->LeftChild == v14 )
            v15 = -1;
          if ( v13->Balance )
            break;
          v13->Balance = v15;
          v14 = v13;
          v13 = v13->Parent;
        }
        if ( v13->Balance == v15 )
        {
          RebalanceNode(v13);
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
        Table->BalancedRoot.RightChild = v12;
        v12->Parent = &Table->BalancedRoot;
        Table->DepthOfTree = 1;
      }
      memmove(&v12[1], Buffer, v7);
      goto LABEL_16;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
