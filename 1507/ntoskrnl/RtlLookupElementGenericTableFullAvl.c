/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x140018038
 * Callers:
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     PiPnpRtlObjectEventCreate @ 0x14043AFA8 (PiPnpRtlObjectEventCreate.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E066C (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     FindNodeOrParent @ 0x140018070 (FindNodeOrParent.c)
 */

PVOID __stdcall RtlLookupElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT v6; // eax

  v6 = (unsigned int)FindNodeOrParent(Table, Buffer, NodeOrParent);
  *SearchResult = v6;
  if ( v6 == TableFoundNode )
    return (char *)*NodeOrParent + 32;
  else
    return 0LL;
}
