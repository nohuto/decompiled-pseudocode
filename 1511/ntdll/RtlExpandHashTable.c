/*
 * XREFs of RtlExpandHashTable @ 0x18006F900
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlpGetChainHead @ 0x18006FD6C (RtlpGetChainHead.c)
 *     RtlpAllocateSecondLevelDir @ 0x18006FF60 (RtlpAllocateSecondLevelDir.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

BOOLEAN __cdecl RtlExpandHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // edx
  unsigned int v3; // ecx
  int v4; // esi
  unsigned int v5; // ecx
  unsigned int v6; // esi
  void **v7; // rdi
  __int64 v8; // rbp
  __int64 Pivot; // rdx
  _QWORD *ChainHead; // rax
  _QWORD *v11; // r9
  __int64 v12; // r10
  _QWORD *v13; // rdx
  _QWORD *v14; // r10
  _QWORD *v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  unsigned int DivisorMask; // edx
  void *Directory; // rbp
  _QWORD *Heap; // rax
  _QWORD *v24; // rdi
  __int64 SecondLevelDir; // rax
  unsigned int v26; // [rsp+40h] [rbp+8h]

  TableSize = HashTable->TableSize;
  if ( TableSize == 8388480 || HashTable->NumEnumerators )
    return 0;
  _BitScanReverse(&v3, TableSize + 128);
  v4 = 1 << v3;
  v5 = v3 - 7;
  v6 = (TableSize + 128) ^ v4;
  v26 = v5;
  if ( TableSize == 128 )
  {
    Directory = HashTable->Directory;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x80uLL);
    v24 = Heap;
    if ( !Heap )
      return 0;
    memset(Heap, 0, 0x80uLL);
    v5 = v26;
    *v24 = Directory;
    HashTable->Directory = v24;
  }
  v7 = (void **)HashTable->Directory;
  v8 = v5;
  if ( !v7[v5] )
  {
    SecondLevelDir = RtlpAllocateSecondLevelDir();
    if ( SecondLevelDir )
    {
      v7[v8] = (void *)SecondLevelDir;
      goto LABEL_5;
    }
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *v7;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    }
    return 0;
  }
LABEL_5:
  Pivot = HashTable->Pivot;
  ++HashTable->TableSize;
  ChainHead = (_QWORD *)RtlpGetChainHead(HashTable, Pivot);
  ++HashTable->Pivot;
  v11 = ChainHead;
  v13 = (_QWORD *)(v12 + 16LL * v6);
  v13[1] = v13;
  *v13 = v13;
  if ( (_QWORD *)*ChainHead != ChainHead )
  {
    v14 = ChainHead;
    do
    {
      v15 = (_QWORD *)*v14;
      v16 = *(_DWORD *)(*v14 + 16LL) >> HashTable->Shift;
      if ( (((2 * HashTable->DivisorMask) | 1) & ((69069 * v16 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v16
                                                                                                 + 12345) >> 16))) == HashTable->TableSize - 1 )
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
      ++HashTable->NonEmptyBuckets;
    if ( (_QWORD *)*v11 == v11 )
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
