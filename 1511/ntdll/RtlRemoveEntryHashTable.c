/*
 * XREFs of RtlRemoveEntryHashTable @ 0x18007C4A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpPopulateContext @ 0x18006FC1C (RtlpPopulateContext.c)
 */

BOOLEAN __cdecl RtlRemoveEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  unsigned __int64 Signature; // r8
  _LIST_ENTRY *Flink; // r10
  _LIST_ENTRY *Blink; // rax

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
