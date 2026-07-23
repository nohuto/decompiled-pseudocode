/*
 * XREFs of RtlInitEnumerationHashTable @ 0x180074EB0
 * Callers:
 *     RtlInitWeakEnumerationHashTable @ 0x1800EB4D0 (RtlInitWeakEnumerationHashTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x18007500C (RtlpPopulateContext.c)
 */

BOOLEAN __cdecl RtlInitEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  _LIST_ENTRY *v4; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v7; // [rsp+20h] [rbp-28h] BYREF

  RtlpPopulateContext(HashTable, &v7, 0LL);
  v4 = v7;
  ++HashTable->NumEnumerators;
  if ( v4->Flink == v4 )
    ++HashTable->NonEmptyBuckets;
  Flink = v4->Flink;
  if ( v4->Flink->Blink != v4 )
    __fastfail(3u);
  Enumerator->HashEntry.Linkage.Blink = v4;
  Enumerator->HashEntry.Linkage.Flink = Flink;
  Flink->Blink = &Enumerator->HashEntry.Linkage;
  v4->Flink = &Enumerator->HashEntry.Linkage;
  Enumerator->BucketIndex = 0;
  Enumerator->HashEntry.Signature = 0LL;
  Enumerator->ChainHead = v4;
  return 1;
}
