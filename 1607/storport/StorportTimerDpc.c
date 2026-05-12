/*
 * XREFs of StorportTimerDpc @ 0x1C0009610
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0002CE0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0002EC4 (RaidAdapterAcquireInterruptLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall StorportTimerDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  void (__fastcall *v6)(__int64, __int64); // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)DeferredContext;
  v5 = *((_QWORD *)DeferredContext + 18);
  v6 = (void (__fastcall *)(__int64, __int64))_InterlockedExchange64((volatile __int64 *)DeferredContext + 17, 0LL);
  if ( v6 )
  {
    if ( *(_DWORD *)(v4 + 688) )
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 680), &LockHandle);
    else
      LOBYTE(LockHandle.LockQueue.Next) = RaidAdapterAcquireInterruptLock(v4);
    v6(*(_QWORD *)(v4 + 536) + 16LL, v5);
    if ( *(_DWORD *)(v4 + 688) )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    else
      RaidAdapterReleaseInterruptLock(v4, (KIRQL)LockHandle.LockQueue.Next);
  }
}
