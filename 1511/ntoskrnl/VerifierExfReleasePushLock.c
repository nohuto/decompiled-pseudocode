/*
 * XREFs of VerifierExfReleasePushLock @ 0x1406CE328
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x1406CE594 (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfReleasePushLock(_QWORD *a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(235, (ULONG_PTR)a1);
  return pXdvExfReleasePushLock(a1);
}
