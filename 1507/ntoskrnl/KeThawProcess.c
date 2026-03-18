/*
 * XREFs of KeThawProcess @ 0x14000989C
 * Callers:
 *     PsThawProcess @ 0x1404EBD04 (PsThawProcess.c)
 * Callees:
 *     KiThawSingleThread @ 0x14000A190 (KiThawSingleThread.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeThawProcess(__int64 a1, char a2)
{
  _QWORD **v3; // rsi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r13
  volatile signed __int32 *v7; // rbx
  __int64 v8; // r14
  unsigned int v9; // ebp
  signed __int32 i; // edx
  int v11; // eax
  int v12; // ecx
  _QWORD *j; // rax
  __int64 result; // rax
  _QWORD *k; // rdi
  void *retaddr; // [rsp+58h] [rbp+0h]

  v3 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = (volatile signed __int32 *)(a1 + 64);
  v8 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(v7, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 64);
    for ( i = *v7; (*v7 & 0xBFFFFFFF) != 0x80000000; i = *v7 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v7, i | 0x40000000, i);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
  }
  v11 = *(_DWORD *)(a1 + 616);
  v12 = v11 + ((*(_DWORD *)(a1 + 440) >> 3) & 1);
  if ( v12 )
  {
    if ( a2 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 440), 3u);
      v8 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 72) - MEMORY[0xFFFFF780000003B0];
    }
    else
    {
      *(_DWORD *)(a1 + 616) = v11 - 1;
    }
  }
  if ( a2 && (*(_DWORD *)(a1 + 440) & 0x10) != 0 )
  {
    for ( j = *v3; j != v3; j = (_QWORD *)*j )
      *(j - 64) += v8;
  }
  if ( v12 == 1 )
  {
    for ( k = *v3; k != v3; k = (_QWORD *)*k )
      KiThawSingleThread(CurrentPrcb, k - 95, 0LL);
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
