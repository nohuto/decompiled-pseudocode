/*
 * XREFs of RtlEndEnumerationHashTable @ 0x1400CFDE0
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x1400CFBA4 (SepCleanupMarkedForDeletionEntries.c)
 *     RtlEndWeakEnumerationHashTable @ 0x1401F938C (RtlEndWeakEnumerationHashTable.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x1403B46EC (SepFindMatchingLowBoxNumberEntries.c)
 *     SepRmDestroyCapTable @ 0x140656E28 (SepRmDestroyCapTable.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlEndEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // r8

  --HashTable->NumEnumerators;
  Flink = Enumerator->HashEntry.Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Enumerator->HashEntry.Linkage.Flink != Enumerator )
  {
    Blink = Enumerator->HashEntry.Linkage.Blink;
    if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Flink->Blink != Enumerator
      || (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Blink->Flink != Enumerator )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    if ( Enumerator->ChainHead->Flink == Enumerator->ChainHead )
      --HashTable->NonEmptyBuckets;
  }
  Enumerator->ChainHead = 0LL;
}
