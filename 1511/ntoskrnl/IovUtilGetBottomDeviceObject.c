/*
 * XREFs of IovUtilGetBottomDeviceObject @ 0x1406C1F2C
 * Callers:
 *     IovpCallDriver1 @ 0x1406BE838 (IovpCallDriver1.c)
 *     IovUtilIsWdmStack @ 0x1406C2190 (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1406CA068 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1406CA334 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 */

PVOID __fastcall IovUtilGetBottomDeviceObject(_QWORD *Object)
{
  KIRQL v2; // si
  PVOID v3; // rdi

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  do
  {
    v3 = Object;
    Object = *(_QWORD **)(Object[39] + 48LL);
  }
  while ( Object );
  ObfReferenceObject(v3);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
