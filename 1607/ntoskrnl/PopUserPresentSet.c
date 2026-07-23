/*
 * XREFs of PopUserPresentSet @ 0x1400B2C00
 * Callers:
 *     PopSetSystemState @ 0x1400B2BC4 (PopSetSystemState.c)
 * Callees:
 *     PopResetIdleTime @ 0x140007ABC (PopResetIdleTime.c)
 *     PopSetNotificationWork @ 0x1400085B4 (PopSetNotificationWork.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 */

void __fastcall PopUserPresentSet(int a1)
{
  void *v1; // rsi
  __int32 v2; // edi

  v1 = (void *)a1;
  v2 = _InterlockedExchange(&PopUserPresentSetStatus, 1);
  if ( _InterlockedCompareExchange(&dword_140303D54, 0, 0) )
  {
    if ( !v2 )
    {
      _InterlockedExchange(&PopUserPresentSetStatus, 0);
      KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
    }
  }
  else
  {
    PopResetIdleTime(2);
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
