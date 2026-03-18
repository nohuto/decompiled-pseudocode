/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x1401F9A08
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1400CE540 (RtlSplay.c)
 *     sub_1400CE8B8 @ 0x1400CE8B8 (sub_1400CE8B8.c)
 */

PVOID __stdcall RtlLookupElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT v7; // eax

  v7 = (unsigned int)sub_1400CE8B8((__int64 *)Table, (__int64)Buffer, NodeOrParent);
  *SearchResult = v7;
  if ( v7 != TableFoundNode )
    return 0LL;
  Table->TableRoot = RtlSplay((PRTL_SPLAY_LINKS)*NodeOrParent);
  return (char *)*NodeOrParent + 40;
}
