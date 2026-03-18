/*
 * XREFs of IopGetFsRegistrationInProgress @ 0x1401BB668
 * Callers:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140522AA0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoEnumerateRegisteredFiltersList @ 0x14054892C (IoEnumerateRegisteredFiltersList.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
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
