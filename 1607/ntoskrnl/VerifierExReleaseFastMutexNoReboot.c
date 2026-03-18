/*
 * XREFs of VerifierExReleaseFastMutexNoReboot @ 0x14071A278
 * Callers:
 *     <none>
 * Callees:
 *     ViExReleaseFastMutexCommon @ 0x14071A6B0 (ViExReleaseFastMutexCommon.c)
 */

__int64 __fastcall VerifierExReleaseFastMutexNoReboot(ULONG_PTR a1)
{
  ViExReleaseFastMutexCommon(a1);
  return pXdvExReleaseFastMutex(a1);
}
