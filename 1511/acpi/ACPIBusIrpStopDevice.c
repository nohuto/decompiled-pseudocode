/*
 * XREFs of ACPIBusIrpStopDevice @ 0x1C0079910
 * Callers:
 *     ACPIEcStopDevice @ 0x1C003AA90 (ACPIEcStopDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIFanStopDevice @ 0x1C003B8F0 (ACPIFanStopDevice.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C003FDDC (EnableDisableRegionSpacesForDevice.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C00409AC (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIThermalStopZone @ 0x1C0040B74 (ACPIThermalStopZone.c)
 *     EnableDisableRegions @ 0x1C0066F60 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C0067064 (IsNsobjPciBus.c)
 *     ACPIInitStopDevice @ 0x1C007B200 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C007B5DC (EnableDisableIPMIRegions.c)
 */

__int64 __fastcall ACPIBusIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  int v4; // eax
  char v5; // di
  __int64 v6; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = *(_DWORD *)(DeviceExtension + 312);
  if ( v4 != 1 )
  {
    if ( v4 == 3 && (*(_DWORD *)(DeviceExtension + 612) & 0x300) != 0 )
      EnableDisableRegionSpacesForDevice(DeviceExtension, 0);
    *(_DWORD *)(DeviceExtension + 312) = *(_DWORD *)(DeviceExtension + 316);
  }
  ACPIThermalReleaseCoolingInterfaces(DeviceExtension);
  v5 = (*(_DWORD *)(DeviceExtension + 904) & 0x8000LL) != 0;
  v6 = ACPIInternalGetDeviceExtension(*(_QWORD *)(DeviceExtension + 712));
  if ( IsNsobjPciBus(*(_QWORD *)(v6 + 704)) || v5 )
    EnableDisableRegions(*(_QWORD *)(DeviceExtension + 704), 0, v5);
  if ( (*(_DWORD *)DeviceExtension & 0x1000LL) != 0 )
    EnableDisableIPMIRegions(*(_QWORD *)(DeviceExtension + 704), 0LL);
  if ( (*(_DWORD *)DeviceExtension & 0x8000000) != 0 )
  {
    ACPIThermalStopZone(DeviceExtension);
  }
  else if ( (*(_QWORD *)(DeviceExtension + 904) & 0x200000000LL) != 0 )
  {
    ACPIFanStopDevice(DeviceExtension);
  }
  *(_DWORD *)(DeviceExtension + 312) = 0;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  ACPIInitStopDevice(DeviceExtension, 0LL);
  return 0LL;
}
