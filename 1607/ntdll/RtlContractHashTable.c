/*
 * XREFs of RtlContractHashTable @ 0x180086840
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpGetChainHead @ 0x18007515C (RtlpGetChainHead.c)
 */

BOOLEAN __cdecl RtlContractHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // edx
  unsigned int Pivot; // eax
  unsigned int DivisorMask; // eax
  __int64 **v6; // r9
  __int64 **ChainHead; // r10
  __int64 **i; // rcx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rdx
  __int64 *v12; // rdx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  void **Directory; // rsi
  __int64 v18; // rbx

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
  ChainHead = (__int64 **)RtlpGetChainHead((__int64)HashTable, HashTable->Pivot);
  --HashTable->TableSize;
  if ( *v6 != (__int64 *)v6 && *ChainHead != (__int64 *)ChainHead )
    --HashTable->NonEmptyBuckets;
  for ( i = ChainHead; ; *i = v9 )
  {
    v9 = *v6;
    if ( *v6 == (__int64 *)v6 )
      break;
    v10 = *v9;
    if ( (__int64 **)v9[1] != v6 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v6 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v6;
    if ( *i != (__int64 *)ChainHead )
    {
      do
      {
        v11 = *i;
        if ( (*i)[2] >= (unsigned __int64)v9[2] )
          break;
        i = (__int64 **)*i;
      }
      while ( (__int64 **)*v11 != ChainHead );
    }
    v12 = *i;
    if ( (__int64 **)(*i)[1] != i )
      __fastfail(3u);
    *v9 = (__int64)v12;
    v9[1] = (__int64)i;
    v12[1] = (__int64)v9;
  }
  v13 = HashTable->TableSize + 128;
  _BitScanReverse(&v14, v13);
  v15 = 1 << v14;
  v16 = v14 - 7;
  if ( v13 == v15 )
  {
    Directory = (void **)HashTable->Directory;
    v18 = v16;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Directory[v16]);
    Directory[v18] = 0LL;
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *Directory;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Directory);
    }
  }
  return 1;
}
