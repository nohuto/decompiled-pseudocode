/*
 * XREFs of IoReleaseRemoveLockEx @ 0x14009D57C
 * Callers:
 *     PopFxActivateDevice @ 0x140007BFC (PopFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x1400AD28C (PoFxPrepareDevice.c)
 *     PopFxProcessWork @ 0x1400BF0DC (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x1400BF8F4 (PopFxCompleteComponentActivation.c)
 *     PopFxComponentWork @ 0x1401124F8 (PopFxComponentWork.c)
 *     PoFxNotifySurprisePowerOn @ 0x140125F10 (PoFxNotifySurprisePowerOn.c)
 *     PoFxPowerControl @ 0x1401267D0 (PoFxPowerControl.c)
 *     PopRequestPowerIrp @ 0x14012B108 (PopRequestPowerIrp.c)
 *     PopFxAllocatePowerIrp @ 0x14012B9B0 (PopFxAllocatePowerIrp.c)
 *     PopRequestCompletion @ 0x14012BB00 (PopRequestCompletion.c)
 *     PopFxReleasePowerIrp @ 0x14012BFB8 (PopFxReleasePowerIrp.c)
 *     PopFxComponentPerfWork @ 0x1402025B4 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDeviceDpm @ 0x140202660 (PopFxDestroyDeviceDpm.c)
 *     PopFxDeviceWork @ 0x140202968 (PopFxDeviceWork.c)
 *     PopFxPlatformIdleVeto @ 0x140202F78 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x14020319C (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1402036A4 (PopFxReleaseAcpiRefDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x14020416C (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x140204258 (PopFxUpdateProcessorIdleState.c)
 *     PopFxAcpiForwardNotification @ 0x14020E21C (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x14020E2B4 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14020E33C (PopFxAcpiForwardPepWorkRequest.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x14071AC4C (ViFilterDeviceUsageNotificationCompletion.c)
 *     ViFilterGenericCompletionRoutine @ 0x14071B0A0 (ViFilterGenericCompletionRoutine.c)
 *     ViFilterStartCompletionRoutine @ 0x14071B17C (ViFilterStartCompletionRoutine.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x14070DEB4 (VfRemLockReportBadReleaseTag.c)
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
