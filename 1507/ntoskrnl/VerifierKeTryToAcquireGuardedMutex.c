/*
 * XREFs of VerifierKeTryToAcquireGuardedMutex @ 0x1407422E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierKeTryToAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  return pXdvKeTryToAcquireGuardedMutex(Mutex);
}
