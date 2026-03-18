/*
 * XREFs of RtlEnumerateEntryHashTable @ 0x140103D60
 * Callers:
 *     RtlWeaklyEnumerateEntryHashTable @ 0x14015B928 (RtlWeaklyEnumerateEntryHashTable.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x14040849C (SepFindMatchingLowBoxNumberEntries.c)
 *     SepRmDestroyCapTable @ 0x1406D92E0 (SepRmDestroyCapTable.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int BucketIndex; // r10d
  unsigned int TableSize; // r9d
  unsigned int v6; // eax
  char *v7; // rdx
  _LIST_ENTRY *ChainHead; // rcx
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Flink; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  struct _LIST_ENTRY *v11; // r9
  struct _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *v13; // r8
  struct _LIST_ENTRY *v14; // rax

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
      v7 = TableSize <= 0x80
         ? (char *)HashTable->Directory
         : (char *)*((_QWORD *)HashTable->Directory + ((unsigned __int16)v6 >> 7));
      ChainHead = (_LIST_ENTRY *)&v7[16 * (v6 & 0x7F)];
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
  v11 = Enumerator->HashEntry.Linkage.Flink;
  Blink = Enumerator->HashEntry.Linkage.Blink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Enumerator->HashEntry.Linkage.Flink->Blink != Enumerator
    || (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Blink->Flink != Enumerator )
  {
    __fastfail(3u);
  }
  Blink->Flink = v11;
  v11->Blink = Blink;
  v13 = Enumerator->ChainHead;
  if ( v13 != ChainHead )
  {
    if ( v13->Flink == v13 )
      --HashTable->NonEmptyBuckets;
    if ( ChainHead->Flink == ChainHead )
      ++HashTable->NonEmptyBuckets;
  }
  Enumerator->BucketIndex = v6;
  Enumerator->ChainHead = ChainHead;
  v14 = Flink->HashEntry.Linkage.Flink;
  Enumerator->HashEntry.Linkage.Flink = Flink->HashEntry.Linkage.Flink;
  Enumerator->HashEntry.Linkage.Blink = &Flink->HashEntry.Linkage;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)v14->Blink != Flink )
    __fastfail(3u);
  v14->Blink = &Enumerator->HashEntry.Linkage;
  result = &Flink->HashEntry;
  Flink->HashEntry.Linkage.Flink = &Enumerator->HashEntry.Linkage;
  return result;
}
