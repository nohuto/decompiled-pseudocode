/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x14024842C
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x14002D164 (RtlpGetChainHead.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlStronglyEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int BucketIndex; // r10d
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v3; // r9
  unsigned int TableSize; // r11d
  unsigned int v6; // edx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY ChainHead; // rcx

  BucketIndex = Enumerator->BucketIndex;
  v3 = Enumerator;
  TableSize = HashTable->TableSize;
  v6 = BucketIndex;
  if ( BucketIndex < TableSize )
  {
    while ( 2 )
    {
      if ( v6 == BucketIndex )
      {
        result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v3->HashEntry.Linkage.Flink;
        ChainHead = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v3->ChainHead;
      }
      else
      {
        result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)RtlpGetChainHead((__int64)HashTable, v6);
        ChainHead = result;
      }
      while ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)result->Linkage.Flink != ChainHead )
      {
        result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)result->Linkage.Flink;
        if ( result->Signature )
        {
          v3->BucketIndex = v6;
          v3->ChainHead = &ChainHead->Linkage;
          v3->HashEntry.Linkage.Flink = &result->Linkage;
          return result;
        }
      }
      if ( ++v6 < TableSize )
        continue;
      break;
    }
  }
  return 0LL;
}
