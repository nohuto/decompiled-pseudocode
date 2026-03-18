/*
 * XREFs of IoReleaseRemoveLockEx @ 0x140117C68
 * Callers:
 *     VerifierIoReleaseRemoveLockEx @ 0x140743550 (VerifierIoReleaseRemoveLockEx.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x14075261C (ViFilterDeviceUsageNotificationCompletion.c)
 *     ViFilterGenericCompletionRoutine @ 0x140752AB4 (ViFilterGenericCompletionRoutine.c)
 *     ViFilterStartCompletionRoutine @ 0x140752B90 (ViFilterStartCompletionRoutine.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x14074367C (VfRemLockReportBadReleaseTag.c)
 */

void __stdcall IoReleaseRemoveLockEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
  char v5; // bp
  volatile signed __int32 *p_Lock; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v9; // rcx
  struct _LIST_ENTRY *v10; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( RemlockSize == 120 )
  {
    v5 = 0;
    p_Lock = &RemoveLock[2].Common.RemoveEvent.Header.Lock;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&RemoveLock[2].Common.RemoveEvent);
    }
    else if ( _interlockedbittestandset64(p_Lock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(&RemoveLock[2].Common.RemoveEvent.Header.Lock);
    }
    Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(p_Lock, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)p_Lock, 0LL);
    __writecr8(CurrentIrql);
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
