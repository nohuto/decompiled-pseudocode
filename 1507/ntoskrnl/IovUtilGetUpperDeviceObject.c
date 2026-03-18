/*
 * XREFs of IovUtilGetUpperDeviceObject @ 0x140743874
 * Callers:
 *     IovpExamineDevObjForwarding @ 0x140740A0C (IovpExamineDevObjForwarding.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
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
