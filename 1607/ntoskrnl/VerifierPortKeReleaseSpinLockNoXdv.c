/*
 * XREFs of VerifierPortKeReleaseSpinLockNoXdv @ 0x140712B6C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     ViKeReleaseSpinLockCommon @ 0x140713194 (ViKeReleaseSpinLockCommon.c)
 */

__int64 __fastcall VerifierPortKeReleaseSpinLockNoXdv(PKSPIN_LOCK SpinLock, KIRQL a2)
{
  __int64 v4; // rbx

  v4 = ViKeReleaseSpinLockCommon((int)SpinLock);
  KeReleaseSpinLock(SpinLock, a2);
  return ViKeIrqlLogCommon(v4, 1LL);
}
