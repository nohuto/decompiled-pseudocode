/*
 * XREFs of ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C0079740
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000CEB4 (ACPIThermalAcquireCoolingInterfaces.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C003FDDC (EnableDisableRegionSpacesForDevice.c)
 */

__int64 __fastcall ACPIBusIrpCancelRemoveOrStopDevice(ULONG_PTR a1, IRP *a2)
{
  _DWORD *DeviceExtension; // rax
  __int64 v4; // rbx
  int v5; // ecx

  DeviceExtension = (_DWORD *)ACPIInternalGetDeviceExtension(a1);
  v4 = (__int64)DeviceExtension;
  if ( (*DeviceExtension & 0x204000) != 0x200000LL )
  {
    if ( DeviceExtension[78] == 1 )
    {
      v5 = DeviceExtension[79];
      DeviceExtension[78] = v5;
      if ( v5 == 3 && (DeviceExtension[153] & 0x300) != 0 )
        EnableDisableRegionSpacesForDevice((__int64)DeviceExtension, 1);
    }
    if ( !*(_QWORD *)(v4 + 600) )
      ACPIThermalAcquireCoolingInterfaces(v4);
  }
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
