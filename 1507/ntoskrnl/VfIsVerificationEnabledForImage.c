/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x14025A0CC
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x14069CC3C (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x140732680 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x1407326C0 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x1407391EC (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
