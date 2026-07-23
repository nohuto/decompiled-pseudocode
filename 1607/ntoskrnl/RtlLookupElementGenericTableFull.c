/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x140213B60
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1400C3880 (RtlSplay.c)
 *     FindNodeOrParent_0 @ 0x1400C3BFC (FindNodeOrParent_0.c)
 */

PVOID __stdcall RtlLookupElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT NodeOrParent_0; // eax

  NodeOrParent_0 = (unsigned int)FindNodeOrParent_0((__int64 *)Table, (__int64)Buffer, NodeOrParent);
  *SearchResult = NodeOrParent_0;
  if ( NodeOrParent_0 != TableFoundNode )
    return 0LL;
  Table->TableRoot = RtlSplay((PRTL_SPLAY_LINKS)*NodeOrParent);
  return (char *)*NodeOrParent + 40;
}
