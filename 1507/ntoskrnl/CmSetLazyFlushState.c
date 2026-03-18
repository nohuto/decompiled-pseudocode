/*
 * XREFs of CmSetLazyFlushState @ 0x140564EB0
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x1403EC318 (PopUnlockAfterSleepWorker.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     CmpEnableLazyFlush @ 0x1400D2744 (CmpEnableLazyFlush.c)
 *     CmpDisableLazyFlush @ 0x140131CEC (CmpDisableLazyFlush.c)
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
      KiSetTimerEx((__int64)&CmpEnableLazyFlushTimer, -900000000LL, 0, 0, (__int64)&CmpEnableLazyFlushDpc);
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
