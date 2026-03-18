/*
 * XREFs of PnpChainDereferenceComplete @ 0x140538F00
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140007694 (IopCompleteUnloadOrDelete.c)
 *     PnpIsChainDereferenced @ 0x14011C010 (PnpIsChainDereferenced.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopSetRelationsTag @ 0x140535140 (IopSetRelationsTag.c)
 *     PnpDelayedRemoveWorker @ 0x1405394A0 (PnpDelayedRemoveWorker.c)
 */

void __fastcall PnpChainDereferenceComplete(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rbx
  int *v6; // rcx
  _QWORD *v7; // rax
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rcx
  bool v11; // zf
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  for ( i = (PVOID *)IopPendingSurpriseRemovals; i != &IopPendingSurpriseRemovals; i = (PVOID *)*i )
  {
    if ( !*((_BYTE *)i + 104) && (int)IopSetRelationsTag(i[8], a1) >= 0 )
    {
      v6 = *(int **)i[8];
      v7 = i[7];
      v8 = v6[2];
      v9 = *v6;
      v10 = v7 ? *(_QWORD *)(v7[39] + 40LL) : 0LL;
      if ( v8 == v9 && *(_DWORD *)(v10 + 300) != 782 )
      {
        v11 = PnpDelayedRemovePending == 0;
        *((_BYTE *)i + 104) = 1;
        if ( v11 )
        {
          PnpDelayedRemovePending = 1;
          ExReleaseResourceLite(&IopSurpriseRemoveListLock);
          v12 = KeGetCurrentThread();
          v13 = v12->KernelApcDisable + 1;
          v12->KernelApcDisable = v13;
          if ( !v13
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
            && !v12->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          if ( a2 && KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
          {
            PnpDelayedRemoveWorker(0LL);
          }
          else
          {
            PnpDelayedRemoveWorkItem.Parameter = 0LL;
            PnpDelayedRemoveWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDelayedRemoveWorker;
            PnpDelayedRemoveWorkItem.List.Flink = 0LL;
            ExQueueWorkItem(&PnpDelayedRemoveWorkItem, DelayedWorkQueue);
          }
          return;
        }
        break;
      }
    }
  }
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
