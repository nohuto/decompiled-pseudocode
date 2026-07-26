/*
 * XREFs of NdisDprAcquireReadWriteLock @ 0x1C0055010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisDprAcquireReadWriteLock(PNDIS_RW_LOCK Lock, BOOLEAN fWrite, PLOCK_STATE LockState)
{
  ndisAcquireReadWriteLockX(Lock, fWrite, (__int64)LockState, 1);
}
