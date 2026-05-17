/*
 * XREFs of RtlContractHashTable @ 0x180086850
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpGetChainHead @ 0x18007516C (RtlpGetChainHead.c)
 */

char __fastcall RtlContractHashTable(__int64 a1)
{
  int v1; // edx
  int v4; // eax
  int v5; // eax
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
  _QWORD *v17; // rsi
  __int64 v18; // rbx

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 128 || *(_DWORD *)(a1 + 28) )
    return 0;
  v4 = *(_DWORD *)(a1 + 12);
  if ( v4 )
  {
    v5 = v4 - 1;
  }
  else
  {
    *(_DWORD *)(a1 + 16) >>= 1;
    v5 = *(_DWORD *)(a1 + 16);
  }
  *(_DWORD *)(a1 + 12) = v5;
  RtlpGetChainHead(a1, v1 - 1);
  ChainHead = (__int64 **)RtlpGetChainHead(a1, *(_DWORD *)(a1 + 12));
  --*(_DWORD *)(a1 + 8);
  if ( *v6 != (__int64 *)v6 && *ChainHead != (__int64 *)ChainHead )
    --*(_DWORD *)(a1 + 24);
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
  v13 = *(_DWORD *)(a1 + 8) + 128;
  _BitScanReverse(&v14, v13);
  v15 = 1 << v14;
  v16 = v14 - 7;
  if ( v13 == v15 )
  {
    v17 = *(_QWORD **)(a1 + 32);
    v18 = v16;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v17[v16]);
    v17[v18] = 0LL;
    if ( *(_DWORD *)(a1 + 8) == 128 )
    {
      *(_QWORD *)(a1 + 32) = *v17;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v17);
    }
  }
  return 1;
}
