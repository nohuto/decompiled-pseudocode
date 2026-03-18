/*
 * XREFs of RtlRemoveEntryHashTable @ 0x14009211C
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x140091F30 (SepCleanupMarkedForDeletionEntries.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1404A2798 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceLowBoxHandlesEntry @ 0x1404A2998 (SepDereferenceLowBoxHandlesEntry.c)
 *     SepDeReferenceSharedSidEntries @ 0x1406958F4 (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140695D78 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepRmDestroyCapTable @ 0x140696798 (SepRmDestroyCapTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x14007D030 (RtlpPopulateContext.c)
 */

BOOLEAN __stdcall RtlRemoveEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  unsigned __int64 Signature; // r8
  struct _LIST_ENTRY *Flink; // r10
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
