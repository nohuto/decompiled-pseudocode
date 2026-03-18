/*
 * XREFs of CmSetLazyFlushState @ 0x1404F5D54
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14039DEDC (PopUnlockAfterSleepWorker.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     CmpDisableLazyFlush @ 0x1400F46E8 (CmpDisableLazyFlush.c)
 *     CmpEnableLazyFlush @ 0x140126C94 (CmpEnableLazyFlush.c)
 */

void __fastcall CmSetLazyFlushState(char a1)
{
  int v1; // eax

  if ( a1 )
  {
    CmpDontGrowLogFile = 0;
    CmpDoIdleProcessing = CmpPrevIdleProcessingState;
    if ( CmpEnableLazyFlushTimerInitialized )
    {
      CmpDisableLazyFlush(1u);
      KeSetTimer(&CmpEnableLazyFlushTimer, (LARGE_INTEGER)-900000000LL, &CmpEnableLazyFlushDpc);
    }
    CmpEnableLazyFlush(4);
  }
  else
  {
    CmpDontGrowLogFile = 1;
    CmpDisableLazyFlush(4u);
    if ( CmpEnableLazyFlushTimerInitialized && (CmpHoldLazyFlush & 1) != 0 )
    {
      if ( KeCancelTimer(&CmpEnableLazyFlushTimer) )
        CmpEnableLazyFlush(1);
    }
    v1 = CmpDoIdleProcessing;
    CmpDoIdleProcessing = 0;
    CmpPrevIdleProcessingState = v1;
  }
}
