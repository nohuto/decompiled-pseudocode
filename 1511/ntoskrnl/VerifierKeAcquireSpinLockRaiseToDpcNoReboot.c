/*
 * XREFs of VerifierKeAcquireSpinLockRaiseToDpcNoReboot @ 0x1406C5E98
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VerifierKeAcquireSpinLockRaiseToDpcNoReboot(KSPIN_LOCK *a1)
{
  return ViKeAcquireSpinLockRaiseToDpcCommon(a1);
}
