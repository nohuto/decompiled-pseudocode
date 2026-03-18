/*
 * XREFs of IovUtilGetBottomDeviceObject @ 0x1407437CC
 * Callers:
 *     IovpCallDriver1 @ 0x14073F69C (IovpCallDriver1.c)
 *     IovUtilIsWdmStack @ 0x140743A30 (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x14074CE18 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x14074D3D8 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
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
