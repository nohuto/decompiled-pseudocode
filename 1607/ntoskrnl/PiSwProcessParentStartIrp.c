/*
 * XREFs of PiSwProcessParentStartIrp @ 0x1404C8128
 * Callers:
 *     PnpStartDeviceNode @ 0x1403F10D4 (PnpStartDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1403F2B90 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     IoInvalidateDeviceRelations @ 0x14009ECD4 (IoInvalidateDeviceRelations.c)
 *     PiSwLock @ 0x1403F1A74 (PiSwLock.c)
 *     PiSwFindChildren @ 0x1403F1A94 (PiSwFindChildren.c)
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
