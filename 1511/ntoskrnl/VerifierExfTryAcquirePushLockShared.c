/*
 * XREFs of VerifierExfTryAcquirePushLockShared @ 0x1406CE390
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x1406CE594 (ViExCheckAPCsDisabled.c)
 */

char __fastcall VerifierExfTryAcquirePushLockShared(signed __int64 *a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(234, (ULONG_PTR)a1);
  return pXdvExfTryAcquirePushLockShared(a1);
}
