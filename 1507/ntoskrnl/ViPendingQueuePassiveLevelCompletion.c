/*
 * XREFs of ViPendingQueuePassiveLevelCompletion @ 0x140742C34
 * Callers:
 *     ViPendingDelayCompletion @ 0x140742AC8 (ViPendingDelayCompletion.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     KeQueryPriorityThread @ 0x1400D5D70 (KeQueryPriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall ViPendingQueuePassiveLevelCompletion(signed __int64 a1)
{
  KPRIORITY PriorityThread; // eax
  struct _KTHREAD *CurrentThread; // rdx
  int v4; // r9d
  unsigned int v5; // r8d
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax
  __int64 v9; // rbx
  struct _KTHREAD *v10; // rdx
  __int16 v11; // ax

  if ( !ViPendingWorkersCount )
    return 0LL;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ViPendingWorkersCount;
  v5 = ViPendingWorkerIndexHint;
  while ( _InterlockedCompareExchange64(&qword_14032B688[6 * v5], a1, 0LL) )
  {
    v5 = v5 + 1 < ViPendingWorkersCount ? v5 + 1 : 0;
    if ( !--v4 )
    {
      ++ViPendingWorkersBusyCount;
      v5 = -1;
      goto LABEL_7;
    }
  }
  ViPendingWorkerIndexHint = v5 + 1 < ViPendingWorkersCount ? v5 + 1 : 0;
LABEL_7:
  if ( v5 == -1 )
  {
    v6 = KeGetCurrentThread();
    v7 = v6->KernelApcDisable + 1;
    v6->KernelApcDisable = v7;
    if ( !v7
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
      && !v6->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 0LL;
  }
  v9 = 48LL * v5;
  KeSetPriorityThread(*(PKTHREAD *)((char *)&ViPendingWorkers + v9), PriorityThread);
  KeSetEvent((PRKEVENT)((char *)&ViPendingWorkers + v9 + 16), 0, 0);
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 1LL;
}
