/*
 * XREFs of VerifierExAcquireFastMutexUnsafeNoReboot @ 0x140751A9C
 * Callers:
 *     VerifierExAcquireFastMutexUnsafe @ 0x140751A64 (VerifierExAcquireFastMutexUnsafe.c)
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x140751FC4 (ViExCheckAPCsDisabled.c)
 */

void __fastcall VerifierExAcquireFastMutexUnsafeNoReboot(struct _FAST_MUTEX *a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(57, (ULONG_PTR)a1);
  pXdvExAcquireFastMutexUnsafe(a1);
}
