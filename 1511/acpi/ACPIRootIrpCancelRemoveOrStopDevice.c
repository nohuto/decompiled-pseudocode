/*
 * XREFs of ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C007EE20
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000CEB4 (ACPIThermalAcquireCoolingInterfaces.c)
 */

NTSTATUS __fastcall ACPIRootIrpCancelRemoveOrStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  if ( (*(_DWORD *)DeviceExtension & 0x200000) == 0 )
  {
    if ( *(_DWORD *)(DeviceExtension + 312) == 1 )
      *(_DWORD *)(DeviceExtension + 312) = *(_DWORD *)(DeviceExtension + 316);
    if ( !*(_QWORD *)(DeviceExtension + 600) )
      ACPIThermalAcquireCoolingInterfaces(DeviceExtension);
  }
  a2->IoStatus.Status = 0;
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 720), a2);
}
