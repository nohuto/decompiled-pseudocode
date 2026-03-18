/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x14015DB48
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x140105B70 (RtlSplay.c)
 *     sub_140105DA0 @ 0x140105DA0 (sub_140105DA0.c)
 */

PVOID __stdcall RtlLookupElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT v7; // eax

  v7 = (unsigned int)sub_140105DA0((__int64 *)Table, (__int64)Buffer, NodeOrParent);
  *SearchResult = v7;
  if ( v7 != TableFoundNode )
    return 0LL;
  Table->TableRoot = RtlSplay((PRTL_SPLAY_LINKS)*NodeOrParent);
  return (char *)*NodeOrParent + 40;
}
