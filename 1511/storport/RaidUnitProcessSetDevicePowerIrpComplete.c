/*
 * XREFs of RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0008688
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C00085A0 (RaidUnitProcessSetDevicePowerIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000480C (RaUnitAcquireRemoveLock.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0008808 (StorUpdateCrashDumpPowerReady.c)
 *     RaidResumeUnitQueue @ 0x1C0009DC4 (RaidResumeUnitQueue.c)
 *     RaidRestartIoQueue @ 0x1C000C030 (RaidRestartIoQueue.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0011408 (RaidUnitCheckAndAcquirePoFx.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     WPP_SF_qqD @ 0x1C00279B4 (WPP_SF_qqD.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C002EC88 (StorPortUnitPoFxD0Completion.c)
 *     Template_qcccpq @ 0x1C002FB68 (Template_qcccpq.c)
 */

__int64 __fastcall RaidUnitProcessSetDevicePowerIrpComplete(__int64 Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  POWER_STATE v5; // ebx
  struct _DEVICE_OBJECT *v6; // rcx
  int v7; // ecx
  struct _IO_WORKITEM *WorkItem; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  int v15; // [rsp+68h] [rbp-20h] BYREF
  __int64 v16; // [rsp+6Ch] [rbp-1Ch]
  int v17; // [rsp+74h] [rbp-14h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Status = 0;
  v5.SystemState = (_SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 32), &LockHandle);
  v6 = *(struct _DEVICE_OBJECT **)(Context + 8);
  *(POWER_STATE *)(Context + 188) = v5;
  PoSetPowerState(v6, DevicePowerState, v5);
  if ( v5.SystemState == PowerSystemWorking && *(char *)(Context + 144) < 0 )
  {
    RaidResumeUnitQueue(Context);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidRestartIoQueue(Context);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( *(_DWORD *)(Context + 188) == 1 )
  {
    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(Context) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(Context + 1456) + 32LL) & 0x80u) != 0 )
      {
        ++*(_DWORD *)(Context + 2512);
        if ( !_interlockedbittestandset((volatile signed __int32 *)(Context + 152), 1u) )
        {
          WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context + 8));
          if ( WorkItem )
          {
            RaUnitAcquireRemoveLock(Context);
            IoQueueWorkItemEx(WorkItem, RaidUnitSavePowerCycleCountWorker, DelayedWorkQueue, (PVOID)Context);
          }
        }
      }
      if ( !(unsigned __int8)RaidUnitCheckAndAcquirePoFx(Context)
        || (v13 = *(_DWORD *)(*(_QWORD *)(Context + 1456) + 32LL) >> 1,
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1448)),
            (v13 & 1) != 0) )
      {
        if ( *(_BYTE *)(Context + 439) )
        {
          *(_BYTE *)(Context + 439) = 0;
          RaidRestartIoQueue(Context);
        }
      }
      StorPortUnitPoFxD0Completion(v11, v10, v12, Context);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1448));
    }
    else if ( *(_BYTE *)(Context + 439) )
    {
      *(_BYTE *)(Context + 439) = 0;
      RaidRestartIoQueue(Context);
    }
  }
  else if ( !*(_BYTE *)(Context + 439) )
  {
    *(_BYTE *)(Context + 439) = 1;
  }
  if ( *(_DWORD *)(Context + 656) )
    StorUpdateCrashDumpPowerReady(*(_QWORD *)(Context + 24));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      51LL,
      &WPP_bd41b0a71fae7a1a3137e05edf146d17_Traceguids,
      Context,
      Irp,
      0);
  }
  if ( StorEtwLoggingEnabled )
  {
    v15 = 0;
    v16 = 0LL;
    v17 = 0;
    IoGetActivityIdIrp(Irp, &v15);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      Template_qcccpq(
        v7,
        *(_QWORD *)(Context + 24),
        (unsigned int)&v15,
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 88),
        *(_BYTE *)(Context + 89),
        *(_BYTE *)(Context + 90),
        (char)Irp);
  }
  return RaidCompleteRequestEx(Irp, 0, 0);
}
