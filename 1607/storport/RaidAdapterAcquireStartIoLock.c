/*
 * XREFs of RaidAdapterAcquireStartIoLock @ 0x1C0019FB4
 * Callers:
 *     RaidInitializePerfOptsPassive @ 0x1C000DC5C (RaidInitializePerfOptsPassive.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C000FB0C (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterResetBus @ 0x1C0027CB0 (RaidAdapterResetBus.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C002A4B0 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0002EC4 (RaidAdapterAcquireInterruptLock.c)
 */

void __fastcall RaidAdapterAcquireStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 688) )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 680), a2);
  else
    LOBYTE(a2->LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
}
