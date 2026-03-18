/*
 * XREFs of KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400671B0
 * Callers:
 *     MiInsertLargePageInNodeListHelper @ 0x14001B760 (MiInsertLargePageInNodeListHelper.c)
 *     MiCoalesceFreeLargePages @ 0x1401FCC90 (MiCoalesceFreeLargePages.c)
 *     MiRebuildLargePages @ 0x1401FDB30 (MiRebuildLargePages.c)
 *     PnprMirrorMarkedPages @ 0x1403DC208 (PnprMirrorMarkedPages.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall KeReleaseInStackQueuedSpinLockFromDpcLevel(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KxReleaseQueuedSpinLock(LockHandle);
}
