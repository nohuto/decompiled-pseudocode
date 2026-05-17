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

char __fastcall RtlExpandHashTable(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v3; // ebp
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  _QWORD *ChainHead; // rax
  int v8; // r11d
  int v9; // edx
  int v10; // ecx
  _QWORD *v11; // r10
  __int64 v12; // r9
  _QWORD *v13; // rdx
  _QWORD *v14; // r9
  _QWORD *v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  int v20; // edx
  __int64 v22; // r14
  _QWORD *Heap; // rax
  _QWORD *v24; // rdi
  __int64 SecondLevelDir; // rax

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 0x10000 || *(_DWORD *)(a1 + 28) )
    return 0;
  v3 = *(_DWORD *)(a1 + 8) & 0x7F;
  v4 = v1 >> 7;
  if ( v1 == 128 )
  {
    v22 = *(_QWORD *)(a1 + 32);
    Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 4096LL);
    v24 = Heap;
    if ( !Heap )
      return 0;
    memset(Heap, 0, 0x1000uLL);
    *v24 = v22;
    *(_QWORD *)(a1 + 32) = v24;
  }
  v5 = *(_QWORD **)(a1 + 32);
  if ( !v5[v4] )
  {
    SecondLevelDir = RtlpAllocateSecondLevelDir();
    if ( SecondLevelDir )
    {
      v5[v4] = SecondLevelDir;
      goto LABEL_5;
    }
    if ( *(_DWORD *)(a1 + 8) == 128 )
    {
      *(_QWORD *)(a1 + 32) = *v5;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v5);
    }
    return 0;
  }
LABEL_5:
  v6 = *(unsigned int *)(a1 + 12);
  ++*(_DWORD *)(a1 + 8);
  ChainHead = (_QWORD *)RtlpGetChainHead(a1, v6);
  v10 = v9 + 1;
  v11 = ChainHead;
  v13 = (_QWORD *)(v12 + 16LL * v3);
  *(_DWORD *)(a1 + 12) = v10;
  if ( (_QWORD *)*ChainHead != ChainHead )
  {
    v14 = ChainHead;
    do
    {
      v15 = (_QWORD *)*v14;
      v16 = *(_DWORD *)(*v14 + 16LL) >> *(_DWORD *)(a1 + 4);
      if ( ((v8 | (2 * *(_DWORD *)(a1 + 16))) & ((v8 + 69069 * v16) & 0xFFFF0000 | ((unsigned int)(1103515245 * v16
                                                                                                 + 12345) >> 16))) == *(_DWORD *)(a1 + 8) - v8 )
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
      *(_DWORD *)(a1 + 24) += v8;
    if ( (_QWORD *)*v11 == v11 )
      --*(_DWORD *)(a1 + 24);
  }
  v20 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 12) == v20 + 1 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = v8 | (2 * v20);
  }
  return v8;
}
