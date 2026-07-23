/*
 * XREFs of KxDispatchInterrupt @ 0x1401663B0
 * Callers:
 *     KiDispatchInterrupt @ 0x140166320 (KiDispatchInterrupt.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D05F0 (KiEndThreadAccountingPeriod.c)
 *     SwapContext @ 0x140166570 (SwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxDispatchInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  int v9; // ecx
  _SINGLE_LIST_ENTRY *v10; // r8
  __int64 v11; // r9
  unsigned int v12; // esi
  _KTHREAD *NextThread; // rsi

  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  _disable();
  ++CurrentPrcb->NestingLevel;
  v6 = __rdtsc() - CurrentPrcb->StartCycles;
  *(_QWORD *)(CurrentThread + 72) += v6;
  v7 = *(unsigned int *)(CurrentThread + 80);
  CurrentPrcb->StartCycles += v6;
  v8 = v6 + v7;
  v9 = v8;
  if ( HIDWORD(v8) )
    v9 = -1;
  *(_DWORD *)(CurrentThread + 80) = v9;
  if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
    KiEndThreadAccountingPeriod((__int64)CurrentPrcb, CurrentThread, v6);
  _enable();
  KiAbProcessContextSwitch(CurrentThread, 0, a3, a4);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
  {
    v12 = 0;
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        HvlNotifyLongSpinWait(v12);
      _mm_pause();
    }
    while ( (CurrentPrcb->PrcbLock & 1) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) );
  }
  NextThread = CurrentPrcb->NextThread;
  CurrentPrcb->NextThread = 0LL;
  CurrentPrcb->CurrentThread = NextThread;
  NextThread->WaitBlockFill6[68] = 2;
  *(_BYTE *)(CurrentThread + 643) = 31;
  KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v10, v11);
  return SwapContext(1LL);
}
