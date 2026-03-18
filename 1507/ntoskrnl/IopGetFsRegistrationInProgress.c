/*
 * XREFs of IopGetFsRegistrationInProgress @ 0x1401F69A4
 * Callers:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14058FA68 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoEnumerateRegisteredFiltersList @ 0x1405BF854 (IoEnumerateRegisteredFiltersList.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
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
