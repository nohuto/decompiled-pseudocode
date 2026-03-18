/*
 * XREFs of GreReleaseFastMutex @ 0x1C0071FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall GreReleaseFastMutex(PKGUARDED_MUTEX Mutex)
{
  KeReleaseGuardedMutex(Mutex);
}
