/*
 * XREFs of NdisDprAcquireReadWriteLock @ 0x1C0054F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisDprAcquireReadWriteLock(PNDIS_RW_LOCK Lock, BOOLEAN fWrite, PLOCK_STATE LockState)
{
  ndisAcquireReadWriteLockX(Lock);
}
