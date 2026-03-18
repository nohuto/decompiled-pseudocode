/*
 * XREFs of IoAcquireRemoveLockEx @ 0x1400C1730
 * Callers:
 *     PopFxLockDevice @ 0x14009EDE0 (PopFxLockDevice.c)
 *     PoFxPrepareDevice @ 0x1400AED24 (PoFxPrepareDevice.c)
 *     PopFxProcessWork @ 0x1400C124C (PopFxProcessWork.c)
 *     PopFxAddRefDevice @ 0x1400C16F4 (PopFxAddRefDevice.c)
 *     PoFxPowerControl @ 0x140126260 (PoFxPowerControl.c)
 *     PopFxAllocatePowerIrp @ 0x14012B440 (PopFxAllocatePowerIrp.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140142420 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x140202BD4 (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxPlatformIdleVeto @ 0x14020314C (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x140203370 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x140204340 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x14020442C (PopFxUpdateProcessorIdleState.c)
 *     PopFxAcpiForwardNotification @ 0x14020E3F0 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14020E510 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopFxAcpiUnregisterDevice @ 0x14020E838 (PopFxAcpiUnregisterDevice.c)
 *     ViFilterDispatchGeneric @ 0x14071AD00 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x14071ADC8 (ViFilterDispatchPnp.c)
 *     ViFilterDispatchPower @ 0x14071AF80 (ViFilterDispatchPower.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
