/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x1800E3CB0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x18006D698 (FindNodeOrParent_0.c)
 *     RtlSplay @ 0x18006D740 (RtlSplay.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFull(
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
