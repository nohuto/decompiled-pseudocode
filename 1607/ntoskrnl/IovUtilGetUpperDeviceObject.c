/*
 * XREFs of IovUtilGetUpperDeviceObject @ 0x14070E094
 * Callers:
 *     IovpExamineDevObjForwarding @ 0x14070B6C0 (IovpExamineDevObjForwarding.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
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
