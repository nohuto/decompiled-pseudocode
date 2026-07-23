/*
 * XREFs of RtlInsertEntryHashTable @ 0x180065600
 * Callers:
 *     <none>
 * Callees:
 *     RtlpPopulateContext @ 0x1800656EC (RtlpPopulateContext.c)
 */

BOOLEAN __cdecl RtlInsertEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_CONTEXT v4; // rbx
  _LIST_ENTRY *PrevLinkage; // rax
  _LIST_ENTRY *Flink; // rcx
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  Entry->Signature = Signature;
  v4 = Context;
  ++HashTable->NumEntries;
  if ( Context )
  {
    if ( !Context->ChainHead )
      RtlpPopulateContext(HashTable, Context, Signature);
  }
  else
  {
    RtlpPopulateContext(HashTable, v10, Signature);
    v4 = (PRTL_DYNAMIC_HASH_TABLE_CONTEXT)v10;
  }
  if ( v4->ChainHead->Flink == v4->ChainHead )
    ++HashTable->NonEmptyBuckets;
  PrevLinkage = v4->PrevLinkage;
  Flink = PrevLinkage->Flink;
  Entry->Linkage.Flink = PrevLinkage->Flink;
  Entry->Linkage.Blink = PrevLinkage;
  if ( Flink->Blink != PrevLinkage )
    __fastfail(3u);
  Flink->Blink = &Entry->Linkage;
  PrevLinkage->Flink = &Entry->Linkage;
  return 1;
}
