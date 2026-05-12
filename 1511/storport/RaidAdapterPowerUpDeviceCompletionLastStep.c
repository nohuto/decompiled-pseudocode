/*
 * XREFs of RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000792C
 * Callers:
 *     RaidAdapterDevicePowerUpSrbComplete @ 0x1C0007910 (RaidAdapterDevicePowerUpSrbComplete.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0008BD0 (RaidAdapterPowerUpDeviceCompletion.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00047F4 (RaUnitReleaseRemoveLock.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C00085A0 (RaidUnitProcessSetDevicePowerIrp.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0008808 (StorUpdateCrashDumpPowerReady.c)
 *     RaidAdapterRestartAdapter @ 0x1C0008980 (RaidAdapterRestartAdapter.c)
 *     RaidIsAdapterControlSupported @ 0x1C000BBE4 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterRestartQueues @ 0x1C00131A0 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C0014130 (RaidResumeAdapterQueue.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     RaidAdapterReInitialize @ 0x1C0024450 (RaidAdapterReInitialize.c)
 *     WPP_SF_qqD @ 0x1C00279B4 (WPP_SF_qqD.c)
 *     StorPortUnitIdleState @ 0x1C002E960 (StorPortUnitIdleState.c)
 *     Template_qpq @ 0x1C002FFA4 (Template_qpq.c)
 */

void __fastcall RaidAdapterPowerUpDeviceCompletionLastStep(PIRP Irp, __int64 a2)
{
  KIRQL v4; // bl
  unsigned int LowPart; // ebx
  int v6; // edx
  int v7; // ecx
  __int64 v8; // rbx
  IRP *v9; // rdx
  PSLIST_ENTRY v10; // rax
  __int64 v11; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+4Ch] [rbp-1Ch]
  int v15; // [rsp+54h] [rbp-14h]

  if ( (unsigned int)RaidIsAdapterControlSupported(a2, 2LL) )
    RaidAdapterRestartAdapter(a2);
  else
    RaidAdapterReInitialize(a2);
  RaidResumeAdapterQueue(a2);
  v4 = KfRaiseIrql(2u);
  RaidAdapterRestartQueues(a2);
  KeLowerIrql(v4);
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 80), &LockHandle);
  *(_DWORD *)(a2 + 268) = LowPart;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PoSetPowerState(*(PDEVICE_OBJECT *)(a2 + 8), DevicePowerState, (POWER_STATE)LowPart);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      28LL,
      &WPP_bd41b0a71fae7a1a3137e05edf146d17_Traceguids,
      a2,
      Irp,
      Irp->IoStatus.Status);
  }
  if ( StorEtwLoggingEnabled )
  {
    v13 = 0;
    v14 = 0LL;
    v15 = 0;
    IoGetActivityIdIrp(Irp, &v13);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      Template_qpq(v7, v6, (unsigned int)&v13, *(_DWORD *)(a2 + 56), (char)Irp, Irp->IoStatus.Status);
  }
  if ( *(_DWORD *)(a2 + 96) && *(_QWORD *)(a2 + 5144) )
    StorUpdateCrashDumpPowerReady(a2);
  RaidCompleteRequestEx(Irp, 0, Irp->IoStatus.Status);
  while ( 1 )
  {
    v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 5072));
    if ( !v10 )
      break;
    v8 = (__int64)&v10[-103];
    if ( *((_BYTE *)&v10[-2].Next + 9) )
    {
      v9 = *(IRP **)(v8 + 1632);
      *(_QWORD *)(v8 + 1632) = 0LL;
      *(_BYTE *)(v8 + 1625) = 0;
      RaidUnitProcessSetDevicePowerIrp(&v10[-103], v9);
      RaUnitReleaseRemoveLock(v8);
    }
    else if ( *(_BYTE *)(v8 + 1624) )
    {
      v11 = *(unsigned int *)(v8 + 1628);
      *(_BYTE *)(v8 + 1624) = 0;
      StorPortUnitIdleState(&v10[-103], 0LL, v11);
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 256));
}
