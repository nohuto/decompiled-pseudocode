/*
 * XREFs of RtlExpandHashTable @ 0x1800653C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlpGetChainHead @ 0x180065834 (RtlpGetChainHead.c)
 *     RtlpAllocateSecondLevelDir @ 0x180065980 (RtlpAllocateSecondLevelDir.c)
 *     memset @ 0x180098540 (memset.c)
 */

BOOLEAN __cdecl RtlExpandHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // eax
  unsigned int v3; // ebp
  __int64 v4; // rsi
  void **v5; // rdi
  __int64 Pivot; // rdx
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
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  unsigned int DivisorMask; // edx
  void *Directory; // r14
  _QWORD *Heap; // rax
  _QWORD *v24; // rdi
  __int64 SecondLevelDir; // rax

  TableSize = HashTable->TableSize;
  if ( TableSize == 0x10000 || HashTable->NumEnumerators )
    return 0;
  v3 = HashTable->TableSize & 0x7F;
  v4 = TableSize >> 7;
  if ( TableSize == 128 )
  {
    Directory = HashTable->Directory;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
    v24 = Heap;
    if ( !Heap )
      return 0;
    memset(Heap, 0, 0x1000uLL);
    *v24 = Directory;
    HashTable->Directory = v24;
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
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
    return 0;
  }
LABEL_5:
  Pivot = HashTable->Pivot;
  ++HashTable->TableSize;
  ChainHead = (_QWORD *)RtlpGetChainHead(HashTable, Pivot);
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
        v17 = *v15;
        v18 = (_QWORD *)v15[1];
        if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v18 != v15 )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        v19 = (_QWORD *)v13[1];
        *v15 = v13;
        v15[1] = v19;
        if ( (_QWORD *)*v19 != v13 )
          __fastfail(3u);
        *v19 = v15;
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
