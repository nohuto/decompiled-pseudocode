/*
 * XREFs of IoCancelIrp @ 0x140073FAC
 * Callers:
 *     IopCancelIrpsInCurrentThreadList @ 0x14007457C (IopCancelIrpsInCurrentThreadList.c)
 *     IopCancelIrpsInFileObjectList @ 0x140074834 (IopCancelIrpsInFileObjectList.c)
 *     PopThermalZoneDpc @ 0x14012F780 (PopThermalZoneDpc.c)
 *     FsRtlpWaitOnIrp @ 0x14016E528 (FsRtlpWaitOnIrp.c)
 *     IoCancelThreadIo @ 0x140420E38 (IoCancelThreadIo.c)
 *     NtCancelIoFile @ 0x1404A81DC (NtCancelIoFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140530A5C (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140541F58 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x140554078 (FsRtlSetKernelEaFile.c)
 *     PopBatteryWorker @ 0x14056B280 (PopBatteryWorker.c)
 *     IopCancelAlertedRequest @ 0x14058EC70 (IopCancelAlertedRequest.c)
 *     FsRtlQueryInformationFile @ 0x14066D780 (FsRtlQueryInformationFile.c)
 *     IopCancelPendingEject @ 0x140694060 (IopCancelPendingEject.c)
 *     PopBatteryRemove @ 0x1406B6CA8 (PopBatteryRemove.c)
 *     PopThermalReadCounters @ 0x1406B7E10 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x1406B8088 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x1406B8174 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopFanRemove @ 0x1406BB090 (PopFanRemove.c)
 *     VerifierIoCancelIrp @ 0x140741ED8 (VerifierIoCancelIrp.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x140073D60 (IoAcquireCancelSpinLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     IovCancelIrp @ 0x14073508C (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x14074027C (IovpCancelRoutine.c)
 */

BOOLEAN __stdcall IoCancelIrp(PIRP Irp)
{
  void (__fastcall *v2)(PDEVICE_OBJECT, PIRP); // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  UCHAR v4; // si
  PDEVICE_OBJECT DeviceObject; // rcx
  UCHAR Irql; // [rsp+40h] [rbp+8h] BYREF

  if ( ViVerifierDriverAddedThunkListHead )
    IovCancelIrp();
  IoAcquireCancelSpinLock(&Irql);
  Irp->Cancel = 1;
  v2 = (void (__fastcall *)(PDEVICE_OBJECT, PIRP))_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL);
  if ( v2 )
  {
    if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      KeBugCheckEx(0x48u, (ULONG_PTR)Irp, (ULONG_PTR)v2, 0LL, 0LL);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v4 = Irql;
    Irp->CancelIrql = Irql;
    DeviceObject = CurrentStackLocation->DeviceObject;
    if ( ViVerifierDriverAddedThunkListHead )
      IovpCancelRoutine(DeviceObject, Irp, v2);
    else
      v2(DeviceObject, Irp);
    if ( KeGetCurrentIrql() == 2 && v4 != 2 )
      KeBugCheckEx(0x11Bu, (ULONG_PTR)Irp, (ULONG_PTR)v2, 0LL, 0LL);
    return 1;
  }
  else
  {
    KeReleaseQueuedSpinLock(7uLL, Irql);
    return 0;
  }
}
