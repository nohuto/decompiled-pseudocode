/*
 * XREFs of VerifierKeReleaseGuardedMutexUnsafe @ 0x1407421D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierKeReleaseGuardedMutexUnsafe(PKGUARDED_MUTEX FastMutex)
{
  pXdvKeReleaseGuardedMutexUnsafe(FastMutex);
}
