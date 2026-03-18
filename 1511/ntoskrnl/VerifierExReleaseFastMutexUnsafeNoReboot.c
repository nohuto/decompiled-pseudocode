/*
 * XREFs of VerifierExReleaseFastMutexUnsafeNoReboot @ 0x1406CE22C
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x1406CE594 (ViExCheckAPCsDisabled.c)
 */

void __fastcall VerifierExReleaseFastMutexUnsafeNoReboot(struct _FAST_MUTEX *a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(58, (ULONG_PTR)a1);
  pXdvExReleaseFastMutexUnsafe(a1);
}
