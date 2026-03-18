/*
 * XREFs of VerifierExfAcquirePushLockExclusive @ 0x1406CE2C0
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x1406CE594 (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfAcquirePushLockExclusive(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(234, a1);
  return pXdvExfAcquirePushLockExclusive(a1);
}
