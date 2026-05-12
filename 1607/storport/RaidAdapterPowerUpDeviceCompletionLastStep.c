/*
 * XREFs of RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000A01C
 * Callers:
 *     RaidAdapterDevicePowerUpSrbComplete @ 0x1C000A000 (RaidAdapterDevicePowerUpSrbComplete.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C000A980 (RaidAdapterPowerUpDeviceCompletion.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0002064 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000A578 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterRestartAdapter @ 0x1C000A914 (RaidAdapterRestartAdapter.c)
 *     RaidResumeAdapterQueue @ 0x1C000BD8C (RaidResumeAdapterQueue.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C000F37C (StorUpdateCrashDumpPowerReady.c)
 *     RaidIsAdapterControlSupported @ 0x1C000FF08 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterRestartQueues @ 0x1C0018684 (RaidAdapterRestartQueues.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     RaidAdapterReInitialize @ 0x1C002783C (RaidAdapterReInitialize.c)
 *     WPP_SF_qqD @ 0x1C002B0BC (WPP_SF_qqD.c)
 *     StorPortUnitIdleState @ 0x1C0031BB0 (StorPortUnitIdleState.c)
 *     Template_qpq @ 0x1C0033114 (Template_qpq.c)
 */

void __fastcall RaidAdapterPowerUpDeviceCompletionLastStep(PIRP Irp, __int64 a2)
{
  KIRQL v4; // bl
  unsigned int LowPart; // ebx
  int v6; // edx
  int v7; // ecx
  PSLIST_ENTRY v8; // rax
  PSLIST_ENTRY v9; // rbx
  IRP *Next; // rdx
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
      &WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids,
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
    if ( (Microsoft_Windows_StorPortEnableBits & 0x100000) != 0 )
      Template_qpq(v7, v6, (unsigned int)&v13, *(_DWORD *)(a2 + 56), (char)Irp, Irp->IoStatus.Status);
  }
  if ( *(_DWORD *)(a2 + 96) && *(_QWORD *)(a2 + 5144) )
    StorUpdateCrashDumpPowerReady(a2);
  RaidCompleteRequestEx(Irp, 0, Irp->IoStatus.Status);
  while ( 1 )
  {
    v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 5072));
    if ( !v8 )
      break;
    v9 = v8 - 103;
    if ( *((_BYTE *)&v8[-2].Next + 9) )
    {
      Next = (IRP *)v9[102].Next;
      v9[102].Next = 0LL;
      *((_BYTE *)&v9[101].Next + 9) = 0;
      RaidUnitProcessSetDevicePowerIrp(&v8[-103], Next);
      RaUnitReleaseRemoveLock((struct _KEVENT *)v9);
    }
    else if ( *((_BYTE *)&v9[101].Next + 8) )
    {
      v11 = *((unsigned int *)&v9[101].Next + 3);
      *((_BYTE *)&v9[101].Next + 8) = 0;
      StorPortUnitIdleState(&v8[-103], 0LL, v11);
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 256));
}
