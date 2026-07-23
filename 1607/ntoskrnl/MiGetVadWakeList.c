/*
 * XREFs of MiGetVadWakeList @ 0x140029580
 * Callers:
 *     MiRemoveVadCharges @ 0x14042E9F0 (MiRemoveVadCharges.c)
 *     MiFreeRotateView @ 0x140659D18 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x140659E10 (MiFreeVadEventBitmap.c)
 *     MiFreeLargePageView @ 0x14066295C (MiFreeLargePageView.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1401F2898 (MiPreUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 *__fastcall MiGetVadWakeList(__int64 a1, int a2)
{
  LONG *v2; // r15
  __int64 *v3; // rbp
  __int64 **v4; // rsi
  LONG *p_Blink; // rbx
  _KPROCESS *Process; // r14
  unsigned __int8 CurrentIrql; // r12
  unsigned int v9; // edi
  signed __int32 v10; // edx
  bool v11; // zf
  signed __int32 v12; // eax
  __int64 *v13; // rax
  __int64 *v14; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = &dword_140327CC0;
  v3 = 0LL;
  v4 = (__int64 **)(a1 + 56);
  p_Blink = &dword_140327CC0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( ((__int64)Process[2].Header.WaitListHead.Flink & 7) != 2 )
    p_Blink = (LONG *)&Process[2].Header.WaitListHead.Blink;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(p_Blink, CurrentIrql);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(p_Blink, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(p_Blink, CurrentIrql);
    v10 = *p_Blink;
    while ( (v10 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v10 & 0x40000000) == 0 )
      {
        v12 = _InterlockedCompareExchange(p_Blink, v10 | 0x40000000, v10);
        v11 = v10 == v12;
        v10 = v12;
        if ( !v11 )
          continue;
      }
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
      v10 = *p_Blink;
    }
  }
  p_Blink[1] = 0;
  v13 = *v4;
  if ( *v4 )
  {
    do
    {
      v14 = (__int64 *)*v13;
      if ( (a2 & (_DWORD)v13[1]) != 0 )
      {
        *v13 = (__int64)v3;
        v3 = v13;
        *v4 = v14;
      }
      else
      {
        v4 = (__int64 **)v13;
      }
      v13 = v14;
    }
    while ( v14 );
  }
  MiPreUnlockWorkingSetExclusive(&Process[1].IdealNode[12], CurrentIrql);
  if ( ((__int64)Process[2].Header.WaitListHead.Flink & 7) != 2 )
    v2 = (LONG *)&Process[2].Header.WaitListHead.Blink;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
  else
    *v2 = 0;
  __writecr8(CurrentIrql);
  return v3;
}
