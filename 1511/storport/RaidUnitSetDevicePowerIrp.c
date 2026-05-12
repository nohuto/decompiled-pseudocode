/*
 * XREFs of RaidUnitSetDevicePowerIrp @ 0x1C0007FCC
 * Callers:
 *     RaidUnitSetPowerIrp @ 0x1C0007D04 (RaidUnitSetPowerIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C000480C (RaUnitAcquireRemoveLock.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00077E0 (RaidAdapterPoFxActivateComponent.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C00085A0 (RaidUnitProcessSetDevicePowerIrp.c)
 *     WPP_SF_qq @ 0x1C002796C (WPP_SF_qq.c)
 */

__int64 __fastcall RaidUnitSetDevicePowerIrp(struct _SLIST_ENTRY *Context, _SLIST_ENTRY *Irp)
{
  __int64 v2; // rdi
  char v6; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)&Context[1].Next + 1);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 50LL, &WPP_bd41b0a71fae7a1a3137e05edf146d17_Traceguids, Context, Irp);
  }
  if ( *((_DWORD *)&Context[11].Next + 3) == 4 && *(_DWORD *)(*((_QWORD *)&Irp[11].Next + 1) + 24LL) == 1 )
  {
    if ( (*(_BYTE *)(v2 + 109) & 4) == 0 && *(_QWORD *)(v2 + 5088) )
    {
      v6 = BYTE1(Context[9].Next);
      if ( (v6 & 8) == 0 )
      {
        BYTE1(Context[9].Next) = v6 | 8;
        RaidAdapterPoFxActivateComponent(v2, 0LL, 0LL);
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 80), &LockHandle);
    if ( *(int *)(v2 + 268) > 1 )
    {
      *((_BYTE *)&Context[101].Next + 9) = 1;
      Context[102].Next = Irp;
      RaUnitAcquireRemoveLock((__int64)Context);
      *(_BYTE *)(*((_QWORD *)&Irp[11].Next + 1) + 3LL) |= 1u;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v2 + 5072), Context + 103);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 259LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return RaidUnitProcessSetDevicePowerIrp(Context, (PIRP)Irp);
}
