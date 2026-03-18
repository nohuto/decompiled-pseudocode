/*
 * XREFs of IoReleaseRemoveLockEx @ 0x1400E26D0
 * Callers:
 *     PopFxActivateDevice @ 0x14001AA18 (PopFxActivateDevice.c)
 *     PopFxProcessWork @ 0x1400DB240 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x1400DC434 (PopFxCompleteComponentActivation.c)
 *     PoFxPrepareDevice @ 0x14010786C (PoFxPrepareDevice.c)
 *     PoFxNotifySurprisePowerOn @ 0x140116978 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x14011748C (PoFxPowerControl.c)
 *     PopRequestCompletion @ 0x140120C64 (PopRequestCompletion.c)
 *     PopFxReleasePowerIrp @ 0x1401211A4 (PopFxReleasePowerIrp.c)
 *     PopRequestPowerIrp @ 0x140121B34 (PopRequestPowerIrp.c)
 *     PopFxAllocatePowerIrp @ 0x1401223D0 (PopFxAllocatePowerIrp.c)
 *     PopFxComponentWork @ 0x140126870 (PopFxComponentWork.c)
 *     PopFxComponentPerfWork @ 0x1401E9DB0 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDeviceDpm @ 0x1401E9E5C (PopFxDestroyDeviceDpm.c)
 *     PopFxDeviceWork @ 0x1401EA164 (PopFxDeviceWork.c)
 *     PopFxPlatformIdleVeto @ 0x1401EA774 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x1401EA998 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1401EAEA4 (PopFxReleaseAcpiRefDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x1401EB97C (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x1401EBA68 (PopFxUpdateProcessorIdleState.c)
 *     PopFxAcpiForwardNotification @ 0x1401F492C (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1401F49C4 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1401F4A4C (PopFxAcpiForwardPepWorkRequest.c)
 *     VerifierIoReleaseRemoveLockEx @ 0x1406C1CF8 (VerifierIoReleaseRemoveLockEx.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x1406CEB94 (ViFilterDeviceUsageNotificationCompletion.c)
 *     ViFilterGenericCompletionRoutine @ 0x1406CEFE8 (ViFilterGenericCompletionRoutine.c)
 *     ViFilterStartCompletionRoutine @ 0x1406CF0C4 (ViFilterStartCompletionRoutine.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x1406C1E08 (VfRemLockReportBadReleaseTag.c)
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
