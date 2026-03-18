/*
 * XREFs of PopUserPresentSet @ 0x1400F1E14
 * Callers:
 *     PopSetSystemState @ 0x1400F1DD8 (PopSetSystemState.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PopSetNotificationWork @ 0x140097574 (PopSetNotificationWork.c)
 *     PopResetIdleTime @ 0x1400F1E98 (PopResetIdleTime.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

void __fastcall PopUserPresentSet(int a1)
{
  void *v1; // rsi
  __int32 v2; // edi
  __int64 v3; // rdx

  v1 = (void *)a1;
  v2 = _InterlockedExchange(&PopUserPresentSetStatus, 1);
  if ( _InterlockedCompareExchange(&dword_1402DE294, 0, 0) )
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
      PopSetNotificationWork(1u, v3);
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
