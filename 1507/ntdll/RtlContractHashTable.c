/*
 * XREFs of RtlContractHashTable @ 0x180074EC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlpGetChainHead @ 0x180065834 (RtlpGetChainHead.c)
 */

BOOLEAN __cdecl RtlContractHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
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
  unsigned int v15; // ecx
  void **Directory; // rsi
  __int64 v17; // rbx

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
  v15 = HashTable->TableSize >> 7;
  if ( (HashTable->TableSize & 0x7F) == 0 )
  {
    Directory = (void **)HashTable->Directory;
    v17 = v15;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Directory[v15]);
    Directory[v17] = 0LL;
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *Directory;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Directory);
    }
  }
  return 1;
}
