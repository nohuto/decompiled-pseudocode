/*
 * XREFs of RtlInsertElementGenericTable @ 0x1400CE2D8
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableFull @ 0x1400CE338 (RtlInsertElementGenericTableFull.c)
 *     sub_1400CE8B8 @ 0x1400CE8B8 (sub_1400CE8B8.c)
 */

PVOID __stdcall RtlInsertElementGenericTable(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  TABLE_SEARCH_RESULT SearchResult; // eax
  PVOID NodeOrParent[3]; // [rsp+30h] [rbp-18h] BYREF

  SearchResult = (unsigned int)sub_1400CE8B8(Table, Buffer, NodeOrParent);
  return RtlInsertElementGenericTableFull(Table, Buffer, BufferSize, NewElement, NodeOrParent[0], SearchResult);
}
