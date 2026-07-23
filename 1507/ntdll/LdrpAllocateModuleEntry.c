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

char *__fastcall LdrpAllocateModuleEntry(__int64 a1)
{
  char *Heap; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  int v5; // ebp
  __int64 v6; // rsi
  _ACTIVATION_CONTEXT *v7; // rsi
  char *v8; // rax
  bool v9; // zf

  Heap = (char *)RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, 0x118uLL);
  if ( Heap )
  {
    v3 = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, 0x50uLL);
    v4 = v3;
    if ( v3 )
    {
      LOBYTE(v5) = 0;
      *((_QWORD *)Heap + 19) = v3;
      if ( a1 )
      {
        *((_QWORD *)Heap + 22) = a1;
        *((_DWORD *)Heap + 68) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v5 = *(_DWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 48) = Heap;
        v6 = *(_QWORD *)(a1 + 40);
        if ( v6 )
        {
          v7 = *(_ACTIVATION_CONTEXT **)(v6 + 136);
          if ( v7 )
          {
            RtlAddRefActivationContext(v7);
            *((_QWORD *)Heap + 17) = v7;
          }
        }
        else
        {
          RtlGetActiveActivationContext((PACTIVATION_CONTEXT)(Heap + 136));
          *((_DWORD *)Heap + 67) = 4;
        }
      }
      *((_QWORD *)Heap + 15) = Heap + 112;
      *((_QWORD *)Heap + 14) = Heap + 112;
      v8 = Heap + 160;
      v4[1] = v4;
      *v4 = v4;
      *((_QWORD *)Heap + 20) = v4;
      *((_QWORD *)Heap + 21) = v4;
      if ( (_QWORD *)*v4 != v4 )
        __fastfail(3u);
      *v4 = v8;
      v4[1] = v8;
      *((_QWORD *)Heap + 18) = 0LL;
      v9 = LdrInitState == 1;
      *((_DWORD *)v4 + 6) = 1;
      *((_DWORD *)Heap + 69) = 2;
      if ( v9 && LdrpDllNotificationLock.OwningThread != NtCurrentTeb()->ClientId.UniqueThread )
        *((_DWORD *)Heap + 26) |= 0x20u;
      if ( (v5 & 4) != 0 )
        *((_DWORD *)Heap + 26) |= 0x10000000u;
      if ( (v5 & 0x40) == 0 )
        *((_DWORD *)Heap + 26) |= 4u;
      *((_WORD *)Heap + 54) = 6;
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0, Heap);
      return 0LL;
    }
  }
  return Heap;
}
