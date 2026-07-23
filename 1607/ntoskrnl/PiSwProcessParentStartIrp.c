/*
 * XREFs of PiSwProcessParentStartIrp @ 0x1404CFB84
 * Callers:
 *     PnpStartDeviceNode @ 0x1403EFF98 (PnpStartDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1403F1A54 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     IoInvalidateDeviceRelations @ 0x140085F2C (IoInvalidateDeviceRelations.c)
 *     PiSwLock @ 0x1403F0938 (PiSwLock.c)
 *     PiSwFindChildren @ 0x1403F0958 (PiSwFindChildren.c)
 */

void __fastcall PiSwProcessParentStartIrp(PDEVICE_OBJECT DeviceObject)
{
  __int64 Children; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  PiSwLock();
  Children = PiSwFindChildren();
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v3, v4, v5);
  if ( Children )
    IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
}
