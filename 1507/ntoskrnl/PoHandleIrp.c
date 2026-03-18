/*
 * XREFs of PoHandleIrp @ 0x1401378D8
 * Callers:
 *     IopPoHandleIrp @ 0x140137894 (IopPoHandleIrp.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     PoDeviceReleaseIrp @ 0x1401379D0 (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x140137AA4 (PoDeviceAcquireIrp.c)
 *     PopDispatchQuerySetIrp @ 0x140137BD8 (PopDispatchQuerySetIrp.c)
 */

char __fastcall PoHandleIrp(IRP *a1, _DWORD *a2)
{
  _DWORD *v2; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v5; // rax
  PDEVICE_OBJECT DeviceObject; // rsi
  __int64 v7; // r8
  ULONG Flags; // eax
  char v9; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  v5 = *((_QWORD *)&a1->Tail.CompletionKey + 9 * a1->StackCount + 10);
  DeviceObject = CurrentStackLocation->DeviceObject;
  v7 = *(_QWORD *)(v5 + 40);
  if ( !v7
    || (LOBYTE(a2) = *(_BYTE *)(v5 + 184),
        PoDeviceReleaseIrp(a1, a2, v7),
        Flags = DeviceObject->Flags,
        (Flags & 0x8000) != 0)
    || (Flags & 0x2000) != 0 && KeGetCurrentIrql() == 2 )
  {
    v9 = 1;
    if ( (DeviceObject->Flags & 0x8000) == 0 )
    {
LABEL_8:
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      PopIrpLockThread = (__int64)KeGetCurrentThread();
      PopDispatchQuerySetIrp(a1);
      PopIrpLockThread = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      *v2 = 259;
      return v9;
    }
  }
  else
  {
    v9 = 0;
  }
  LOBYTE(a2) = CurrentStackLocation->MinorFunction;
  PoDeviceAcquireIrp(a1, a2, DeviceObject);
  if ( v9 )
  {
    if ( (DeviceObject->Flags & 0x8000) != 0 )
    {
      a1->IoStatus.Status = 0;
      a1->IoStatus.Information = 0LL;
      pIofCompleteRequest(a1, 0);
      *v2 = 0;
      return v9;
    }
    goto LABEL_8;
  }
  return v9;
}
