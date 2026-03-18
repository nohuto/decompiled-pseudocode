/*
 * XREFs of VerifierExfTryToWakePushLock @ 0x14071A47C
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x14071A64C (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfTryToWakePushLock(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(235, a1);
  return pXdvExfTryToWakePushLock(a1);
}
