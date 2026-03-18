/*
 * XREFs of IoReleaseRemoveLockEx @ 0x14009DD7C
 * Callers:
 *     PopFxActivateDevice @ 0x140008088 (PopFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x1400AED24 (PoFxPrepareDevice.c)
 *     PopFxProcessWork @ 0x1400C124C (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x1400C1A64 (PopFxCompleteComponentActivation.c)
 *     PopFxComponentWork @ 0x140111F94 (PopFxComponentWork.c)
 *     PoFxNotifySurprisePowerOn @ 0x1401259A0 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x140126260 (PoFxPowerControl.c)
 *     PopRequestPowerIrp @ 0x14012AB98 (PopRequestPowerIrp.c)
 *     PopFxAllocatePowerIrp @ 0x14012B440 (PopFxAllocatePowerIrp.c)
 *     PopRequestCompletion @ 0x14012B590 (PopRequestCompletion.c)
 *     PopFxReleasePowerIrp @ 0x14012BA48 (PopFxReleasePowerIrp.c)
 *     PopFxComponentPerfWork @ 0x140202788 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDeviceDpm @ 0x140202834 (PopFxDestroyDeviceDpm.c)
 *     PopFxDeviceWork @ 0x140202B3C (PopFxDeviceWork.c)
 *     PopFxPlatformIdleVeto @ 0x14020314C (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x140203370 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x140203878 (PopFxReleaseAcpiRefDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x140204340 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x14020442C (PopFxUpdateProcessorIdleState.c)
 *     PopFxAcpiForwardNotification @ 0x14020E3F0 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x14020E488 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14020E510 (PopFxAcpiForwardPepWorkRequest.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x14071AC4C (ViFilterDeviceUsageNotificationCompletion.c)
 *     ViFilterGenericCompletionRoutine @ 0x14071B0A0 (ViFilterGenericCompletionRoutine.c)
 *     ViFilterStartCompletionRoutine @ 0x14071B17C (ViFilterStartCompletionRoutine.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x14070DE84 (VfRemLockReportBadReleaseTag.c)
 */

void __stdcall IoReleaseRemoveLockEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
  char v5; // si
  KIRQL v6; // al
  struct _LIST_ENTRY *Flink; // rdi
  KIRQL v8; // r15
  struct _LIST_ENTRY *v9; // rcx
  struct _LIST_ENTRY *v10; // rax

  if ( RemlockSize == 120 )
  {
    v5 = 0;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
    Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
    v8 = v6;
    v9 = Flink;
    while ( v9 )
    {
      if ( v5 || v9->Blink != Tag )
      {
        Flink = v9;
        v9 = v9->Flink;
      }
      else
      {
        v10 = v9->Flink;
        v5 = 1;
        if ( v9 == RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink )
        {
          RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = v10;
          ExFreePoolWithTag(v9, 0);
          v9 = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
        }
        else
        {
          Flink->Flink = v10;
          ExFreePoolWithTag(v9, 0);
          v9 = Flink->Flink;
        }
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent, v8);
    if ( !v5
      && _InterlockedDecrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead) < 0
      && ((MmVerifierData & 0x800) == 0 || !(unsigned int)VfRemLockReportBadReleaseTag((int)RemoveLock, (int)Tag)) )
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
  }
  if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
    KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
}
