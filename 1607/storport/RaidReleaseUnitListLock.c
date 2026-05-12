/*
 * XREFs of RaidReleaseUnitListLock @ 0x1C002A2D0
 * Callers:
 *     RaidAdapterCheckWaitTimeout @ 0x1C00268C8 (RaidAdapterCheckWaitTimeout.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleaseUnitListLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  KeReleaseInStackQueuedSpinLock(a2);
}
