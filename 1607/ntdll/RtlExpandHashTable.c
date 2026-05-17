/*
 * XREFs of RtlExpandHashTable @ 0x18008B4E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpGetChainHead @ 0x18007516C (RtlpGetChainHead.c)
 *     RtlpAllocateSecondLevelDir @ 0x18007EF0C (RtlpAllocateSecondLevelDir.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

char __fastcall RtlExpandHashTable(__int64 a1)
{
  int v1; // edx
  unsigned int v3; // ecx
  int v4; // esi
  unsigned int v5; // ecx
  unsigned int v6; // esi
  _QWORD *v7; // rdi
  __int64 v8; // rbp
  unsigned int v9; // edx
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
  int v20; // edx
  __int64 v22; // rbp
  _QWORD *Heap; // rax
  _QWORD *v24; // rdi
  __int64 SecondLevelDir; // rax
  unsigned int v26; // [rsp+40h] [rbp+8h]

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 8388480 || *(_DWORD *)(a1 + 28) )
    return 0;
  _BitScanReverse(&v3, v1 + 128);
  v4 = 1 << v3;
  v5 = v3 - 7;
  v6 = (v1 + 128) ^ v4;
  v26 = v5;
  if ( v1 == 128 )
  {
    v22 = *(_QWORD *)(a1 + 32);
    Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x80uLL);
    v24 = Heap;
    if ( !Heap )
      return 0;
    memset(Heap, 0, 0x80uLL);
    v5 = v26;
    *v24 = v22;
    *(_QWORD *)(a1 + 32) = v24;
  }
  v7 = *(_QWORD **)(a1 + 32);
  v8 = v5;
  if ( !v7[v5] )
  {
    SecondLevelDir = RtlpAllocateSecondLevelDir(v5);
    if ( SecondLevelDir )
    {
      v7[v8] = SecondLevelDir;
      goto LABEL_5;
    }
    if ( *(_DWORD *)(a1 + 8) == 128 )
    {
      *(_QWORD *)(a1 + 32) = *v7;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v7);
    }
    return 0;
  }
LABEL_5:
  v9 = *(_DWORD *)(a1 + 12);
  ++*(_DWORD *)(a1 + 8);
  ChainHead = (_QWORD *)RtlpGetChainHead(a1, v9);
  ++*(_DWORD *)(a1 + 12);
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
      v16 = *(_DWORD *)(*v14 + 16LL) >> *(_DWORD *)(a1 + 4);
      if ( (((2 * *(_DWORD *)(a1 + 16)) | 1) & ((69069 * v16 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v16 + 12345) >> 16))) == *(_DWORD *)(a1 + 8) - 1 )
      {
        v17 = *v15;
        v18 = (_QWORD *)v15[1];
        if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v18 != v15 )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        v19 = (_QWORD *)v13[1];
        if ( (_QWORD *)*v19 != v13 )
          __fastfail(3u);
        *v15 = v13;
        v15[1] = v19;
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
      ++*(_DWORD *)(a1 + 24);
    if ( (_QWORD *)*v11 == v11 )
      --*(_DWORD *)(a1 + 24);
  }
  v20 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 12) == v20 + 1 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = (2 * v20) | 1;
  }
  return 1;
}
