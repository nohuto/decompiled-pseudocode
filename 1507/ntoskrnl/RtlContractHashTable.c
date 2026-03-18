/*
 * XREFs of RtlContractHashTable @ 0x14010DE30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x14002D164 (RtlpGetChainHead.c)
 *     RtlpSecondLevelDirFreeUsingFreeList @ 0x140130D38 (RtlpSecondLevelDirFreeUsingFreeList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall RtlContractHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // r9d
  unsigned int Pivot; // eax
  unsigned int DivisorMask; // eax
  _QWORD *ChainHead; // rax
  __int64 **v7; // r10
  unsigned int v8; // r9d
  _QWORD *v9; // rdx
  __int64 *i; // rcx
  __int64 *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // r8
  __int64 v14; // r8
  void **Directory; // rsi
  void **v16; // rdi

  TableSize = HashTable->TableSize;
  if ( TableSize == 128 || HashTable->NumEnumerators )
    return 0;
  Pivot = HashTable->Pivot;
  if ( Pivot )
  {
    DivisorMask = Pivot - 1;
  }
  else
  {
    HashTable->DivisorMask >>= 1;
    DivisorMask = HashTable->DivisorMask;
  }
  HashTable->Pivot = DivisorMask;
  RtlpGetChainHead((__int64)HashTable, TableSize - 1);
  ChainHead = (_QWORD *)RtlpGetChainHead((__int64)HashTable, HashTable->Pivot);
  HashTable->TableSize = v8;
  v9 = ChainHead;
  if ( *v7 != (__int64 *)v7 && (_QWORD *)*ChainHead != ChainHead )
    --HashTable->NonEmptyBuckets;
  for ( i = ChainHead; ; *i = (__int64)v11 )
  {
    v11 = *v7;
    if ( *v7 == (__int64 *)v7 )
      break;
    v12 = *v11;
    if ( (__int64 **)v11[1] != v7 || *(__int64 **)(v12 + 8) != v11 )
      __fastfail(3u);
    *v7 = (__int64 *)v12;
    *(_QWORD *)(v12 + 8) = v7;
    if ( (_QWORD *)*i != v9 )
    {
      do
      {
        v13 = (_QWORD *)*i;
        if ( *(_QWORD *)(*i + 16) >= (unsigned __int64)v11[2] )
          break;
        i = (__int64 *)*i;
      }
      while ( (_QWORD *)*v13 != v9 );
    }
    v14 = *i;
    *v11 = *i;
    v11[1] = (__int64)i;
    if ( *(__int64 **)(v14 + 8) != i )
      __fastfail(3u);
    *(_QWORD *)(v14 + 8) = v11;
  }
  if ( (HashTable->TableSize & 0x7F) == 0 )
  {
    Directory = (void **)HashTable->Directory;
    v16 = &Directory[HashTable->TableSize >> 7];
    RtlpSecondLevelDirFreeUsingFreeList(*v16, v9);
    *v16 = 0LL;
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *Directory;
      ExFreePoolWithTag(Directory, 0);
    }
  }
  return 1;
}
