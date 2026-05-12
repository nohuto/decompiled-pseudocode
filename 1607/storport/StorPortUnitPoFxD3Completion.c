/*
 * XREFs of StorPortUnitPoFxD3Completion @ 0x1C0031EE0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0003544 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitDisablePendingTimer @ 0x1C0009F90 (RaidUnitDisablePendingTimer.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C000A8CC (RaidUnitCancelWaitWakeIrp.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0019704 (RaidAdapterPoFxIdleComponent.c)
 */

void __fastcall StorPortUnitPoFxD3Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        __int64 Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi
  __int64 v7; // rcx
  char v8; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  Status = IoStatus->Status;
  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    if ( Status >= 0 )
    {
      RaidUnitDisablePendingTimer(Context);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 32), &LockHandle);
      RaidUnitCancelWaitWakeIrp(Context);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1448));
  }
  v7 = *(_QWORD *)(Context + 24);
  if ( *(_QWORD *)(v7 + 5088) )
  {
    v8 = *(_BYTE *)(Context + 153);
    if ( (v8 & 8) != 0 )
    {
      *(_BYTE *)(Context + 153) = v8 & 0xF7;
      RaidAdapterPoFxIdleComponent(v7, 0LL, 0LL);
    }
  }
  *(_BYTE *)(Context + 153) &= ~1u;
}
