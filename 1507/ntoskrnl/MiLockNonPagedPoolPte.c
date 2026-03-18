/*
 * XREFs of MiLockNonPagedPoolPte @ 0x140116F58
 * Callers:
 *     MiProbeLockFrame @ 0x140034AC0 (MiProbeLockFrame.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x1400478A0 (MiInsertNonPagedPoolOnSlist.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiLockNonPagedPoolPte(_KPROCESS *Process, unsigned __int64 a2)
{
  unsigned __int8 *v2; // r13
  _KPROCESS *v3; // r14
  unsigned __int64 p_ReadyListHead; // r12
  unsigned __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v15; // esi
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v2 = (unsigned __int8 *)a2;
  v3 = Process;
  p_ReadyListHead = (unsigned __int64)&Process[0x32BC88773LL].ReadyListHead;
  while ( 1 )
  {
    v5 = *(_QWORD *)&v3->Header.Lock;
    if ( p_ReadyListHead <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, a2)
      && (v5 & 1) != 0
      && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v7 = *(_QWORD *)&Process[2].ProcessLock;
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 8 * (v6 & ((unsigned __int64)v3 >> 3)));
        if ( (v8 & 0x20) != 0 )
          v5 |= 0x20uLL;
        if ( (v8 & 0x42) != 0 )
          v5 |= 0x42uLL;
      }
    }
    v20 = v5;
    v9 = v5;
    if ( (unsigned __int64)&STACK[0x90482413050] <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, v5)
      && (v5 & 1) != 0
      && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v11 = *(_QWORD *)&Process[2].ProcessLock;
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 8 * (v10 & ((unsigned __int64)&v20 >> 3)));
        if ( (v12 & 0x20) != 0 )
          v9 |= 0x20uLL;
        if ( (v12 & 0x42) != 0 )
          v9 |= 0x42uLL;
      }
    }
    v13 = 48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v15 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v15);
        Process = (_KPROCESS *)0x8000000000000000LL;
      }
      while ( *(__int64 *)(v13 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
    }
    a2 = *(_QWORD *)&v3->Header.Lock;
    *v2 = CurrentIrql;
    if ( p_ReadyListHead <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, a2)
      && (a2 & 1) != 0
      && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v17 = *(_QWORD *)&Process[2].ProcessLock;
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 8 * (v16 & ((unsigned __int64)v3 >> 3)));
        if ( (v18 & 0x20) != 0 )
          a2 |= 0x20uLL;
        if ( (v18 & 0x42) != 0 )
          a2 |= 0x42uLL;
      }
    }
    if ( v5 == a2 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
  }
  return v13;
}
