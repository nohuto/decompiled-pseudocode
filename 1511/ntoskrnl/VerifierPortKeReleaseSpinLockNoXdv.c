/*
 * XREFs of VerifierPortKeReleaseSpinLockNoXdv @ 0x1406C6B1C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     ViKeReleaseSpinLockCommon @ 0x1406C714C (ViKeReleaseSpinLockCommon.c)
 */

__int64 __fastcall VerifierPortKeReleaseSpinLockNoXdv(PKSPIN_LOCK SpinLock, KIRQL a2)
{
  __int64 v4; // rbx

  v4 = ViKeReleaseSpinLockCommon((int)SpinLock);
  KeReleaseSpinLock(SpinLock, a2);
  return ViKeIrqlLogCommon(v4, 1LL);
}
