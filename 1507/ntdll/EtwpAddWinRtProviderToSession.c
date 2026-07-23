/*
 * XREFs of EtwpAddWinRtProviderToSession @ 0x1800028B8
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1800027E4 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlCompareMemory @ 0x180095EE0 (RtlCompareMemory.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall EtwpAddWinRtProviderToSession(__int64 a1, const void **a2, _QWORD *a3)
{
  SIZE_T v3; // r13
  __int64 *v4; // r14
  __int64 *v5; // rbx
  unsigned int v6; // edi
  SIZE_T v10; // rcx
  __int64 *v11; // rsi
  __int64 *i; // rax
  __int64 v13; // rcx
  _OWORD *Heap; // rax
  __int64 v15; // rcx
  char *v17; // rsi
  __int64 *v18; // rbx
  _OWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax

  v3 = *(unsigned __int16 *)a2;
  v4 = (__int64 *)(a1 + 488);
  v5 = *(__int64 **)(a1 + 488);
  v6 = 0;
  if ( v5 != (__int64 *)(a1 + 488) )
  {
    v10 = v3 + 2;
    do
    {
      if ( *((_DWORD *)v5 + 10) == v10 )
      {
        if ( RtlCompareMemory((char *)v5 + 44, a2[1], v3) == v3 )
        {
          v11 = v5 + 3;
          for ( i = (__int64 *)v5[3]; i != v11; i = (__int64 *)*i )
          {
            v13 = *a3 - i[2];
            if ( *a3 == i[2] )
              v13 = a3[1] - i[3];
            if ( !v13 )
              return v6;
          }
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
          if ( Heap )
          {
            Heap[1] = *(_OWORD *)a3;
            v15 = *v11;
            *(_QWORD *)Heap = *v11;
            *((_QWORD *)Heap + 1) = v11;
            if ( *(__int64 **)(v15 + 8) != v11 )
              __fastfail(3u);
            *(_QWORD *)(v15 + 8) = Heap;
            *v11 = (__int64)Heap;
            ++*((_DWORD *)v5 + 4);
            goto LABEL_14;
          }
          return 14;
        }
        v10 = v3 + 2;
      }
      v5 = (__int64 *)*v5;
    }
    while ( v5 != v4 );
  }
  v17 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v3 + 46));
  if ( !v17 )
    return 14;
  *((_DWORD *)v17 + 10) = v3 + 2;
  memmove(v17 + 44, a2[1], v3);
  v18 = (__int64 *)(v17 + 24);
  *(_WORD *)&v17[v3 + 44] = 0;
  *((_QWORD *)v17 + 4) = v17 + 24;
  *((_QWORD *)v17 + 3) = v17 + 24;
  *((_DWORD *)v17 + 4) = 0;
  v19 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  if ( !v19 )
    return 14;
  v19[1] = *(_OWORD *)a3;
  v20 = *v18;
  *(_QWORD *)v19 = *v18;
  *((_QWORD *)v19 + 1) = v18;
  if ( *(__int64 **)(v20 + 8) != v18 )
    __fastfail(3u);
  *(_QWORD *)(v20 + 8) = v19;
  *v18 = (__int64)v19;
  *((_DWORD *)v17 + 4) = 1;
  *(_DWORD *)(a1 + 340) |= 0x10u;
  v21 = *v4;
  *(_QWORD *)v17 = *v4;
  *((_QWORD *)v17 + 1) = v4;
  if ( *(__int64 **)(v21 + 8) != v4 )
    __fastfail(3u);
  *(_QWORD *)(v21 + 8) = v17;
  *v4 = (__int64)v17;
LABEL_14:
  *(_DWORD *)(a1 + 340) |= 0x10u;
  return v6;
}
