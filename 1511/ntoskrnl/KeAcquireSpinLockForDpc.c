/*
 * XREFs of KeAcquireSpinLockForDpc @ 0x1401C4AB0
 * Callers:
 *     VerifierKeAcquireSpinLockForDpc @ 0x1406C0954 (VerifierKeAcquireSpinLockForDpc.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 */

KIRQL __stdcall KeAcquireSpinLockForDpc(PKSPIN_LOCK SpinLock)
{
  KIRQL v1; // bl

  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    return KeAcquireSpinLockRaiseToDpc(SpinLock);
  v1 = 2;
  KxAcquireSpinLock(SpinLock);
  return v1;
}
