/*
 * XREFs of VerifierKeAcquireGuardedMutex @ 0x1406C08DC
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
