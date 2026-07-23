/*
 * XREFs of RtlInitStrongEnumerationHashTable @ 0x1800EB490
 * Callers:
 *     <none>
 * Callees:
 *     RtlpPopulateContext @ 0x18007500C (RtlpPopulateContext.c)
 *     memset @ 0x1800ACCC0 (memset.c)
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
