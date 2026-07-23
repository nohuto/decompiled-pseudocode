/*
 * XREFs of EtwpAddBinaryInfoEvents @ 0x180002C38
 * Callers:
 *     EtwpAddProviderTrackingInfo @ 0x180009E9C (EtwpAddProviderTrackingInfo.c)
 * Callees:
 *     EtwpAddEventToBuffer @ 0x180002D8C (EtwpAddEventToBuffer.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall EtwpAddBinaryInfoEvents(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rdi
  int v4; // r15d
  int v5; // ebp
  __int64 *v6; // r10
  unsigned int v7; // r9d
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // edx
  _DWORD *Heap; // rsi
  __int64 *v13; // rbx
  unsigned int v14; // r14d
  __int64 *i; // rcx
  __int64 v17; // rax
  int v18; // [rsp+80h] [rbp+18h] BYREF

  v3 = (__int64 *)(a1 + 488);
  v4 = a3 - *(_DWORD *)(a2 + 48);
  v5 = 0;
  v6 = *(__int64 **)(a1 + 488);
  v7 = 0;
  while ( v6 != v3 )
  {
    v9 = *((_DWORD *)v6 + 4);
    v10 = *((_DWORD *)v6 + 10);
    v6 = (__int64 *)*v6;
    v11 = 16 * v9 + v10 + 4;
    if ( v7 <= v11 )
      v7 = v11;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v7);
  if ( Heap )
  {
    v13 = (__int64 *)*v3;
    while ( v13 != v3 )
    {
      *Heap = *((_DWORD *)v13 + 4);
      v14 = 1;
      for ( i = (__int64 *)v13[3]; i != v13 + 3; i = (__int64 *)*i )
      {
        v17 = v14 * 4;
        v14 += 4;
        *(_OWORD *)((char *)Heap + v17) = *((_OWORD *)i + 1);
      }
      memmove(&Heap[v14], (char *)v13 + 44, *((unsigned int *)v13 + 10));
      v5 = EtwpAddEventToBuffer(a2, 67LL, a2 + 88, Heap, v14 * 4 + *((_DWORD *)v13 + 10), v4, &v18);
      if ( v5 < 0 )
        break;
      v13 = (__int64 *)*v13;
      v4 -= (v18 + 7) & 0xFFFFFFF8;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
