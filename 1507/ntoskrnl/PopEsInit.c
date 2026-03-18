/*
 * XREFs of PopEsInit @ 0x1407E7D84
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 */

void PopEsInit()
{
  qword_14032D448 = 0LL;
  PopEsLock = 0LL;
  PopEsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopEsWorker;
  PopEsWorkItem.Parameter = 0LL;
  PopEsWorkItem.List.Flink = 0LL;
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, 0x80000001) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
