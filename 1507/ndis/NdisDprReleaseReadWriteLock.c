/*
 * XREFs of NdisDprReleaseReadWriteLock @ 0x1C0054F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisDprReleaseReadWriteLock(PNDIS_RW_LOCK Lock, PLOCK_STATE LockState)
{
  ndisReleaseReadWriteLockX(&Lock->SpinLock);
}
