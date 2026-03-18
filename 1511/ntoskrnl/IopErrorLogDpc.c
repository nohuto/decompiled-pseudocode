/*
 * XREFs of IopErrorLogDpc @ 0x1401BD4D4
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall IopErrorLogDpc(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  if ( Dpc )
    ExFreePoolWithTag(Dpc, 0);
  IopErrorLogWorkItem.Parameter = 0LL;
  IopErrorLogWorkItem.List.Flink = 0LL;
  IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
  ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
}
