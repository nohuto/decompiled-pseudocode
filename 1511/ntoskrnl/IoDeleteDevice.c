/*
 * XREFs of IoDeleteDevice @ 0x1400D0DC8
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1403BA028 (IopInitializeDeviceInstanceKey.c)
 *     RawMountVolume @ 0x140491570 (RawMountVolume.c)
 *     PiSwDestroyDeviceObject @ 0x140493B44 (PiSwDestroyDeviceObject.c)
 *     RawDeleteVcb @ 0x1404940E4 (RawDeleteVcb.c)
 *     PiSwGetChildPdo @ 0x140494F18 (PiSwGetChildPdo.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     IopFindLegacyDeviceNode @ 0x140604424 (IopFindLegacyDeviceNode.c)
 *     IopRemoveLegacyDeviceNode @ 0x140604864 (IopRemoveLegacyDeviceNode.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 *     RawShutdown @ 0x140643E54 (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x1406B872C (ViDdiDriverEntry.c)
 *     VerifierIoDeleteDevice @ 0x1406C072C (VerifierIoDeleteDevice.c)
 *     VfFilterAttach @ 0x1406CEA4C (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x1406CED10 (ViFilterDispatchPnp.c)
 *     RawInitialize @ 0x1407528E0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140752B34 (WmipDriverEntry.c)
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     IopCompleteUnloadOrDelete @ 0x140003C9C (IopCompleteUnloadOrDelete.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     MiLockPagableImageSection @ 0x140035BD8 (MiLockPagableImageSection.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     PoRegisterDeviceForIdleDetection @ 0x1400D0E94 (PoRegisterDeviceForIdleDetection.c)
 *     IopRemoveTimerFromTimerList @ 0x1401BB7F4 (IopRemoveTimerFromTimerList.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoUnregisterShutdownNotification @ 0x1403AE054 (IoUnregisterShutdownNotification.c)
 *     PnpFreeInterruptInformation @ 0x14049410C (PnpFreeInterruptInformation.c)
 *     ObMakeTemporaryObject @ 0x140494274 (ObMakeTemporaryObject.c)
 *     MmLockPagableSectionByHandle @ 0x1404B6838 (MmLockPagableSectionByHandle.c)
 *     IovDeleteDevice @ 0x1406B5120 (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  PIO_TIMER Timer; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rsi
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rdi
  KIRQL v5; // al
  KIRQL v6; // al
  _LIST_ENTRY *p_Volume; // rcx
  KIRQL v8; // bp
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *Blink; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 0x90) != 0 )
    IovDeleteDevice(DeviceObject, retaddr);
  if ( (DeviceObject->Flags & 0x800) != 0 )
    IoUnregisterShutdownNotification(DeviceObject);
  Timer = DeviceObject->Timer;
  if ( Timer )
  {
    IopRemoveTimerFromTimerList(DeviceObject->Timer);
    ExFreePoolWithTag(Timer, 0);
  }
  if ( (DeviceObject->Flags & 0x40) != 0 )
    ObMakeTemporaryObject(DeviceObject);
  DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
  PoRegisterDeviceForIdleDetection(DeviceObject, 0, 0, PowerDeviceUnspecified);
  Dope = DeviceObjectExtension->Dope;
  if ( Dope )
  {
    MmLockPagableSectionByHandle(ExPageLockHandle);
    ExAcquireFastMutex(&PopVolumeLock);
    v6 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
    p_Volume = &Dope->Volume;
    v8 = v6;
    if ( Dope->Volume.Flink )
    {
      Flink = p_Volume->Flink;
      Blink = Dope->Volume.Blink;
      if ( p_Volume->Flink->Blink != p_Volume || Blink->Flink != p_Volume )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      p_Volume->Flink = 0LL;
      Dope->Volume.Blink = 0LL;
    }
    DeviceObjectExtension->Dope = 0LL;
    ExFreePoolWithTag(Dope, 0);
    KeReleaseSpinLock(&PopDopeGlobalLock, v8);
    KeReleaseGuardedMutex(&PopVolumeLock);
    MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
  }
  PnpFreeInterruptInformation(DeviceObject);
  v5 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceObject->DeviceObjectExtension->ExtensionFlags |= 2u;
  if ( DeviceObject->ReferenceCount )
    KeReleaseQueuedSpinLock(0xAuLL, v5);
  else
    IopCompleteUnloadOrDelete((ULONG_PTR)DeviceObject, 0, v5);
}
