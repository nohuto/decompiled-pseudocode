/*
 * XREFs of VerifierExAcquireFastMutexUnsafeNoReboot @ 0x1406CE10C
 * Callers:
 *     VerifierExAcquireFastMutexUnsafe @ 0x1406CE0D4 (VerifierExAcquireFastMutexUnsafe.c)
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x1406CE594 (ViExCheckAPCsDisabled.c)
 */

void __fastcall VerifierExAcquireFastMutexUnsafeNoReboot(struct _FAST_MUTEX *a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(57, (ULONG_PTR)a1);
  pXdvExAcquireFastMutexUnsafe(a1);
}
