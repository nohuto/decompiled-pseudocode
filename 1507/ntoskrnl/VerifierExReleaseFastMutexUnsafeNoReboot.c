/*
 * XREFs of VerifierExReleaseFastMutexUnsafeNoReboot @ 0x140751C04
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x140751FC4 (ViExCheckAPCsDisabled.c)
 */

void __fastcall VerifierExReleaseFastMutexUnsafeNoReboot(struct _FAST_MUTEX *a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(58, (ULONG_PTR)a1);
  pXdvExReleaseFastMutexUnsafe(a1);
}
