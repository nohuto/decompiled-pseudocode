/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x1800DBB80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x180065834 (RtlpGetChainHead.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlStronglyEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v2; // r9
  PRTL_DYNAMIC_HASH_TABLE v3; // r10
  unsigned int BucketIndex; // edx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY ChainHead; // rcx

  v2 = Enumerator;
  v3 = HashTable;
  BucketIndex = Enumerator->BucketIndex;
  if ( BucketIndex < HashTable->TableSize )
  {
    while ( 2 )
    {
      if ( BucketIndex == v2->BucketIndex )
      {
        result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v2->HashEntry.Linkage.Flink;
        ChainHead = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v2->ChainHead;
      }
      else
      {
        result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)RtlpGetChainHead((__int64)v3, BucketIndex);
        ChainHead = result;
      }
      while ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)result->Linkage.Flink != ChainHead )
      {
        result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)result->Linkage.Flink;
        if ( result->Signature )
        {
          v2->BucketIndex = BucketIndex;
          v2->ChainHead = &ChainHead->Linkage;
          v2->HashEntry.Linkage.Flink = &result->Linkage;
          return result;
        }
      }
      if ( ++BucketIndex < v3->TableSize )
        continue;
      break;
    }
  }
  return 0LL;
}
