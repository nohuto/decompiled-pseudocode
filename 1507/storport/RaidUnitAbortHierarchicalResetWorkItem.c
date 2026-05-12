/*
 * XREFs of RaidUnitAbortHierarchicalResetWorkItem @ 0x1C00323F8
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C00059D0 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C00223E8 (RaidAdapterResetBus.c)
 */

__int64 __fastcall RaidUnitAbortHierarchicalResetWorkItem(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1488), &LockHandle);
  *(_QWORD *)(a1 + 1464) = 0LL;
  *(_DWORD *)(a1 + 1472) = 0;
  ++*(_DWORD *)(a1 + 1480);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 88));
}
