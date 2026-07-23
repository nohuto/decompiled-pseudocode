/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x180068730
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x1800687A0 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent @ 0x1800688E4 (FindNodeOrParent.c)
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
