/*
 * XREFs of VerifierKeReleaseGuardedMutex @ 0x1406C09D4
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
