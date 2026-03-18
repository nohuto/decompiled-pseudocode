/*
 * XREFs of ACPIRootIrpStopDevice @ 0x1C007ED30
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIRootIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  unsigned int v4; // edi

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_DWORD *)(DeviceExtension + 312) == 1 )
  {
    *(_DWORD *)(DeviceExtension + 312) = 0;
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 720), a2);
  }
  else
  {
    v4 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    IofCompleteRequest(a2, 0);
  }
  return v4;
}
