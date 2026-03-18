/*
 * XREFs of ACPIDispatchForwardIrp @ 0x1C0004180
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00012D0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIDispatchWmiLog @ 0x1C0022C20 (ACPIDispatchWmiLog.c)
 *     ACPIDispatchForwardIrpWithExceptions @ 0x1C00395A0 (ACPIDispatchForwardIrpWithExceptions.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C0067600 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0068FC0 (ACPIRootIrpQueryInterface.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C00690E0 (ACPIFilterIrpQueryInterface.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C006AA50 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIFilterIrpQueryId @ 0x1C0072AD0 (ACPIFilterIrpQueryId.c)
 *     ACPIThermalWmi @ 0x1C00731F0 (ACPIThermalWmi.c)
 *     ACPIEcOtherIrpDispatch @ 0x1C0079CF0 (ACPIEcOtherIrpDispatch.c)
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
  if ( v5 && *(_DWORD *)(v5 + 8) != 1599293264 )
    KeBugCheckEx(0xA3u, 2uLL, 0x90145uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  if ( *(_QWORD *)(v5 + 720) )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 720), Irp);
  }
  else
  {
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
  }
  return Status;
}
