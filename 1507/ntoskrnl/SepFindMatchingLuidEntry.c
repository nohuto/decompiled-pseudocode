/*
 * XREFs of SepFindMatchingLuidEntry @ 0x1404367C0
 * Callers:
 *     SepDereferenceLuidToIndexEntry @ 0x1400152A0 (SepDereferenceLuidToIndexEntry.c)
 *     SepReferenceLuidToIndexEntry @ 0x140015D60 (SepReferenceLuidToIndexEntry.c)
 * Callees:
 *     RtlLookupEntryHashTable @ 0x140015E90 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x14010ED10 (RtlGetNextEntryHashTable.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __fastcall SepFindMatchingLuidEntry(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        ULONG_PTR *a2,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY *a3)
{
  ULONG_PTR v5; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  v5 = *a2;
  if ( !v5 )
    v5 = 1LL;
  result = RtlLookupEntryHashTable(HashTable, v5, &Context);
  if ( result )
  {
    while ( (struct _LIST_ENTRY *)*a2 != result[1].Linkage.Blink )
    {
      result = RtlGetNextEntryHashTable(HashTable, &Context);
      if ( !result )
        goto LABEL_6;
    }
    *a3 = result;
  }
  else
  {
LABEL_6:
    *a3 = 0LL;
  }
  return result;
}
