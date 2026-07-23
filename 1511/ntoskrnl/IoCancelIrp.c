/*
 * XREFs of IoCancelIrp @ 0x1400C97FC
 * Callers:
 *     IopCancelIrpsInCurrentThreadList @ 0x1400C91F4 (IopCancelIrpsInCurrentThreadList.c)
 *     IopCancelIrpsInFileObjectList @ 0x1400CC5B4 (IopCancelIrpsInFileObjectList.c)
 *     FsRtlpWaitOnIrp @ 0x1400CC9E8 (FsRtlpWaitOnIrp.c)
 *     PopThermalZoneDpc @ 0x140103B8C (PopThermalZoneDpc.c)
 *     IoCancelThreadIo @ 0x1403F1DC4 (IoCancelThreadIo.c)
 *     NtCancelIoFile @ 0x140490800 (NtCancelIoFile.c)
 *     FsRtlSetKernelEaFile @ 0x1404A233C (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404A249C (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1404A2780 (FsRtlQueryKernelEaFile.c)
 *     IopCancelAlertedRequest @ 0x1404C5FBC (IopCancelAlertedRequest.c)
 *     PopBatteryWorker @ 0x1404F9510 (PopBatteryWorker.c)
 *     FsRtlQueryInformationFile @ 0x1405F46E4 (FsRtlQueryInformationFile.c)
 *     IopCancelPendingEject @ 0x1406152E8 (IopCancelPendingEject.c)
 *     PopBatteryRemove @ 0x140636F3C (PopBatteryRemove.c)
 *     PopThermalReadCounters @ 0x140638014 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x140638118 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140638208 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopFanRemove @ 0x14063BC9C (PopFanRemove.c)
 *     VerifierIoCancelIrp @ 0x1406C06E4 (VerifierIoCancelIrp.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     IovCancelIrp @ 0x1406B4EFC (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x1406BEFB8 (IovpCancelRoutine.c)
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
