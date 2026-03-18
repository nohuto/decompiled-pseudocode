/*
 * XREFs of VerifierKeReleaseGuardedMutexUnsafe @ 0x1406C09DC
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
