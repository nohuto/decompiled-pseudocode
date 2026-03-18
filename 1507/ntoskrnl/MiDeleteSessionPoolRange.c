/*
 * XREFs of MiDeleteSessionPoolRange @ 0x14022074C
 * Callers:
 *     MiDeleteLeakedSessionPool @ 0x140567DC0 (MiDeleteLeakedSessionPool.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDeleteSessionPoolRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  volatile signed __int32 *v4; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 *v7; // r12
  unsigned __int8 CurrentIrql; // r15
  _KPROCESS *Process; // rcx
  unsigned int v10; // esi
  unsigned __int32 v11; // edx
  unsigned __int64 i; // rbp
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned int v16; // esi
  signed __int32 v17; // edx

  v4 = (volatile signed __int32 *)(a1 + 2968);
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (unsigned __int64 *)(v6 + 8 * (a3 >> 12));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4);
  }
  else
  {
    v10 = 0;
    if ( _interlockedbittestandset(v4, 0x1Fu) )
      v10 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 2968));
    v11 = *v4;
    Process = (_KPROCESS *)(*v4 & 0xBFFFFFFF);
    if ( (_DWORD)Process != 0x80000000 )
    {
      do
      {
        if ( (v11 & 0x40000000) == 0 )
        {
          Process = (_KPROCESS *)v11;
          LODWORD(Process) = v11 | 0x40000000;
          _InterlockedCompareExchange(v4, v11 | 0x40000000, v11);
        }
        if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v10);
        v11 = *v4;
      }
      while ( (*v4 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  if ( v6 < (unsigned __int64)v7 )
  {
    for ( i = v6 + 0x90482413000LL; ; i += 8LL )
    {
      v13 = *(_QWORD *)v6;
      if ( i <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v13)
        && (v13 & 1) != 0
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        v14 = *(_QWORD *)&Process[2].ProcessLock;
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 8 * ((v6 >> 3) & 0x1FF));
          if ( (v15 & 0x20) != 0 )
            v13 |= 0x20uLL;
          if ( (v15 & 0x42) != 0 )
            v13 |= 0x42uLL;
        }
      }
      if ( (v13 & 0xC01) != 0 || (v13 & 0x3E0) != 0 )
        break;
      if ( v13 )
        goto LABEL_41;
LABEL_43:
      v6 += 8LL;
      if ( v6 >= (unsigned __int64)v7 )
        return MiUnlockWorkingSetExclusive((__int64)v4, CurrentIrql);
    }
    MiUnlockWorkingSetExclusive((__int64)v4, CurrentIrql);
    MiDeleteSystemPagableVm((__int64)v4, 0LL, (unsigned __int64 *)v6, 1LL, 0, a4);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4);
    }
    else
    {
      v16 = 0;
      if ( _interlockedbittestandset(v4, 0x1Fu) )
        v16 = ExpWaitForSpinLockExclusiveAndAcquire(v4);
      v17 = *v4;
      Process = (_KPROCESS *)*(unsigned int *)v4;
      LODWORD(Process) = (unsigned int)Process & 0xBFFFFFFF;
      if ( (_DWORD)Process != 0x80000000 )
      {
        do
        {
          if ( (v17 & 0x40000000) == 0 )
          {
            Process = (_KPROCESS *)(v17 | 0x40000000u);
            _InterlockedCompareExchange(v4, (signed __int32)Process, v17);
          }
          if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v16);
          v17 = *v4;
        }
        while ( (*v4 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
LABEL_41:
    *(_QWORD *)v6 = 0LL;
    if ( i <= 0x7F8 )
      MiWritePteShadow(v6, 0LL);
    goto LABEL_43;
  }
  return MiUnlockWorkingSetExclusive((__int64)v4, CurrentIrql);
}
