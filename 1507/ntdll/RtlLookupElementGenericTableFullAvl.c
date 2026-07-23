/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x180060890
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x180060AC4 (FindNodeOrParent.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  TABLE_SEARCH_RESULT v6; // eax

  v6 = (unsigned int)FindNodeOrParent(Table, Buffer);
  *SearchResult = v6;
  if ( v6 == TableFoundNode )
    return (char *)*NodeOrParent + 32;
  else
    return 0LL;
}
