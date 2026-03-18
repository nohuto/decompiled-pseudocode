/*
 * XREFs of IoCancelIrp @ 0x1400A2054
 * Callers:
 *     IopCancelIrpsInFileObjectList @ 0x1400A1CF8 (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x1400A1F6C (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalZoneDpc @ 0x1400B4244 (PopThermalZoneDpc.c)
 *     FsRtlpWaitOnIrp @ 0x1400B42DC (FsRtlpWaitOnIrp.c)
 *     IoCancelThreadIo @ 0x1404CC524 (IoCancelThreadIo.c)
 *     NtCancelIoFile @ 0x1404CC5BC (NtCancelIoFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1404CE198 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404D1560 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x1404E8D6C (FsRtlSetKernelEaFile.c)
 *     IopCancelAlertedRequest @ 0x1404F0BD8 (IopCancelAlertedRequest.c)
 *     PopBatteryWorker @ 0x140543B90 (PopBatteryWorker.c)
 *     FsRtlQueryInformationFile @ 0x14061EA48 (FsRtlQueryInformationFile.c)
 *     IopCancelPendingEject @ 0x140649D40 (IopCancelPendingEject.c)
 *     PopBatteryRemove @ 0x14066F320 (PopBatteryRemove.c)
 *     PopThermalReadCounters @ 0x14067044C (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x140670550 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140670654 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopFanRemove @ 0x140673028 (PopFanRemove.c)
 * Callees:
 *     IoAcquireCancelSpinLock @ 0x140078440 (IoAcquireCancelSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     IovCancelIrp @ 0x140700D64 (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x14070B010 (IovpCancelRoutine.c)
 */

BOOLEAN __stdcall IoCancelIrp(PIRP Irp)
{
  void (__fastcall *v2)(PDEVICE_OBJECT, PIRP); // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  KIRQL v4; // si
  PDEVICE_OBJECT DeviceObject; // rcx
  KIRQL Irql; // [rsp+40h] [rbp+8h] BYREF

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
