/*
 * XREFs of PopQueueQuerySetIrp @ 0x14012200C
 * Callers:
 *     PopRequestPowerIrp @ 0x140121B34 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x1403A51FC (PopNotifyDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     PopEnableIrpWatchdog @ 0x140122194 (PopEnableIrpWatchdog.c)
 *     PopDiagTraceIrpStart @ 0x140122254 (PopDiagTraceIrpStart.c)
 */

void __fastcall PopQueueQuerySetIrp(PIRP Irp)
{
  PIRP v1; // rbx
  char v2; // si
  __int64 v3; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  __int64 v5; // rax
  __int64 v6; // rdi
  struct _DEVICE_OBJECT *v7; // rbp
  PIRP *v8; // rdi
  PIRP Flink; // rax
  __int64 v10; // rcx
  KIRQL v11; // al
  struct _DEVICE_OBJECT *AttachedTo; // rdx
  __int64 **v13; // rcx
  struct _LIST_ENTRY *v14; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = Irp;
  v2 = 0;
  v3 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  CurrentStackLocation = v1->Tail.Overlay.CurrentStackLocation;
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
  else
    v6 = 0LL;
  v7 = *(struct _DEVICE_OBJECT **)(v3 + 32);
  if ( *(_BYTE *)(v3 + 184) == 2 && *(_DWORD *)(v3 + 188) == 1 )
    _InterlockedIncrement(&PopPendingSetPowerDeviceIrps);
  v8 = (PIRP *)(v6 + 248);
  if ( *(_DWORD *)(v3 + 188) == 1 )
  {
    if ( *(_BYTE *)(v3 + 184) == 2 && CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart == 1 )
    {
      v11 = KeAcquireQueuedSpinLock(0xAuLL);
      AttachedTo = v7;
      if ( v7 )
      {
        while ( (AttachedTo->Flags & 0x4000) == 0 )
        {
          AttachedTo = AttachedTo->DeviceObjectExtension->AttachedTo;
          if ( !AttachedTo )
            goto LABEL_21;
        }
        v2 = 1;
      }
LABEL_21:
      KeReleaseQueuedSpinLock(0xAuLL, v11);
    }
  }
  else
  {
    v8 += 2;
  }
  v1->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  if ( v2 )
  {
    v13 = (__int64 **)qword_1402DDC88;
    v1->Tail.Overlay.ListEntry.Blink = (struct _LIST_ENTRY *)qword_1402DDC88;
    v1->Tail.Overlay.ListEntry.Flink = (struct _LIST_ENTRY *)&PopInrushIrpList;
    if ( *v13 != &PopInrushIrpList )
      __fastfail(3u);
    *v13 = (__int64 *)&v1->Tail.Overlay.ListEntry;
    qword_1402DDC88 = (__int64)&v1->Tail.Overlay.ListEntry;
  }
  Flink = v8[1];
  if ( Flink )
  {
    while ( Flink->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink )
      Flink = (PIRP)Flink->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink;
    Flink->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v1;
  }
  else
  {
    v8[1] = v1;
    if ( !*v8 )
    {
      if ( !v2 )
      {
LABEL_14:
        v8[1] = 0LL;
        *v8 = v1;
        goto LABEL_15;
      }
      if ( !PopInrushIrp )
      {
        PopInrushIrp = (__int64)v1;
        v14 = v1->Tail.Overlay.ListEntry.Flink;
        Blink = v1->Tail.Overlay.ListEntry.Blink;
        if ( (PVOID *)v14->Blink != &v1->Tail.CompletionKey + 6 || (PVOID *)Blink->Flink != &v1->Tail.CompletionKey + 6 )
          __fastfail(3u);
        Blink->Flink = v14;
        v14->Blink = Blink;
        goto LABEL_14;
      }
    }
  }
  v1 = 0LL;
LABEL_15:
  PopIrpLockThread = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v1 )
  {
    PopDiagTraceIrpStart(v10, v1);
    PopEnableIrpWatchdog(v1);
    IofCallDriver(v7, v1);
  }
}
