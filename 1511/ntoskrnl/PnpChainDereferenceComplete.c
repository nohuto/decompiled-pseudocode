/*
 * XREFs of PnpChainDereferenceComplete @ 0x14049F4C8
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140003C9C (IopCompleteUnloadOrDelete.c)
 *     PnpIsChainDereferenced @ 0x1400DA0AC (PnpIsChainDereferenced.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     PnpDelayedRemoveWorker @ 0x14049F5E8 (PnpDelayedRemoveWorker.c)
 *     IopSetRelationsTag @ 0x14049F6F0 (IopSetRelationsTag.c)
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

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  for ( i = (PVOID *)IopPendingSurpriseRemovals; ; i = (PVOID *)*i )
  {
    if ( i == &IopPendingSurpriseRemovals )
      goto LABEL_16;
    if ( !*((_BYTE *)i + 104) && (int)IopSetRelationsTag(i[8], a1) >= 0 )
    {
      v6 = *(int **)i[8];
      v7 = i[7];
      v8 = v6[2];
      v9 = *v6;
      v10 = v7 ? *(_QWORD *)(v7[39] + 40LL) : 0LL;
      if ( *(_DWORD *)(v10 + 300) != 782 && v8 == v9 )
        break;
    }
  }
  v11 = PnpDelayedRemovePending == 0;
  *((_BYTE *)i + 104) = 1;
  if ( !v11 )
  {
LABEL_16:
    ExReleaseResourceLite(&IopSurpriseRemoveListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return;
  }
  PnpDelayedRemovePending = 1;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( a2 && KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    PnpDelayedRemoveWorker(0LL);
  }
  else
  {
    PnpDelayedRemoveWorkItem.Parameter = 0LL;
    PnpDelayedRemoveWorkItem.List.Flink = 0LL;
    PnpDelayedRemoveWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDelayedRemoveWorker;
    ExQueueWorkItem(&PnpDelayedRemoveWorkItem, DelayedWorkQueue);
  }
}
