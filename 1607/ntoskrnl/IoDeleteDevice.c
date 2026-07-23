/*
 * XREFs of IoDeleteDevice @ 0x14007F38C
 * Callers:
 *     RawMountVolume @ 0x1403EFCEC (RawMountVolume.c)
 *     PiSwGetChildPdo @ 0x1403F03EC (PiSwGetChildPdo.c)
 *     RawDeleteVcb @ 0x140473FE4 (RawDeleteVcb.c)
 *     PiSwDestroyDeviceObject @ 0x140483C74 (PiSwDestroyDeviceObject.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405162A0 (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x140554EEC (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x140555018 (IopRemoveLegacyDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 *     RegistryUnload @ 0x140612E34 (RegistryUnload.c)
 *     PiInitializeDevice @ 0x14064AD78 (PiInitializeDevice.c)
 *     RawShutdown @ 0x140682F9C (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x1407047E8 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x14071AB04 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x14071ADC8 (ViFilterDispatchPnp.c)
 *     RawInitialize @ 0x14079C354 (RawInitialize.c)
 *     WmipDriverEntry @ 0x14079CA30 (WmipDriverEntry.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     MiLockPagableImageSection @ 0x140014404 (MiLockPagableImageSection.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     IopCompleteUnloadOrDelete @ 0x14007F22C (IopCompleteUnloadOrDelete.c)
 *     PoRegisterDeviceForIdleDetection @ 0x14007F458 (PoRegisterDeviceForIdleDetection.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopRemoveTimerFromTimerList @ 0x1401C9500 (IopRemoveTimerFromTimerList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IoUnregisterShutdownNotification @ 0x1403DA0D4 (IoUnregisterShutdownNotification.c)
 *     PnpFreeInterruptInformation @ 0x140473FC0 (PnpFreeInterruptInformation.c)
 *     MmLockPagableSectionByHandle @ 0x1404BFFD0 (MmLockPagableSectionByHandle.c)
 *     ObMakeTemporaryObject @ 0x1404CD494 (ObMakeTemporaryObject.c)
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
