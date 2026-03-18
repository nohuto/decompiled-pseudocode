/*
 * XREFs of IoAcquireRemoveLockEx @ 0x14002782C
 * Callers:
 *     PoFxPrepareDevice @ 0x1400271E8 (PoFxPrepareDevice.c)
 *     PopFxAddRefDevice @ 0x1400277F0 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x1400288DC (PopFxProcessWork.c)
 *     PopFxLockDevice @ 0x14011BF2C (PopFxLockDevice.c)
 *     PopFxAllocatePowerIrp @ 0x140137708 (PopFxAllocatePowerIrp.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1401671BC (PopFxFindAcpiDeviceByUniqueId.c)
 *     PoFxPowerControl @ 0x140237060 (PoFxPowerControl.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x140237F18 (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxPlatformIdleVeto @ 0x1402385B8 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x140238784 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x140239B6C (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x140239C64 (PopFxUpdateProcessorIdleState.c)
 *     PopFxAcpiForwardNotification @ 0x140242C80 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x140242DA8 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopFxAcpiUnregisterDevice @ 0x140243104 (PopFxAcpiUnregisterDevice.c)
 *     VerifierIoAcquireRemoveLockEx @ 0x140743334 (VerifierIoAcquireRemoveLockEx.c)
 *     ViFilterDispatchGeneric @ 0x140752714 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x1407527DC (ViFilterDispatchPnp.c)
 *     ViFilterDispatchPower @ 0x140752994 (ViFilterDispatchPower.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
  volatile signed __int32 *p_Lock; // rdi
  unsigned __int8 CurrentIrql; // bp
  void *retaddr; // [rsp+38h] [rbp+0h]

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
      LODWORD(v12[2].Flink) = Line;
      p_Lock = &RemoveLock[2].Common.RemoveEvent.Header.Lock;
      v12->Blink = (struct _LIST_ENTRY *)Tag;
      v12[1].Blink = (struct _LIST_ENTRY *)File;
      v12[1].Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&RemoveLock[2].Common.RemoveEvent);
      }
      else if ( _interlockedbittestandset64(p_Lock, 0LL) )
      {
        KxWaitForSpinLockAndAcquire(&RemoveLock[2].Common.RemoveEvent);
      }
      v12->Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
      RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = v12;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&RemoveLock[2].Common.RemoveEvent, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)p_Lock, 0LL);
      __writecr8(CurrentIrql);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
  }
  return v9;
}
