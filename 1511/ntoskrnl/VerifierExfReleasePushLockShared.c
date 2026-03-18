/*
 * XREFs of VerifierExfReleasePushLockShared @ 0x1406CE35C
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x1406CE594 (ViExCheckAPCsDisabled.c)
 */

unsigned __int64 __fastcall VerifierExfReleasePushLockShared(signed __int64 *a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(235, (ULONG_PTR)a1);
  return pXdvExfReleasePushLockShared(a1);
}
