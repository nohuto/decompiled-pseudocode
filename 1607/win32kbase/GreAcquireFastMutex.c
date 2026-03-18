/*
 * XREFs of GreAcquireFastMutex @ 0x1C0077260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall GreAcquireFastMutex(PKGUARDED_MUTEX Mutex)
{
  KeAcquireGuardedMutex(Mutex);
}
