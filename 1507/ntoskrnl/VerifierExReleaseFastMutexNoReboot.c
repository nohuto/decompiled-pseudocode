/*
 * XREFs of VerifierExReleaseFastMutexNoReboot @ 0x140751B98
 * Callers:
 *     <none>
 * Callees:
 *     ViExReleaseFastMutexCommon @ 0x140752028 (ViExReleaseFastMutexCommon.c)
 */

void __fastcall VerifierExReleaseFastMutexNoReboot(PKGUARDED_MUTEX Mutex)
{
  ViExReleaseFastMutexCommon((ULONG_PTR)Mutex);
  pXdvExReleaseFastMutex(Mutex);
}
