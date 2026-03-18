/*
 * XREFs of VerifierExAcquireFastMutexUnsafeNoReboot @ 0x14071A1C4
 * Callers:
 *     VerifierExAcquireFastMutexUnsafe @ 0x14071A18C (VerifierExAcquireFastMutexUnsafe.c)
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x14071A64C (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExAcquireFastMutexUnsafeNoReboot(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(57, a1);
  return pXdvExAcquireFastMutexUnsafe(a1);
}
