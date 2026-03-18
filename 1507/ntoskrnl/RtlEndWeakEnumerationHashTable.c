/*
 * XREFs of RtlEndWeakEnumerationHashTable @ 0x14015B930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlEndWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  RtlEndEnumerationHashTable(HashTable, Enumerator);
}
