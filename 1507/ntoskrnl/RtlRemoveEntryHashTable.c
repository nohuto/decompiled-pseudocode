/*
 * XREFs of RtlRemoveEntryHashTable @ 0x14010E610
 * Callers:
 *     SepDereferenceLuidToIndexEntry @ 0x1400152A0 (SepDereferenceLuidToIndexEntry.c)
 *     SepDereferenceLowBoxHandlesEntry @ 0x140527FE0 (SepDereferenceLowBoxHandlesEntry.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140528180 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDeReferenceSharedSidEntries @ 0x1406D8068 (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1406D8520 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepRmDestroyCapTable @ 0x1406D92E0 (SepRmDestroyCapTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x14002CFE4 (RtlpPopulateContext.c)
 */

BOOLEAN __stdcall RtlRemoveEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  unsigned __int64 Signature; // r8
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

  Signature = Entry->Signature;
  --HashTable->NumEntries;
  if ( Entry->Linkage.Flink == Entry->Linkage.Blink )
    --HashTable->NonEmptyBuckets;
  Flink = Entry->Linkage.Flink;
  Blink = Entry->Linkage.Blink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Entry->Linkage.Flink->Blink != Entry
    || (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Blink->Flink != Entry )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( Context && !Context->ChainHead )
    RtlpPopulateContext(HashTable, (__int64)Context, Signature);
  return 1;
}
