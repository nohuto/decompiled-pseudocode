/*
 * XREFs of VerifierExfAcquirePushLockShared @ 0x1406CE2F4
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x1406CE594 (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfAcquirePushLockShared(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(234, a1);
  return pXdvExfAcquirePushLockShared(a1);
}
