/*
 * XREFs of VerifierExfReleasePushLockShared @ 0x14071A414
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x14071A64C (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfReleasePushLockShared(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(235, a1);
  return pXdvExfReleasePushLockShared(a1);
}
