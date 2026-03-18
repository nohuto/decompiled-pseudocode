/*
 * XREFs of RtlContractHashTable @ 0x1400D93F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x140006D94 (RtlpGetChainHead.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall RtlContractHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // edx
  unsigned int Pivot; // eax
  unsigned int DivisorMask; // eax
  _QWORD *ChainHead; // rax
  __int64 **v7; // r9
  _QWORD *v8; // r10
  __int64 *i; // rcx
  __int64 *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  __int64 v13; // rdx
  unsigned int v14; // edx
  unsigned int v15; // ecx
  int v16; // eax
  __int64 v17; // rcx
  void **Directory; // rsi
  PVOID *v19; // rdi

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
  --HashTable->TableSize;
  v8 = ChainHead;
  if ( *v7 != (__int64 *)v7 && (_QWORD *)*ChainHead != ChainHead )
    --HashTable->NonEmptyBuckets;
  for ( i = ChainHead; ; *i = (__int64)v10 )
  {
    v10 = *v7;
    if ( *v7 == (__int64 *)v7 )
      break;
    v11 = *v10;
    if ( (__int64 **)v10[1] != v7 || *(__int64 **)(v11 + 8) != v10 )
      __fastfail(3u);
    *v7 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v7;
    if ( (_QWORD *)*i != v8 )
    {
      do
      {
        v12 = (_QWORD *)*i;
        if ( *(_QWORD *)(*i + 16) >= (unsigned __int64)v10[2] )
          break;
        i = (__int64 *)*i;
      }
      while ( (_QWORD *)*v12 != v8 );
    }
    v13 = *i;
    *v10 = *i;
    v10[1] = (__int64)i;
    if ( *(__int64 **)(v13 + 8) != i )
      __fastfail(3u);
    *(_QWORD *)(v13 + 8) = v10;
  }
  v14 = HashTable->TableSize + 128;
  _BitScanReverse(&v15, v14);
  v16 = 1 << v15;
  v17 = v15 - 7;
  if ( v14 == v16 )
  {
    Directory = (void **)HashTable->Directory;
    v19 = &Directory[v17];
    ExFreePoolWithTag(*v19, 0);
    *v19 = 0LL;
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *Directory;
      ExFreePoolWithTag(Directory, 0);
    }
  }
  return 1;
}
