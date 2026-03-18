/*
 * XREFs of VerifierPortKeReleaseSpinLock @ 0x1406C6AD4
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     ViKeReleaseSpinLockCommon @ 0x1406C714C (ViKeReleaseSpinLockCommon.c)
 */

__int64 __fastcall VerifierPortKeReleaseSpinLock(PKSPIN_LOCK SpinLock, KIRQL a2)
{
  __int64 v4; // rbx

  v4 = ViKeReleaseSpinLockCommon((int)SpinLock);
  pXdvKeReleaseSpinLock(SpinLock, a2);
  return ViKeIrqlLogCommon(v4, 1LL);
}
