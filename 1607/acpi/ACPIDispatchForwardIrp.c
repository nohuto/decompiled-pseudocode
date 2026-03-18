/*
 * XREFs of ACPIDispatchForwardIrp @ 0x1C00040B0
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00044E0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIDispatchWmiLog @ 0x1C002A2F0 (ACPIDispatchWmiLog.c)
 *     ACPIDispatchForwardIrpWithExceptions @ 0x1C004C160 (ACPIDispatchForwardIrpWithExceptions.c)
 *     ACPIFilterIrpQueryId @ 0x1C0083E40 (ACPIFilterIrpQueryId.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0084D80 (ACPIRootIrpQueryInterface.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C0084F60 (ACPIFilterIrpQueryInterface.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C0085510 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0087EF0 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIThermalWmi @ 0x1C0090940 (ACPIThermalWmi.c)
 *     ACPIEcOtherIrpDispatch @ 0x1C009ABE0 (ACPIEcOtherIrpDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDispatchForwardIrp(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  KIRQL v4; // al
  __int64 v5; // rdi
  unsigned int Status; // edi

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v5 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( v5 && *(_DWORD *)(v5 + 16) != 1599293264 )
    KeBugCheckEx(0xA3u, 2uLL, 0x90146uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  if ( *(_QWORD *)(v5 + 728) )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 728), Irp);
  }
  else
  {
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
  }
  return Status;
}
