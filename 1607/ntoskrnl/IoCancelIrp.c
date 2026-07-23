/*
 * XREFs of IoCancelIrp @ 0x1400A097C
 * Callers:
 *     IopCancelIrpsInFileObjectList @ 0x1400A0620 (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x1400A0894 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalZoneDpc @ 0x1400B20C4 (PopThermalZoneDpc.c)
 *     FsRtlpWaitOnIrp @ 0x1400B215C (FsRtlpWaitOnIrp.c)
 *     IoCancelThreadIo @ 0x1404B1F50 (IoCancelThreadIo.c)
 *     NtCancelIoFile @ 0x1404B1FE8 (NtCancelIoFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1404B33F8 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404B5000 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x1404CB0F8 (FsRtlSetKernelEaFile.c)
 *     IopCancelAlertedRequest @ 0x1404D2CCC (IopCancelAlertedRequest.c)
 *     PopBatteryWorker @ 0x1405440D0 (PopBatteryWorker.c)
 *     FsRtlQueryInformationFile @ 0x14061EAFC (FsRtlQueryInformationFile.c)
 *     IopCancelPendingEject @ 0x140649E24 (IopCancelPendingEject.c)
 *     PopBatteryRemove @ 0x14066F404 (PopBatteryRemove.c)
 *     PopThermalReadCounters @ 0x140670530 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x140670634 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140670738 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopFanRemove @ 0x14067310C (PopFanRemove.c)
 * Callees:
 *     IoAcquireCancelSpinLock @ 0x1400784C0 (IoAcquireCancelSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     IovCancelIrp @ 0x140700D64 (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x14070B040 (IovpCancelRoutine.c)
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
