/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x180060910
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x180060980 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent @ 0x180060AC4 (FindNodeOrParent.c)
 */

PVOID __cdecl RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  TABLE_SEARCH_RESULT SearchResult; // eax
  PVOID NodeOrParent; // [rsp+30h] [rbp-18h]

  SearchResult = (unsigned int)FindNodeOrParent(Table, Buffer);
  return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent, SearchResult);
}
