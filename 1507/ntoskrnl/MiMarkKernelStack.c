/*
 * XREFs of MiMarkKernelStack @ 0x14006ABCC
 * Callers:
 *     MiAllocateKernelStackPages @ 0x140069190 (MiAllocateKernelStackPages.c)
 *     MiMarkBootKernelStack @ 0x1407D4164 (MiMarkBootKernelStack.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiMarkKernelStack(unsigned __int64 Process, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // ebp
  __int64 v16; // rdi
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  if ( Process < a2 )
  {
    v4 = a2;
    v5 = Process;
    v6 = 0x7FFFFFFFFFFFFFFFLL;
    do
    {
      v7 = *(_QWORD *)v5;
      if ( v5 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, a2)
        && (v7 & 1) != 0
        && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v9 = *(_QWORD *)(Process + 1520);
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 8 * (v8 & (v5 >> 3)));
          if ( (v10 & 0x20) != 0 )
            v7 |= 0x20uLL;
          if ( (v10 & 0x42) != 0 )
            v7 |= 0x42uLL;
        }
      }
      v21 = v7;
      v11 = v7;
      if ( (unsigned __int64)&STACK[0x90482413050] <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v7)
        && (v7 & 1) != 0
        && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v13 = *(_QWORD *)(Process + 1520);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 8 * (v12 & ((unsigned __int64)&v21 >> 3)));
          if ( (v14 & 0x20) != 0 )
            v11 |= 0x20uLL;
          if ( (v14 & 0x42) != 0 )
            v11 |= 0x42uLL;
        }
      }
      v15 = 0;
      v16 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v15);
          Process = 0x8000000000000000uLL;
        }
        while ( *(__int64 *)(v16 + 24) < 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) );
        v6 = 0x7FFFFFFFFFFFFFFFLL;
      }
      a2 = *(_QWORD *)v5;
      if ( v5 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, a2)
        && (a2 & 1) != 0
        && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v18 = *(_QWORD *)(Process + 1520);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 8 * (v17 & (v5 >> 3)));
          if ( (v19 & 0x20) != 0 )
            a2 |= 0x20uLL;
          if ( (v19 & 0x42) != 0 )
            a2 |= 0x42uLL;
        }
      }
      if ( v7 == a2 )
      {
        v20 = *(_QWORD *)(v16 + 40);
        *(_QWORD *)(v16 + 16) |= 0x3E0uLL;
        Process = 0x80000000000000LL;
        *(_QWORD *)v16 = a3;
        *(_QWORD *)(v16 + 40) = v20 & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
        *(_BYTE *)(v16 + 35) = *(_BYTE *)(v16 + 35) & 0xF8 | 5;
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), v6);
        v5 += 8LL;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), v6);
      }
    }
    while ( v5 < v4 );
  }
}
