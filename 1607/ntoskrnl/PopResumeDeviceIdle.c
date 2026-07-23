/*
 * XREFs of PopResumeDeviceIdle @ 0x140114E58
 * Callers:
 *     PoClearBroadcast @ 0x140531E44 (PoClearBroadcast.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void PopResumeDeviceIdle()
{
  KIRQL v0; // al

  v0 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_140328A8C = 0;
  KeReleaseSpinLock(&PopDopeGlobalLock, v0);
}
