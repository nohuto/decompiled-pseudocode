/*
 * XREFs of PopUserPresentSet @ 0x14012DEE4
 * Callers:
 *     PopSetSystemState @ 0x14012DEA8 (PopSetSystemState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     PopSetNotificationWork @ 0x1400D0780 (PopSetNotificationWork.c)
 *     PopResetIdleTime @ 0x14012DF68 (PopResetIdleTime.c)
 */

void __fastcall PopUserPresentSet(int a1)
{
  void *v1; // rsi
  __int32 v2; // edi

  v1 = (void *)a1;
  v2 = _InterlockedExchange(&PopUserPresentSetStatus, 1);
  if ( _InterlockedCompareExchange(&dword_14032E854, 0, 0) )
  {
    if ( !v2 )
    {
      _InterlockedExchange(&PopUserPresentSetStatus, 0);
      KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
    }
  }
  else
  {
    PopResetIdleTime(2LL);
    if ( (PopFullWake & 3) == 0 )
    {
      _InterlockedOr(&PopFullWake, 2u);
      PopSetNotificationWork(1u);
    }
    if ( !v2 )
    {
      PopUserPresentWorkItem.Parameter = v1;
      PopUserPresentWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUserPresentSetWorker;
      PopUserPresentWorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&PopUserPresentWorkItem, DelayedWorkQueue);
    }
  }
}
