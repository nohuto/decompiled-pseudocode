/*
 * XREFs of RtlEnumerateEntryHashTable @ 0x180065780
 * Callers:
 *     RtlWeaklyEnumerateEntryHashTable @ 0x1800DBBE0 (RtlWeaklyEnumerateEntryHashTable.c)
 * Callees:
 *     RtlpGetChainHead @ 0x180065834 (RtlpGetChainHead.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v2; // r9
  PRTL_DYNAMIC_HASH_TABLE v3; // r10
  __int64 BucketIndex; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY ChainHead; // rcx
  _LIST_ENTRY *Flink; // r11
  _LIST_ENTRY *Blink; // r8
  _QWORD *p_Flink; // r8
  _LIST_ENTRY *v10; // rcx

  v2 = Enumerator;
  v3 = HashTable;
  BucketIndex = Enumerator->BucketIndex;
  if ( (unsigned int)BucketIndex < HashTable->TableSize )
  {
    while ( 2 )
    {
      if ( (_DWORD)BucketIndex == v2->BucketIndex )
      {
        ChainHead = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v2->ChainHead;
        result = &v2->HashEntry;
      }
      else
      {
        result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)RtlpGetChainHead(v3, BucketIndex);
        ChainHead = result;
      }
      while ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)result->Linkage.Flink != ChainHead )
      {
        result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)result->Linkage.Flink;
        if ( result->Signature )
        {
          Flink = v2->HashEntry.Linkage.Flink;
          Blink = v2->HashEntry.Linkage.Blink;
          if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)v2->HashEntry.Linkage.Flink->Blink != v2
            || (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Blink->Flink != v2 )
          {
            __fastfail(3u);
          }
          Blink->Flink = Flink;
          Flink->Blink = Blink;
          p_Flink = &v2->ChainHead->Flink;
          if ( p_Flink != (_QWORD *)ChainHead )
          {
            if ( (_QWORD *)*p_Flink == p_Flink )
              --v3->NonEmptyBuckets;
            if ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)ChainHead->Linkage.Flink == ChainHead )
              ++v3->NonEmptyBuckets;
          }
          v2->BucketIndex = BucketIndex;
          v2->ChainHead = &ChainHead->Linkage;
          v10 = result->Linkage.Flink;
          v2->HashEntry.Linkage.Flink = result->Linkage.Flink;
          v2->HashEntry.Linkage.Blink = &result->Linkage;
          if ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v10->Blink != result )
            __fastfail(3u);
          v10->Blink = &v2->HashEntry.Linkage;
          result->Linkage.Flink = &v2->HashEntry.Linkage;
          return result;
        }
      }
      BucketIndex = (unsigned int)(BucketIndex + 1);
      if ( (unsigned int)BucketIndex < v3->TableSize )
        continue;
      break;
    }
  }
  return 0LL;
}
