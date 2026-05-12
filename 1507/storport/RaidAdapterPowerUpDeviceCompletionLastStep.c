/*
 * XREFs of RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0005C7C
 * Callers:
 *     RaidAdapterDevicePowerUpSrbComplete @ 0x1C0005C60 (RaidAdapterDevicePowerUpSrbComplete.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0006E70 (RaidAdapterPowerUpDeviceCompletion.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0003980 (RaUnitReleaseRemoveLock.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0006890 (RaidUnitProcessSetDevicePowerIrp.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0006AB4 (StorUpdateCrashDumpPowerReady.c)
 *     RaidAdapterRestartAdapter @ 0x1C0006C24 (RaidAdapterRestartAdapter.c)
 *     RaidIsAdapterControlSupported @ 0x1C00099AC (RaidIsAdapterControlSupported.c)
 *     RaidAdapterRestartQueues @ 0x1C0010C48 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C00119DC (RaidResumeAdapterQueue.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     RaidAdapterReInitialize @ 0x1C0021EAC (RaidAdapterReInitialize.c)
 *     WPP_SF_qqD @ 0x1C00258C8 (WPP_SF_qqD.c)
 *     StorPortUnitIdleState @ 0x1C002CD30 (StorPortUnitIdleState.c)
 *     Template_qpq @ 0x1C002E370 (Template_qpq.c)
 */

void __fastcall RaidAdapterPowerUpDeviceCompletionLastStep(PIRP Irp, __int64 a2)
{
  KIRQL v4; // bl
  unsigned int LowPart; // ebx
  __int64 v6; // rbx
  IRP *v7; // rdx
  PSLIST_ENTRY v8; // rax
  int v9; // edx
  int v10; // ecx
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
      &WPP_e109923e46317c4616adabc68839fe07_Traceguids,
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
      Template_qpq(v10, v9, (unsigned int)&v13, *(_DWORD *)(a2 + 56), (char)Irp, Irp->IoStatus.Status);
  }
  if ( *(_DWORD *)(a2 + 96) && *(_QWORD *)(a2 + 5144) )
    StorUpdateCrashDumpPowerReady(a2);
  RaidCompleteRequestEx(Irp, 0, Irp->IoStatus.Status);
  while ( 1 )
  {
    v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 5072));
    if ( !v8 )
      break;
    v6 = (__int64)&v8[-102];
    if ( *((_BYTE *)&v8[-2].Next + 9) )
    {
      v7 = *(IRP **)(v6 + 1616);
      *(_QWORD *)(v6 + 1616) = 0LL;
      *(_BYTE *)(v6 + 1609) = 0;
      RaidUnitProcessSetDevicePowerIrp(&v8[-102], v7);
      RaUnitReleaseRemoveLock(v6);
    }
    else if ( *(_BYTE *)(v6 + 1608) )
    {
      v11 = *(unsigned int *)(v6 + 1612);
      *(_BYTE *)(v6 + 1608) = 0;
      StorPortUnitIdleState(&v8[-102], 0LL, v11);
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 256));
}
