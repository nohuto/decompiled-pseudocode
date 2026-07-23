/*
 * XREFs of PopQueueQuerySetIrp @ 0x14012B5D8
 * Callers:
 *     PopRequestPowerIrp @ 0x14012B108 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x1403CF498 (PopNotifyDevice.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x140009D8C (PopDeepSleepSetDisengageReason.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     PopEnableIrpWatchdog @ 0x14012B764 (PopEnableIrpWatchdog.c)
 *     PopDiagTraceIrpStart @ 0x14012B830 (PopDiagTraceIrpStart.c)
 */

void __fastcall PopQueueQuerySetIrp(PIRP Irp)
{
  char v1; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  PIRP v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  struct _DEVICE_OBJECT *v7; // r15
  PIRP *v8; // rdi
  PIRP Flink; // rax
  __int64 v10; // rcx
  KIRQL v11; // al
  struct _DEVICE_OBJECT *AttachedTo; // rdx
  struct _LIST_ENTRY *v13; // rcx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v15; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = Irp;
  v4 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v5 = *(_QWORD *)(v4 + 24);
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
  else
    v6 = 0LL;
  v7 = *(struct _DEVICE_OBJECT **)(v4 + 32);
  if ( *(_BYTE *)(v4 + 184) == 2
    && *(_DWORD *)(v4 + 188) == 1
    && _InterlockedIncrement(&PopPendingSetPowerDeviceIrps) == 1 )
  {
    PopDeepSleepSetDisengageReason(2);
  }
  v8 = (PIRP *)(v6 + 248);
  if ( *(_DWORD *)(v4 + 188) == 1 )
  {
    if ( *(_BYTE *)(v4 + 184) == 2 && CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart == 1 )
    {
      v11 = KeAcquireQueuedSpinLock(0xAuLL);
      AttachedTo = v7;
      if ( v7 )
      {
        while ( (AttachedTo->Flags & 0x4000) == 0 )
        {
          AttachedTo = AttachedTo->DeviceObjectExtension->AttachedTo;
          if ( !AttachedTo )
            goto LABEL_22;
        }
        v1 = 1;
      }
LABEL_22:
      KeReleaseQueuedSpinLock(0xAuLL, v11);
    }
  }
  else
  {
    v8 += 2;
  }
  v3->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  if ( v1 )
  {
    v13 = (struct _LIST_ENTRY *)qword_140303A18;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v3->Tail.Overlay.ListEntry;
    if ( *(__int64 **)qword_140303A18 != &PopInrushIrpList )
      __fastfail(3u);
    p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)&PopInrushIrpList;
    v3->Tail.Overlay.ListEntry.Blink = v13;
    v13->Flink = &p_ListEntry->ListEntry;
    qword_140303A18 = (__int64)&v3->Tail.Overlay.ListEntry;
  }
  Flink = v8[1];
  if ( Flink )
  {
    while ( Flink->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink )
      Flink = (PIRP)Flink->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink;
    Flink->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v3;
  }
  else
  {
    v8[1] = v3;
    if ( !*v8 )
    {
      if ( !v1 )
      {
LABEL_13:
        v8[1] = 0LL;
        *v8 = v3;
        goto LABEL_14;
      }
      if ( !PopInrushIrp )
      {
        PopInrushIrp = (__int64)v3;
        v15 = v3->Tail.Overlay.ListEntry.Flink;
        Blink = v3->Tail.Overlay.ListEntry.Blink;
        if ( (PVOID *)v15->Blink != &v3->Tail.CompletionKey + 6 || (PVOID *)Blink->Flink != &v3->Tail.CompletionKey + 6 )
          __fastfail(3u);
        Blink->Flink = v15;
        v15->Blink = Blink;
        goto LABEL_13;
      }
    }
  }
  v3 = 0LL;
LABEL_14:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
  {
    PopDiagTraceIrpStart(v10, v3);
    PopEnableIrpWatchdog(v3);
    IofCallDriver(v7, v3);
  }
}
