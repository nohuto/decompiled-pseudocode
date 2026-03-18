/*
 * XREFs of VerifierKeAcquireGuardedMutex @ 0x1407420D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierKeAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  pXdvKeAcquireGuardedMutex(Mutex);
}
