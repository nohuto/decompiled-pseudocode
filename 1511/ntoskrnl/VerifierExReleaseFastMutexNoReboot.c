/*
 * XREFs of VerifierExReleaseFastMutexNoReboot @ 0x1406CE1C0
 * Callers:
 *     <none>
 * Callees:
 *     ViExReleaseFastMutexCommon @ 0x1406CE5F8 (ViExReleaseFastMutexCommon.c)
 */

void __fastcall VerifierExReleaseFastMutexNoReboot(PKGUARDED_MUTEX Mutex)
{
  ViExReleaseFastMutexCommon((ULONG_PTR)Mutex);
  pXdvExReleaseFastMutex(Mutex);
}
