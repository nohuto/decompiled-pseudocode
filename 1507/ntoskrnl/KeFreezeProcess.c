/*
 * XREFs of KeFreezeProcess @ 0x1400D24F8
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x14020FF64 (MiReAcquireOutSwappedProcessCommit.c)
 *     PsFreezeProcess @ 0x1404EB390 (PsFreezeProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiFreezeSingleThread @ 0x1400D268C (KiFreezeSingleThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeFreezeProcess(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  volatile signed __int32 *v6; // rbx
  unsigned int v7; // edi
  signed __int32 i; // edx
  int v9; // eax
  int v10; // edx
  __int64 result; // rax
  _QWORD **v12; // rsi
  _QWORD *j; // rdi
  void *retaddr; // [rsp+48h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (volatile signed __int32 *)(a1 + 64);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(v6, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 64));
    for ( i = *v6; (*v6 & 0xBFFFFFFF) != 0x80000000; i = *v6 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v6, i | 0x40000000, i);
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
  }
  v9 = *(_DWORD *)(a1 + 616);
  v10 = v9 + ((*(_DWORD *)(a1 + 440) >> 3) & 1);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 72) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 3u);
  }
  else
  {
    *(_DWORD *)(a1 + 616) = v9 + 1;
  }
  if ( v10 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
    else
      *v6 = 0;
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v12 = (_QWORD **)(a1 + 48);
    for ( j = *v12; j != v12; j = (_QWORD *)*j )
      KiFreezeSingleThread(CurrentPrcb, j - 95);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
    else
      *v6 = 0;
    return KiExitDispatcher((signed __int64)CurrentPrcb, 0, 1u, 0, CurrentIrql);
  }
  return result;
}
