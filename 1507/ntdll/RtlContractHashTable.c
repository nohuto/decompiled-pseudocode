/*
 * XREFs of RtlContractHashTable @ 0x180074EC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlpGetChainHead @ 0x180065834 (RtlpGetChainHead.c)
 */

char __fastcall RtlContractHashTable(__int64 a1)
{
  int v1; // r9d
  int v4; // eax
  int v5; // eax
  _QWORD *ChainHead; // rax
  __int64 **v7; // r10
  int v8; // r9d
  _QWORD *v9; // rdx
  __int64 *i; // rcx
  __int64 *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // r8
  __int64 v14; // r8
  unsigned int v15; // ecx
  _QWORD *v16; // rsi
  __int64 v17; // rbx

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
  ChainHead = (_QWORD *)RtlpGetChainHead(a1, *(_DWORD *)(a1 + 12));
  *(_DWORD *)(a1 + 8) = v8;
  v9 = ChainHead;
  if ( *v7 != (__int64 *)v7 && (_QWORD *)*ChainHead != ChainHead )
    --*(_DWORD *)(a1 + 24);
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
  v15 = *(_DWORD *)(a1 + 8) >> 7;
  if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 0 )
  {
    v16 = *(_QWORD **)(a1 + 32);
    v17 = v15;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16[v15]);
    v16[v17] = 0LL;
    if ( *(_DWORD *)(a1 + 8) == 128 )
    {
      *(_QWORD *)(a1 + 32) = *v16;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v16);
    }
  }
  return 1;
}
