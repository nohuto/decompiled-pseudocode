/*
 * XREFs of WmipInitializeRegistration @ 0x14079C5A8
 * Callers:
 *     WmipDriverEntry @ 0x14079CA30 (WmipDriverEntry.c)
 *     WMIInitialize @ 0x14079DDF8 (WMIInitialize.c)
 * Callees:
 *     ExInitializeNPagedLookasideList @ 0x140111160 (ExInitializeNPagedLookasideList.c)
 */

void __fastcall WmipInitializeRegistration(int a1)
{
  if ( a1 )
  {
    WmipRegWorkQueue.Parameter = 0LL;
    WmipRegWorkQueue.WorkerRoutine = (void (__fastcall *)(void *))WmipRegistrationWorker;
    WmipRegWorkQueue.List.Flink = 0LL;
    if ( _InterlockedExchangeAdd(&WmipRegWorkItemCount, 0xFFFFFFFF) != 1 )
      ExQueueWorkItem(&WmipRegWorkQueue, DelayedWorkQueue);
  }
  else
  {
    ExInitializeNPagedLookasideList(&WmipRegLookaside, 0LL, 0LL, 0x200u, 0x40uLL, 0x52696D57u, 0);
    WmipRegistrationSpinLock = 0LL;
    WmipCancelSpinLock = 0LL;
  }
}
