/*
 * XREFs of KeReleaseGuardedMutexUnsafe @ 0x1401C2F00
 * Callers:
 *     VerifierKeReleaseGuardedMutexUnsafe @ 0x1406C09DC (VerifierKeReleaseGuardedMutexUnsafe.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall KeReleaseGuardedMutexUnsafe(PKGUARDED_MUTEX FastMutex)
{
  ExReleaseFastMutexUnsafe(FastMutex);
}
