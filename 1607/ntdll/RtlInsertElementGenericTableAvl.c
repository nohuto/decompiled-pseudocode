/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x180074110
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x180074180 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent_0 @ 0x1800742BC (FindNodeOrParent_0.c)
 */

PVOID __cdecl RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  TABLE_SEARCH_RESULT SearchResult; // eax
  PVOID NodeOrParent; // [rsp+30h] [rbp-18h]

  SearchResult = (unsigned int)FindNodeOrParent_0(Table, Buffer);
  return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent, SearchResult);
}
