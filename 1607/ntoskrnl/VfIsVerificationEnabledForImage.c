/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x140222450
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x140653388 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x1406FE3EC (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x1406FE42C (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140704D8C (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
