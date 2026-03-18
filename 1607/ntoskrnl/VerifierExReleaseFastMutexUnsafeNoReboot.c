/*
 * XREFs of VerifierExReleaseFastMutexUnsafeNoReboot @ 0x14071A2E4
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x14071A64C (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExReleaseFastMutexUnsafeNoReboot(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(58, a1);
  return pXdvExReleaseFastMutexUnsafe(a1);
}
