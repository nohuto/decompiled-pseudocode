/*
 * XREFs of VerifierKeInitializeGuardedMutex @ 0x140742184
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
