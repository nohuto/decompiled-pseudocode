/*
 * XREFs of ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C007EE90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C00409AC (ACPIThermalReleaseCoolingInterfaces.c)
 */

__int64 __fastcall ACPIRootIrpQueryRemoveOrStopDevice(ULONG_PTR a1, IRP *a2)
{
  _DWORD *DeviceExtension; // rax
  PDEVICE_OBJECT *v4; // rdi
  unsigned int v5; // edi

  DeviceExtension = (_DWORD *)ACPIInternalGetDeviceExtension(a1);
  v4 = (PDEVICE_OBJECT *)DeviceExtension;
  if ( (*DeviceExtension & 0x200000) != 0 )
  {
    v5 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ACPIThermalReleaseCoolingInterfaces((__int64)DeviceExtension);
    *((_DWORD *)v4 + 79) = *((_DWORD *)v4 + 78);
    *((_DWORD *)v4 + 78) = 1;
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(v4[90], a2);
  }
  return v5;
}
