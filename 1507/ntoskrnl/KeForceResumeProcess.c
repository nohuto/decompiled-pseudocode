/*
 * XREFs of KeForceResumeProcess @ 0x14000BA84
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x14020FF34 (MiReAcquireCommitFailWorker.c)
 *     PspTerminateProcess @ 0x14041C990 (PspTerminateProcess.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PsFreezeProcess @ 0x1404EB390 (PsFreezeProcess.c)
 * Callees:
 *     KiThawSingleThread @ 0x14000A190 (KiThawSingleThread.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeForceResumeProcess(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD **v4; // r14
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r15
  volatile signed __int32 *v7; // rbx
  unsigned int v8; // esi
  signed __int32 i; // edx
  __int64 result; // rax
  _QWORD *j; // rdi
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = (volatile signed __int32 *)(a1 + 64);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64);
  }
  else
  {
    v8 = 0;
    if ( _interlockedbittestandset(v7, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 64);
    for ( i = *v7; (*v7 & 0xBFFFFFFF) != 0x80000000; i = *v7 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v7, i | 0x40000000, i);
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
  }
  if ( *(_DWORD *)(a1 + 616) + ((*(_DWORD *)(a1 + 440) >> 3) & 1) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 440), 3u);
    *(_DWORD *)(a1 + 616) = 0;
    for ( j = *v4; j != v4; j = (_QWORD *)*j )
    {
      LOBYTE(a3) = 1;
      KiThawSingleThread((__int64)CurrentPrcb, (__int64)(j - 95), a3);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
    else
      *v7 = 0;
    return KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
    else
      *v7 = 0;
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
