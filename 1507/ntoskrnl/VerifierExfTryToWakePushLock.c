/*
 * XREFs of VerifierExfTryToWakePushLock @ 0x140751D9C
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x140751FC4 (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfTryToWakePushLock(volatile signed __int64 *a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(235, (ULONG_PTR)a1);
  return pXdvExfTryToWakePushLock(a1);
}
