/*
 * XREFs of IovUtilGetUpperDeviceObject @ 0x14070E064
 * Callers:
 *     IovpExamineDevObjForwarding @ 0x14070B690 (IovpExamineDevObjForwarding.c)
 * Callees:
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
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
