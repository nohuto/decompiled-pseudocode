/*
 * XREFs of LdrpAllocateModuleEntry @ 0x1800402B4
 * Callers:
 *     LdrpAllocatePlaceHolder @ 0x180040198 (LdrpAllocatePlaceHolder.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlGetActiveActivationContext @ 0x18003DCF0 (RtlGetActiveActivationContext.c)
 *     RtlAddRefActivationContext @ 0x18003E870 (RtlAddRefActivationContext.c)
 */

unsigned __int64 __fastcall LdrpAllocateModuleEntry(__int64 a1)
{
  unsigned __int64 Heap; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // ebp
  __int64 v6; // rsi
  volatile signed __int32 *v7; // rsi
  unsigned __int64 v8; // rax
  bool v9; // zf

  Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8u, 280LL);
  if ( Heap )
  {
    v3 = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8u, 80LL);
    v4 = v3;
    if ( v3 )
    {
      LOBYTE(v5) = 0;
      *(_QWORD *)(Heap + 152) = v3;
      if ( a1 )
      {
        *(_QWORD *)(Heap + 176) = a1;
        *(_DWORD *)(Heap + 272) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v5 = *(_DWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 48) = Heap;
        v6 = *(_QWORD *)(a1 + 40);
        if ( v6 )
        {
          v7 = *(volatile signed __int32 **)(v6 + 136);
          if ( v7 )
          {
            RtlAddRefActivationContext(v7);
            *(_QWORD *)(Heap + 136) = v7;
          }
        }
        else
        {
          RtlGetActiveActivationContext((_QWORD *)(Heap + 136));
          *(_DWORD *)(Heap + 268) = 4;
        }
      }
      *(_QWORD *)(Heap + 120) = Heap + 112;
      *(_QWORD *)(Heap + 112) = Heap + 112;
      v8 = Heap + 160;
      *(_QWORD *)(v4 + 8) = v4;
      *(_QWORD *)v4 = v4;
      *(_QWORD *)(Heap + 160) = v4;
      *(_QWORD *)(Heap + 168) = v4;
      if ( *(_QWORD *)v4 != v4 )
        __fastfail(3u);
      *(_QWORD *)v4 = v8;
      *(_QWORD *)(v4 + 8) = v8;
      *(_QWORD *)(Heap + 144) = 0LL;
      v9 = LdrInitState == 1;
      *(_DWORD *)(v4 + 24) = 1;
      *(_DWORD *)(Heap + 276) = 2;
      if ( v9 && (void *)qword_180143090 != NtCurrentTeb()->ClientId.UniqueThread )
        *(_DWORD *)(Heap + 104) |= 0x20u;
      if ( (v5 & 4) != 0 )
        *(_DWORD *)(Heap + 104) |= 0x10000000u;
      if ( (v5 & 0x40) == 0 )
        *(_DWORD *)(Heap + 104) |= 4u;
      *(_WORD *)(Heap + 108) = 6;
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0, Heap);
      return 0LL;
    }
  }
  return Heap;
}
