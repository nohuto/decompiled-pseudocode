/*
 * XREFs of IovUtilGetUpperDeviceObject @ 0x1406C1FD4
 * Callers:
 *     IovpExamineDevObjForwarding @ 0x1406BF638 (IovpExamineDevObjForwarding.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 */

void *__fastcall IovUtilGetUpperDeviceObject(__int64 a1)
{
  KIRQL v2; // al
  void *v3; // rbx
  KIRQL v4; // di

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = *(void **)(a1 + 24);
  v4 = v2;
  if ( v3 )
    ObfReferenceObject(v3);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return v3;
}
