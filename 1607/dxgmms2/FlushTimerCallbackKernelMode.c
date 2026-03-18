/*
 * XREFs of FlushTimerCallbackKernelMode @ 0x1C0028630
 * Callers:
 *     <none>
 * Callees:
 *     EnableFlushTimer @ 0x1C00283C4 (EnableFlushTimer.c)
 */

void __fastcall FlushTimerCallbackKernelMode(__int64 a1, __int64 a2)
{
  signed __int16 v2; // ax

  v2 = _InterlockedCompareExchange16((volatile signed __int16 *)(a2 + 56), 1, 0);
  if ( v2 )
  {
    if ( v2 == 1 )
      EnableFlushTimer(a1, 0x3A98u);
  }
  else
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a2, DelayedWorkQueue);
  }
}
