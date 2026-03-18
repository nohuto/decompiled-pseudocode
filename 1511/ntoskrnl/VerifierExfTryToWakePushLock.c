/*
 * XREFs of VerifierExfTryToWakePushLock @ 0x1406CE3C4
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x1406CE594 (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfTryToWakePushLock(volatile signed __int64 *a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(235, (ULONG_PTR)a1);
  return pXdvExfTryToWakePushLock(a1);
}
