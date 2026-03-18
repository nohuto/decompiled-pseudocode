/*
 * XREFs of ACPIFilterIrpSurpriseRemoval @ 0x1C007AE50
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalIsReportedMissing @ 0x1C003CA08 (ACPIInternalIsReportedMissing.c)
 *     ACPIFilterIrpStopDevice @ 0x1C007AD60 (ACPIFilterIrpStopDevice.c)
 */

NTSTATUS __fastcall ACPIFilterIrpSurpriseRemoval(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( (*(_QWORD *)DeviceExtension & 0x8000000000000LL) != 0 || ACPIInternalIsReportedMissing(DeviceExtension) )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 720), a2);
  }
  else
  {
    *(_DWORD *)(DeviceExtension + 312) = 1;
    return ACPIFilterIrpStopDevice(a1, a2);
  }
}
