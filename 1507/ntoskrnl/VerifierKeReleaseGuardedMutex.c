/*
 * XREFs of VerifierKeReleaseGuardedMutex @ 0x1407421CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierKeReleaseGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  pXdvKeReleaseGuardedMutex(Mutex);
}
