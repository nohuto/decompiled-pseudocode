/*
 * XREFs of PopResumeDeviceIdle @ 0x14011AB50
 * Callers:
 *     PoClearBroadcast @ 0x1404F8D9C (PoClearBroadcast.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void PopResumeDeviceIdle()
{
  KIRQL v0; // al

  v0 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_140305B6C = 0;
  KeReleaseSpinLock(&PopDopeGlobalLock, v0);
}
