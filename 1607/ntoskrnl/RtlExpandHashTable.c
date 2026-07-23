/*
 * XREFs of RtlExpandHashTable @ 0x14010F0E4
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x14007D144 (RtlpGetChainHead.c)
 *     RtlpAllocateSecondLevelDir @ 0x1400A7BF0 (RtlpAllocateSecondLevelDir.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

BOOLEAN __stdcall RtlExpandHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // edx
  unsigned int v3; // esi
  char v4; // cl
  __int64 v5; // rsi
  unsigned int v6; // ebp
  void **v7; // rdi
  unsigned int Pivot; // edx
  _QWORD *ChainHead; // rax
  _QWORD *v10; // r9
  __int64 v11; // r10
  _QWORD *v12; // rdx
  _QWORD *v13; // r10
  _QWORD *v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  unsigned int DivisorMask; // edx
  void *Directory; // r14
  _QWORD *PoolWithTag; // rax
  _QWORD *v23; // rdi
  PVOID SecondLevelDir; // rax

  TableSize = HashTable->TableSize;
  if ( TableSize == 8388480 || HashTable->NumEnumerators )
    return 0;
  _BitScanReverse(&v3, TableSize + 128);
  v4 = v3;
  v5 = v3 - 7;
  v6 = (TableSize + 128) ^ (1 << v4);
  if ( TableSize == 128 )
  {
    Directory = HashTable->Directory;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x62615448u);
    v23 = PoolWithTag;
    if ( !PoolWithTag )
      return 0;
    memset(PoolWithTag, 0, 0x80uLL);
    *v23 = Directory;
    HashTable->Directory = v23;
  }
  v7 = (void **)HashTable->Directory;
  if ( !v7[v5] )
  {
    SecondLevelDir = RtlpAllocateSecondLevelDir(v5);
    if ( SecondLevelDir )
    {
      v7[v5] = SecondLevelDir;
      goto LABEL_5;
    }
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *v7;
      ExFreePoolWithTag(v7, 0);
    }
    return 0;
  }
LABEL_5:
  Pivot = HashTable->Pivot;
  ++HashTable->TableSize;
  ChainHead = (_QWORD *)RtlpGetChainHead((__int64)HashTable, Pivot);
  ++HashTable->Pivot;
  v10 = ChainHead;
  v12 = (_QWORD *)(v11 + 16LL * v6);
  v12[1] = v12;
  *v12 = v12;
  if ( (_QWORD *)*ChainHead != ChainHead )
  {
    v13 = ChainHead;
    do
    {
      v14 = (_QWORD *)*v13;
      v15 = *(_DWORD *)(*v13 + 16LL) >> HashTable->Shift;
      if ( (((2 * HashTable->DivisorMask) | 1) & ((69069 * v15 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v15
                                                                                                 + 12345) >> 16))) == HashTable->TableSize - 1 )
      {
        v16 = *v14;
        v17 = (_QWORD *)v14[1];
        if ( *(_QWORD **)(*v14 + 8LL) != v14 || (_QWORD *)*v17 != v14 )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        v18 = (_QWORD *)v12[1];
        if ( (_QWORD *)*v18 != v12 )
          __fastfail(3u);
        *v14 = v12;
        v14[1] = v18;
        *v18 = v14;
        v12[1] = v14;
      }
      else
      {
        v13 = (_QWORD *)*v13;
      }
    }
    while ( (_QWORD *)*v13 != v10 );
    if ( (_QWORD *)*v12 != v12 )
      ++HashTable->NonEmptyBuckets;
    if ( (_QWORD *)*v10 == v10 )
      --HashTable->NonEmptyBuckets;
  }
  DivisorMask = HashTable->DivisorMask;
  if ( HashTable->Pivot == DivisorMask + 1 )
  {
    HashTable->Pivot = 0;
    HashTable->DivisorMask = (2 * DivisorMask) | 1;
  }
  return 1;
}
