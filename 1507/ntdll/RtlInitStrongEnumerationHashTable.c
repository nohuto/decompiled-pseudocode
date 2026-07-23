/*
 * XREFs of RtlInitStrongEnumerationHashTable @ 0x1800DBB30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpPopulateContext @ 0x1800656EC (RtlpPopulateContext.c)
 *     memset @ 0x180098540 (memset.c)
 */

BOOLEAN __cdecl RtlInitStrongEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  _LIST_ENTRY *v3; // rax
  _LIST_ENTRY *v5; // [rsp+20h] [rbp-28h] BYREF

  RtlpPopulateContext(HashTable, (__int64)&v5, 0);
  memset(Enumerator, 0, sizeof(_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR));
  v3 = v5;
  Enumerator->ChainHead = v5;
  Enumerator->HashEntry.Linkage.Flink = v3;
  return 1;
}
