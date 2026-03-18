/*
 * XREFs of VerifierKeInitializeGuardedMutex @ 0x1406C098C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierKeInitializeGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  pXdvKeInitializeGuardedMutex(Mutex);
}
