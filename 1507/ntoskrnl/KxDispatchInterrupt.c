/*
 * XREFs of KxDispatchInterrupt @ 0x14018A480
 * Callers:
 *     KiDispatchInterrupt @ 0x14018A3F0 (KiDispatchInterrupt.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     KiEndThreadAccountingPeriod @ 0x140102C70 (KiEndThreadAccountingPeriod.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     SwapContext @ 0x14018A640 (SwapContext.c)
 */

__int64 KxDispatchInterrupt()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rdi
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  int v5; // ecx
  unsigned __int64 v6; // r8
  unsigned int v7; // esi
  _KTHREAD *NextThread; // rsi

  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  _disable();
  ++CurrentPrcb->NestingLevel;
  v2 = __rdtsc() - CurrentPrcb->StartCycles;
  *(_QWORD *)(CurrentThread + 72) += v2;
  v3 = *(unsigned int *)(CurrentThread + 80);
  CurrentPrcb->StartCycles += v2;
  v4 = v2 + v3;
  v5 = v4;
  if ( HIDWORD(v4) )
    v5 = -1;
  *(_DWORD *)(CurrentThread + 80) = v5;
  if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
    KiEndThreadAccountingPeriod((__int64)CurrentPrcb, CurrentThread, v2);
  _enable();
  KiAbProcessContextSwitch(CurrentThread, 0);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
  {
    v7 = 0;
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        HvlNotifyLongSpinWait(v7);
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
  KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v6);
  return SwapContext(1LL);
}
