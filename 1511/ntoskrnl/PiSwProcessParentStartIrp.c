/*
 * XREFs of PiSwProcessParentStartIrp @ 0x1404EA410
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1404573BC (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpStartDeviceNode @ 0x1404F2A48 (PnpStartDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IoInvalidateDeviceRelations @ 0x1400D1570 (IoInvalidateDeviceRelations.c)
 *     PiSwLock @ 0x140494B8C (PiSwLock.c)
 *     PiSwFindChildren @ 0x140496750 (PiSwFindChildren.c)
 */

void __fastcall PiSwProcessParentStartIrp(PDEVICE_OBJECT DeviceObject)
{
  __int64 Children; // rbx

  PiSwLock();
  Children = PiSwFindChildren();
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( Children )
    IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
}
