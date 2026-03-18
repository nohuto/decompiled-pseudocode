/*
 * XREFs of PopResumeDeviceIdle @ 0x1401148E8
 * Callers:
 *     PoClearBroadcast @ 0x140531904 (PoClearBroadcast.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

void PopResumeDeviceIdle()
{
  KIRQL v0; // al

  v0 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_140328A4C = 0;
  KeReleaseSpinLock(&PopDopeGlobalLock, v0);
}
