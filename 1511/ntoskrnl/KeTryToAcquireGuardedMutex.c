/*
 * XREFs of KeTryToAcquireGuardedMutex @ 0x1400DFFBC
 * Callers:
 *     VerifierKeTryToAcquireGuardedMutex @ 0x1406C0AA0 (VerifierKeTryToAcquireGuardedMutex.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall KeTryToAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  return ExTryToAcquireFastMutex(Mutex);
}
