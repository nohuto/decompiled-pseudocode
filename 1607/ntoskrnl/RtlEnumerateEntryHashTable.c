/*
 * XREFs of RtlEnumerateEntryHashTable @ 0x140091780
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x140091690 (SepCleanupMarkedForDeletionEntries.c)
 *     RtlWeaklyEnumerateEntryHashTable @ 0x14021358C (RtlWeaklyEnumerateEntryHashTable.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x1403E1E40 (SepFindMatchingLowBoxNumberEntries.c)
 *     SepRmDestroyCapTable @ 0x14069687C (SepRmDestroyCapTable.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int BucketIndex; // r10d
  unsigned int TableSize; // r9d
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  unsigned int v8; // edx
  char *Directory; // rcx
  _LIST_ENTRY *ChainHead; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Flink; // rcx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  struct _LIST_ENTRY *v13; // r9
  struct _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *v15; // rdx
  struct _LIST_ENTRY *v16; // rax

  BucketIndex = Enumerator->BucketIndex;
  TableSize = HashTable->TableSize;
  v6 = BucketIndex;
  if ( BucketIndex >= TableSize )
    return 0LL;
  while ( 1 )
  {
    if ( v6 == BucketIndex )
    {
      ChainHead = Enumerator->ChainHead;
      Flink = Enumerator;
    }
    else
    {
      if ( TableSize <= 0x80 )
      {
        Directory = (char *)HashTable->Directory;
        v8 = v6;
      }
      else
      {
        _BitScanReverse(&v7, v6 + 128);
        v8 = (v6 + 128) ^ (1 << v7);
        Directory = (char *)*((_QWORD *)HashTable->Directory + v7 - 7);
      }
      ChainHead = (_LIST_ENTRY *)&Directory[16 * v8];
      Flink = (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)ChainHead;
    }
    if ( Flink->HashEntry.Linkage.Flink != ChainHead )
      break;
LABEL_7:
    if ( ++v6 >= TableSize )
      return 0LL;
  }
  while ( 1 )
  {
    Flink = (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Flink->HashEntry.Linkage.Flink;
    if ( Flink->HashEntry.Signature )
      break;
    if ( Flink->HashEntry.Linkage.Flink == ChainHead )
      goto LABEL_7;
  }
  v13 = Enumerator->HashEntry.Linkage.Flink;
  Blink = Enumerator->HashEntry.Linkage.Blink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Enumerator->HashEntry.Linkage.Flink->Blink != Enumerator
    || (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Blink->Flink != Enumerator )
  {
    __fastfail(3u);
  }
  Blink->Flink = v13;
  v13->Blink = Blink;
  v15 = Enumerator->ChainHead;
  if ( v15 != ChainHead )
  {
    if ( v15->Flink == v15 )
      --HashTable->NonEmptyBuckets;
    if ( ChainHead->Flink == ChainHead )
      ++HashTable->NonEmptyBuckets;
  }
  Enumerator->BucketIndex = v6;
  Enumerator->ChainHead = ChainHead;
  v16 = Flink->HashEntry.Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Flink->HashEntry.Linkage.Flink->Blink != Flink )
    __fastfail(3u);
  Enumerator->HashEntry.Linkage.Flink = v16;
  Enumerator->HashEntry.Linkage.Blink = &Flink->HashEntry.Linkage;
  v16->Blink = &Enumerator->HashEntry.Linkage;
  result = &Flink->HashEntry;
  Flink->HashEntry.Linkage.Flink = &Enumerator->HashEntry.Linkage;
  return result;
}
