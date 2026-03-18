/*
 * XREFs of GreReleaseFastMutex @ 0x1C000F640
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
