/*
 * XREFs of KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140066D30
 * Callers:
 *     MiInsertLargePageInNodeListHelper @ 0x14001B2E0 (MiInsertLargePageInNodeListHelper.c)
 *     MiCoalesceFreeLargePages @ 0x1401FCABC (MiCoalesceFreeLargePages.c)
 *     MiRebuildLargePages @ 0x1401FD95C (MiRebuildLargePages.c)
 *     PnprMirrorMarkedPages @ 0x1403DC208 (PnprMirrorMarkedPages.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall KeReleaseInStackQueuedSpinLockFromDpcLevel(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KxReleaseQueuedSpinLock(LockHandle);
}
