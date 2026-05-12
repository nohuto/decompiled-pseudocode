/*
 * XREFs of StorPortUnitPowerRequiredStep2 @ 0x1C00324C0
 * Callers:
 *     StorPortUnitPowerRequiredStep1 @ 0x1C0032360 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0002F60 (RaidUnitPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00196AC (RaidAdapterPoFxActivateComponent.c)
 *     Template_pqcccq @ 0x1C0032840 (Template_pqcccq.c)
 */

void __fastcall StorPortUnitPowerRequiredStep2(__int64 Context)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  char v4; // al
  int v5; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 32), &LockHandle);
  v2 = *(_QWORD *)(Context + 1456);
  if ( (*(_DWORD *)(v2 + 32) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 1) != 0 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v3 = *(_QWORD *)(Context + 24);
    if ( *(_QWORD *)(v3 + 5088) )
    {
      v4 = *(_BYTE *)(Context + 153);
      if ( (v4 & 8) == 0 )
      {
        *(_BYTE *)(Context + 153) = v4 | 8;
        RaidAdapterPoFxActivateComponent(v3, 0LL, 0LL);
      }
    }
  }
  else if ( *(_DWORD *)(Context + 196) != 1 || (*(_BYTE *)(Context + 153) & 1) != 0 )
  {
    if ( PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(Context + 8),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)RaidUnitDeviceStackPowerUpCompletion,
           (PVOID)Context,
           0LL) == 259 )
    {
      *(_BYTE *)(Context + 152) |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)(Context + 1472), 0);
      return;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(Context + 1456) + 36LL), 0, 1) )
      RaidUnitPoFxIdleComponent(Context, 0, 0, 0LL);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  PoFxReportDevicePoweredOn(**(_QWORD **)(Context + 1456));
  if ( StorEtwLoggingEnabled )
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x100000) != 0 )
      Template_pqcccq(
        *(_QWORD *)(Context + 24),
        (unsigned int)&EventUnitPowerRequiredStop,
        v5,
        **(_QWORD **)(Context + 1456),
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 88),
        *(_BYTE *)(Context + 89),
        *(_BYTE *)(Context + 90),
        0);
  }
}
