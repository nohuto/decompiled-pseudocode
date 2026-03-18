/*
 * XREFs of KeAcquireGuardedMutexUnsafe @ 0x1401C2EF8
 * Callers:
 *     VerifierKeAcquireGuardedMutexUnsafe @ 0x1406C08E4 (VerifierKeAcquireGuardedMutexUnsafe.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall KeAcquireGuardedMutexUnsafe(PKGUARDED_MUTEX FastMutex)
{
  ExAcquireFastMutexUnsafe(FastMutex);
}
