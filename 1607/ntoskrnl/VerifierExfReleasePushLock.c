/*
 * XREFs of VerifierExfReleasePushLock @ 0x14071A3E0
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x14071A64C (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfReleasePushLock(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(235, a1);
  return pXdvExfReleasePushLock(a1);
}
