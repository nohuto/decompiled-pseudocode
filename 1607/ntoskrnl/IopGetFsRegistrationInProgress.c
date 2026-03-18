/*
 * XREFs of IopGetFsRegistrationInProgress @ 0x1401C9460
 * Callers:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1405506D0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoEnumerateRegisteredFiltersList @ 0x14057CF00 (IoEnumerateRegisteredFiltersList.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 */

char IopGetFsRegistrationInProgress()
{
  KIRQL v0; // al
  char v1; // bl

  v0 = KeAcquireQueuedSpinLock(0xAuLL);
  v1 = IopFsRegistrationInProgress;
  KeReleaseQueuedSpinLock(0xAuLL, v0);
  return v1;
}
