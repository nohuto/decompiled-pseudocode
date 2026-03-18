/*
 * XREFs of ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00796D0
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0065000 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C0065790 (ACPIBusIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDockIsDockDevice @ 0x1C000DE9C (ACPIDockIsDockDevice.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0034E10 (ACPIDockFindCorrespondingDock.c)
 *     ACPIDetectEjectDevices @ 0x1C00378E8 (ACPIDetectEjectDevices.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryEjectRelations(ULONG_PTR a1, __int64 a2, PVOID *a3)
{
  _QWORD *CorrespondingDock; // rbx
  __int64 DeviceExtension; // rdi

  CorrespondingDock = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( !*(_QWORD *)(DeviceExtension + 704) )
    return 3221225485LL;
  if ( ACPIDockIsDockDevice() )
    CorrespondingDock = ACPIDockFindCorrespondingDock(DeviceExtension);
  return ACPIDetectEjectDevices(DeviceExtension, a3, CorrespondingDock);
}
