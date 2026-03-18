/*
 * XREFs of KeAcquireGuardedMutexUnsafe @ 0x1401D1D88
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall KeAcquireGuardedMutexUnsafe(PKGUARDED_MUTEX FastMutex)
{
  ExAcquireFastMutexUnsafe(FastMutex);
}
