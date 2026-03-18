/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x14020AB68
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x14061E02C (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x1406B2680 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x1406B26C0 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x1406B8CD0 (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
