/*
 * XREFs of RaidUnitAbortHierarchicalResetWorkItem @ 0x1C0033C58
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C0006610 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C002492C (RaidAdapterResetBus.c)
 */

__int64 __fastcall RaidUnitAbortHierarchicalResetWorkItem(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1504), &LockHandle);
  *(_QWORD *)(a1 + 1480) = 0LL;
  *(_DWORD *)(a1 + 1488) = 0;
  ++*(_DWORD *)(a1 + 1496);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 88));
}
