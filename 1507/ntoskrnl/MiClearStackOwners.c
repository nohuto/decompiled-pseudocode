/*
 * XREFs of MiClearStackOwners @ 0x140024ED4
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400219C0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MiDeleteKernelStack @ 0x14002517C (MiDeleteKernelStack.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiClearStackOwners(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r12d
  int v3; // r15d
  __int64 v4; // rdi
  int v5; // eax
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rdi
  unsigned __int64 Process; // rcx
  __int64 v9; // r9
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r10
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // ebp
  __int64 v19; // rsi
  __int64 v20; // r10
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v2 = 1;
  v3 = -1;
  if ( (a2 & 1) != 0 )
  {
    v4 = a1 - 144;
    v5 = 18;
  }
  else
  {
    v4 = a1 - 8LL * (unsigned __int8)byte_14034F5F8;
    v5 = (unsigned __int8)byte_14034F5F8;
  }
  v6 = v4 + 8LL * (unsigned int)(v5 + 1);
  v7 = v4 + 8;
  if ( v7 < v6 )
  {
    Process = 0x90482413000LL;
    v9 = 0LL;
    v10 = v7 + 0x90482413000LL;
    do
    {
      v11 = *(_QWORD *)v7;
      if ( v10 <= 0x7F8 )
      {
        if ( (unsigned int)MiPteHasShadow(0x90482413000LL, a2)
          && (v11 & 1) != 0
          && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
        {
          a2 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( a2 )
          {
            v13 = *(_QWORD *)(a2 + 8 * (v12 & (v7 >> 3)));
            if ( (v13 & 0x20) != 0 )
              v11 |= 0x20uLL;
            if ( (v13 & 0x42) != 0 )
              v11 |= 0x42uLL;
          }
        }
        Process = 0x90482413000LL;
      }
      v24 = v11;
      if ( (v11 & 1) != 0 )
      {
        v14 = v11;
        if ( (unsigned __int64)&STACK[0x90482413050] <= 0x7F8
          && (unsigned int)MiPteHasShadow(0x90482413000LL, v11)
          && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v16 = *(_QWORD *)(Process + 1520);
          if ( v16 )
          {
            v17 = *(_QWORD *)(v16 + 8 * (v15 & ((unsigned __int64)&v24 >> 3)));
            if ( (v17 & 0x20) != 0 )
              v14 |= 0x20uLL;
            if ( (v17 & 0x42) != 0 )
              v14 |= 0x42uLL;
          }
        }
        v18 = v9;
        v19 = 48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v18);
            Process = 0x8000000000000000uLL;
          }
          while ( *(__int64 *)(v19 + 24) < 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
          v9 = 0LL;
        }
        a2 = *(_QWORD *)v7;
        if ( v10 <= 0x7F8
          && (unsigned int)MiPteHasShadow(Process, a2)
          && (a2 & 1) != 0
          && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
        {
          v21 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 8 * (v20 & (v7 >> 3)));
            if ( (v22 & 0x20) != 0 )
              a2 |= 0x20uLL;
            if ( (v22 & 0x42) != 0 )
              a2 |= 0x42uLL;
          }
        }
        if ( v11 == a2 )
        {
          if ( v3 == -1 )
          {
            v3 = (unsigned __int8)HIBYTE(*(_QWORD *)(v19 + 40)) >> 2;
          }
          else if ( v3 != (unsigned __int8)HIBYTE(*(_QWORD *)(v19 + 40)) >> 2 )
          {
            v2 = v9;
          }
          v7 += 8LL;
          *(_QWORD *)v19 = v9;
          v10 += 8LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v7 += 8LL;
        v10 += 8LL;
      }
      Process = 0x90482413000LL;
    }
    while ( v7 < v6 );
  }
  return v2;
}
