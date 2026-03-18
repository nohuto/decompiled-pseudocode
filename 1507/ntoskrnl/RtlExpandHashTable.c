/*
 * XREFs of RtlExpandHashTable @ 0x140135DE8
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x14002D164 (RtlpGetChainHead.c)
 *     RtlpAllocateSecondLevelDir @ 0x14011F60C (RtlpAllocateSecondLevelDir.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

BOOLEAN __stdcall RtlExpandHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // eax
  unsigned int v3; // ebp
  __int64 v4; // rsi
  void **v5; // rdi
  unsigned int Pivot; // edx
  _QWORD *ChainHead; // rax
  int v8; // r11d
  int v9; // edx
  unsigned int v10; // ecx
  _QWORD *v11; // r10
  __int64 v12; // r9
  _QWORD *v13; // rdx
  _QWORD *v14; // r9
  _QWORD *v15; // r8
  int v16; // eax
  unsigned int DivisorMask; // edx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 SecondLevelDir; // rax
  void *Directory; // r14
  _QWORD *PoolWithTag; // rax
  _QWORD *v25; // rdi

  TableSize = HashTable->TableSize;
  if ( TableSize == 0x10000 || HashTable->NumEnumerators )
    return 0;
  v3 = HashTable->TableSize & 0x7F;
  v4 = TableSize >> 7;
  if ( TableSize == 128 )
  {
    Directory = HashTable->Directory;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x62615448u);
    v25 = PoolWithTag;
    if ( !PoolWithTag )
      return 0;
    memset(PoolWithTag, 0, 0x1000uLL);
    *v25 = Directory;
    HashTable->Directory = v25;
  }
  v5 = (void **)HashTable->Directory;
  if ( !v5[v4] )
  {
    SecondLevelDir = RtlpAllocateSecondLevelDir();
    if ( SecondLevelDir )
    {
      v5[v4] = (void *)SecondLevelDir;
      goto LABEL_5;
    }
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *v5;
      ExFreePoolWithTag(v5, 0);
    }
    return 0;
  }
LABEL_5:
  Pivot = HashTable->Pivot;
  ++HashTable->TableSize;
  ChainHead = (_QWORD *)RtlpGetChainHead((__int64)HashTable, Pivot);
  v10 = v9 + 1;
  v11 = ChainHead;
  v13 = (_QWORD *)(v12 + 16LL * v3);
  HashTable->Pivot = v10;
  if ( (_QWORD *)*ChainHead != ChainHead )
  {
    v14 = ChainHead;
    do
    {
      v15 = (_QWORD *)*v14;
      v16 = *(_DWORD *)(*v14 + 16LL) >> HashTable->Shift;
      if ( ((v8 | (2 * HashTable->DivisorMask)) & ((v8 + 69069 * v16) & 0xFFFF0000 | ((unsigned int)(1103515245 * v16 + 12345) >> 16))) == HashTable->TableSize - v8 )
      {
        v19 = *v15;
        v20 = (_QWORD *)v15[1];
        if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v20 != v15 )
          __fastfail(3u);
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        v21 = (_QWORD *)v13[1];
        *v15 = v13;
        v15[1] = v21;
        if ( (_QWORD *)*v21 != v13 )
          __fastfail(3u);
        *v21 = v15;
        v13[1] = v15;
      }
      else
      {
        v14 = (_QWORD *)*v14;
      }
    }
    while ( (_QWORD *)*v14 != v11 );
    if ( (_QWORD *)*v13 != v13 )
      HashTable->NonEmptyBuckets += v8;
    if ( (_QWORD *)*v11 == v11 )
      --HashTable->NonEmptyBuckets;
  }
  DivisorMask = HashTable->DivisorMask;
  if ( HashTable->Pivot == DivisorMask + 1 )
  {
    HashTable->Pivot = 0;
    HashTable->DivisorMask = v8 | (2 * DivisorMask);
  }
  return v8;
}
