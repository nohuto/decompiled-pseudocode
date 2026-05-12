/*
 * XREFs of RaidpAdapterTimerDpcRoutine @ 0x1C0012980
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00057D8 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C000595C (RaidAdapterAcquireInterruptLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qdd @ 0x1C0025820 (WPP_SF_qdd.c)
 */

void __fastcall RaidpAdapterTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  void (__fastcall *v5)(__int64); // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _DEVICE_OBJECT *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v4 = DeferredContext[8];
  v5 = (void (__fastcall *)(__int64))_InterlockedExchange64((volatile __int64 *)(v4 + 1920), 0LL);
  if ( v5 )
  {
    v6 = *(unsigned int *)(v4 + 264);
    if ( (int)v6 < 6 || (v7 = *(unsigned int *)(v4 + 268), (int)v7 < 4) )
    {
      if ( ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 256)) )
      {
        if ( *(_DWORD *)(v4 + 688) )
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 680), &LockHandle);
        else
          LOBYTE(LockHandle.LockQueue.Next) = RaidAdapterAcquireInterruptLock(v4);
        v5(*(_QWORD *)(v4 + 536) + 16LL);
        if ( *(_DWORD *)(v4 + 688) )
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        else
          RaidAdapterReleaseInterruptLock(v4, (KIRQL)LockHandle.LockQueue.Next);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 256));
        if ( *(_BYTE *)(v4 + 105) )
        {
          v8 = *(struct _DEVICE_OBJECT **)(v4 + 32);
          *(_BYTE *)(v4 + 105) = 0;
          IoInvalidateDeviceRelations(v8, BusRelations);
        }
      }
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qdd(WPP_GLOBAL_Control->AttachedDevice, v6, v7, v4, v6, *(_DWORD *)(v4 + 268));
    }
  }
}
