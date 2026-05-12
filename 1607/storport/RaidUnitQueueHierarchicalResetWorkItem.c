/*
 * XREFs of RaidUnitQueueHierarchicalResetWorkItem @ 0x1C0037D48
 * Callers:
 *     RaUnitSetUnresponsiveAttribute @ 0x1C0035EF4 (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitRequestTimeout @ 0x1C0037E64 (RaidUnitRequestTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidUnitQueueHierarchicalResetWorkItem(__int64 a1)
{
  struct _IO_WORKITEM *WorkItem; // rsi
  unsigned int v4; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  if ( !WorkItem )
    return *(_QWORD *)(a1 + 1480) != 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1504), &LockHandle);
  if ( *(_QWORD *)(a1 + 1480) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    IoFreeWorkItem(WorkItem);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 648));
    v4 = *(_DWORD *)(a1 + 1000);
    *(_DWORD *)(a1 + 1492) = 0;
    *(_QWORD *)(a1 + 1480) = WorkItem;
    if ( v4 < 0x1E )
      v4 = 30;
    *(_DWORD *)(a1 + 1488) = 4 * v4 + 42;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    IoQueueWorkItem(WorkItem, (PIO_WORKITEM_ROUTINE)RaidHierarchicalResetWorkRoutine, CriticalWorkQueue, WorkItem);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4780LL);
  }
  return 1;
}
