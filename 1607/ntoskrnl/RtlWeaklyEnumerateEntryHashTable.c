/*
 * XREFs of RtlWeaklyEnumerateEntryHashTable @ 0x14021358C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlWeaklyEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  return RtlEnumerateEntryHashTable(HashTable, Enumerator);
}
