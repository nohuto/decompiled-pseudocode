/*
 * XREFs of IoDeleteDevice @ 0x14007F30C
 * Callers:
 *     RawMountVolume @ 0x1403EE6BC (RawMountVolume.c)
 *     PiSwGetChildPdo @ 0x1403F1528 (PiSwGetChildPdo.c)
 *     RawDeleteVcb @ 0x140475114 (RawDeleteVcb.c)
 *     IopInitializeDeviceInstanceKey @ 0x14049DE94 (IopInitializeDeviceInstanceKey.c)
 *     PiSwDestroyDeviceObject @ 0x1404C3958 (PiSwDestroyDeviceObject.c)
 *     IopLegacyResourceAllocation @ 0x1405549AC (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x140554AD8 (IopRemoveLegacyDeviceNode.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     RegistryUnload @ 0x140612D80 (RegistryUnload.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 *     RawShutdown @ 0x140682EB8 (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x1407047B8 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x14071AB04 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x14071ADC8 (ViFilterDispatchPnp.c)
 *     RawInitialize @ 0x14079C354 (RawInitialize.c)
 *     WmipDriverEntry @ 0x14079CA30 (WmipDriverEntry.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     MiLockPagableImageSection @ 0x140014884 (MiLockPagableImageSection.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     IopCompleteUnloadOrDelete @ 0x14007F1AC (IopCompleteUnloadOrDelete.c)
 *     PoRegisterDeviceForIdleDetection @ 0x14007F3D8 (PoRegisterDeviceForIdleDetection.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopRemoveTimerFromTimerList @ 0x1401C9660 (IopRemoveTimerFromTimerList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IoUnregisterShutdownNotification @ 0x1403DA0D4 (IoUnregisterShutdownNotification.c)
 *     PnpFreeInterruptInformation @ 0x1404750F0 (PnpFreeInterruptInformation.c)
 *     MmLockPagableSectionByHandle @ 0x1404DC9CC (MmLockPagableSectionByHandle.c)
 *     ObMakeTemporaryObject @ 0x1404EB310 (ObMakeTemporaryObject.c)
 *     IovDeleteDevice @ 0x140700F88 (IovDeleteDevice.c)
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
