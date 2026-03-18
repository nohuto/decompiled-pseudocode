/*
 * XREFs of RtlInitEnumerationHashTable @ 0x14002CF80
 * Callers:
 *     RtlInitWeakEnumerationHashTable @ 0x14015B938 (RtlInitWeakEnumerationHashTable.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x14040849C (SepFindMatchingLowBoxNumberEntries.c)
 *     SepRmDestroyCapTable @ 0x1406D92E0 (SepRmDestroyCapTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x14002CFE4 (RtlpPopulateContext.c)
 */

BOOLEAN __stdcall RtlInitEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v7; // [rsp+20h] [rbp-28h] BYREF

  RtlpPopulateContext(HashTable, &v7, 0LL);
  v4 = v7;
  ++HashTable->NumEnumerators;
  if ( v4->Flink == v4 )
    ++HashTable->NonEmptyBuckets;
  Flink = v4->Flink;
  Enumerator->HashEntry.Linkage.Flink = v4->Flink;
  Enumerator->HashEntry.Linkage.Blink = v4;
  if ( Flink->Blink != v4 )
    __fastfail(3u);
  Flink->Blink = &Enumerator->HashEntry.Linkage;
  v4->Flink = &Enumerator->HashEntry.Linkage;
  Enumerator->BucketIndex = 0;
  Enumerator->HashEntry.Signature = 0LL;
  Enumerator->ChainHead = v4;
  return 1;
}
