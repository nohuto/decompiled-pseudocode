/*
 * XREFs of IoAcquireRemoveLockEx @ 0x1400DAFE0
 * Callers:
 *     PopFxLockDevice @ 0x1400DA88C (PopFxLockDevice.c)
 *     PopFxAddRefDevice @ 0x1400DAFA4 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x1400DB240 (PopFxProcessWork.c)
 *     PoFxPrepareDevice @ 0x14010786C (PoFxPrepareDevice.c)
 *     PoFxPowerControl @ 0x14011748C (PoFxPowerControl.c)
 *     PopFxAllocatePowerIrp @ 0x1401223D0 (PopFxAllocatePowerIrp.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1401302E0 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1401EA1FC (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxPlatformIdleVeto @ 0x1401EA774 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x1401EA998 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x1401EB97C (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x1401EBA68 (PopFxUpdateProcessorIdleState.c)
 *     PopFxAcpiForwardNotification @ 0x1401F492C (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1401F4A4C (PopFxAcpiForwardPepWorkRequest.c)
 *     PopFxAcpiUnregisterDevice @ 0x1401F4D74 (PopFxAcpiUnregisterDevice.c)
 *     VerifierIoAcquireRemoveLockEx @ 0x1406C1ADC (VerifierIoAcquireRemoveLockEx.c)
 *     ViFilterDispatchGeneric @ 0x1406CEC48 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x1406CED10 (ViFilterDispatchPnp.c)
 *     ViFilterDispatchPower @ 0x1406CEEC8 (ViFilterDispatchPower.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoAcquireRemoveLockEx(
        PIO_REMOVE_LOCK RemoveLock,
        PVOID Tag,
        PCSTR File,
        ULONG Line,
        ULONG RemlockSize)
{
  NTSTATUS v9; // esi
  struct _LIST_ENTRY *PoolWithTag; // rax
  struct _LIST_ENTRY *v12; // r14
  KIRQL v13; // al

  _InterlockedIncrement(&RemoveLock->Common.IoCount);
  v9 = 0;
  if ( RemoveLock->Common.Removed )
  {
    if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
      KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
    return -1073741738;
  }
  else if ( RemlockSize == 120 )
  {
    PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          0x28uLL,
                                          (ULONG)RemoveLock[1].Common.RemoveEvent.Header.WaitListHead.Flink);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x28uLL);
      v12->Blink = (struct _LIST_ENTRY *)Tag;
      v12[1].Blink = (struct _LIST_ENTRY *)File;
      LODWORD(v12[2].Flink) = Line;
      v12[1].Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
      v12->Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
      RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = v12;
      KeReleaseSpinLock((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent, v13);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
  }
  return v9;
}
