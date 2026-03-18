/*
 * XREFs of ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C00796F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C004032C (EnableDisableRegionSpacesForDevice.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C0040EFC (ACPIThermalReleaseCoolingInterfaces.c)
 */

__int64 __fastcall ACPIBusIrpQueryRemoveOrStopDevice(ULONG_PTR a1, IRP *a2)
{
  _DWORD *DeviceExtension; // rbx
  unsigned int v4; // ebx

  DeviceExtension = (_DWORD *)ACPIInternalGetDeviceExtension(a1);
  if ( (DeviceExtension[226] & 0x40000) != 0 && a2->Tail.Overlay.CurrentStackLocation->MinorFunction == 5
    || (*DeviceExtension & 0x204000) == 0x200000LL )
  {
    v4 = -1073741808;
  }
  else
  {
    if ( DeviceExtension[78] == 3 && (DeviceExtension[153] & 0x300) != 0 )
      EnableDisableRegionSpacesForDevice((__int64)DeviceExtension, 0);
    ACPIThermalReleaseCoolingInterfaces((__int64)DeviceExtension);
    DeviceExtension[79] = DeviceExtension[78];
    DeviceExtension[78] = 1;
    v4 = 0;
  }
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  return v4;
}
