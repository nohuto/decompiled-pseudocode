/*
 * XREFs of IoDeleteDevice @ 0x140007508
 * Callers:
 *     RawDeleteVcb @ 0x14040E054 (RawDeleteVcb.c)
 *     RawMountVolume @ 0x14040E7F4 (RawMountVolume.c)
 *     IopInitializeDeviceInstanceKey @ 0x1404E73A8 (IopInitializeDeviceInstanceKey.c)
 *     PiSwDestroyDeviceObject @ 0x140539CF4 (PiSwDestroyDeviceObject.c)
 *     PiSwGetChildPdo @ 0x140539FCC (PiSwGetChildPdo.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     IopFindLegacyDeviceNode @ 0x14067F04C (IopFindLegacyDeviceNode.c)
 *     IopRemoveLegacyDeviceNode @ 0x14067F5C8 (IopRemoveLegacyDeviceNode.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 *     RawShutdown @ 0x1406C6B8C (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x140738C50 (ViDdiDriverEntry.c)
 *     VerifierIoDeleteDevice @ 0x140741F20 (VerifierIoDeleteDevice.c)
 *     VfFilterAttach @ 0x1407524D4 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x1407527DC (ViFilterDispatchPnp.c)
 *     RawInitialize @ 0x1407B9A68 (RawInitialize.c)
 *     WmipDriverEntry @ 0x1407B9CBC (WmipDriverEntry.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PoRegisterDeviceForIdleDetection @ 0x1400075E0 (PoRegisterDeviceForIdleDetection.c)
 *     IopCompleteUnloadOrDelete @ 0x140007694 (IopCompleteUnloadOrDelete.c)
 *     MiLockPagableImageSection @ 0x140010490 (MiLockPagableImageSection.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     IopRemoveTimerFromTimerList @ 0x1401F6BFC (IopRemoveTimerFromTimerList.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IoUnregisterShutdownNotification @ 0x1403FE474 (IoUnregisterShutdownNotification.c)
 *     PnpFreeInterruptInformation @ 0x14040E07C (PnpFreeInterruptInformation.c)
 *     MmLockPagableSectionByHandle @ 0x1404251E8 (MmLockPagableSectionByHandle.c)
 *     ObMakeTemporaryObject @ 0x140539B08 (ObMakeTemporaryObject.c)
 *     IovDeleteDevice @ 0x1407352B0 (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  PIO_TIMER Timer; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rbp
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rsi
  KIRQL v5; // al
  __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 v8; // di
  _LIST_ENTRY *p_Volume; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v12; // di
  unsigned __int32 v13; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

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
    v6 = KeAbPreAcquire((ULONG_PTR)&PopVolumeLock);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopVolumeLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PopVolumeLock);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    qword_14032E608 = (__int64)KeGetCurrentThread();
    dword_14032E630 = CurrentIrql;
    v8 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&PopDopeGlobalLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&PopDopeGlobalLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(&PopDopeGlobalLock);
    }
    p_Volume = &Dope->Volume;
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&PopDopeGlobalLock, retaddr);
    else
      _InterlockedAnd64(&PopDopeGlobalLock, 0LL);
    __writecr8(v8);
    qword_14032E608 = 0LL;
    v12 = dword_14032E630;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)&PopVolumeLock, 1, 0);
    if ( v13 )
      ExpReleaseFastMutexContended(&PopVolumeLock, v13);
    __writecr8(v12);
    KeAbPostRelease((ULONG_PTR)&PopVolumeLock);
    MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
  }
  PnpFreeInterruptInformation(DeviceObject);
  v5 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceObject->DeviceObjectExtension->ExtensionFlags |= 2u;
  if ( DeviceObject->ReferenceCount )
    KeReleaseQueuedSpinLock(0xAuLL, v5);
  else
    IopCompleteUnloadOrDelete((ULONG_PTR)DeviceObject);
}
