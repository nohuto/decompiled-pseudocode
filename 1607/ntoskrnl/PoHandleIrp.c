/*
 * XREFs of PoHandleIrp @ 0x14012C4A4
 * Callers:
 *     IopPoHandleIrp @ 0x14012C460 (IopPoHandleIrp.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PoDeviceReleaseIrp @ 0x14012C584 (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x14012C65C (PoDeviceAcquireIrp.c)
 *     PopDispatchQuerySetIrp @ 0x14012C794 (PopDispatchQuerySetIrp.c)
 */

char __fastcall PoHandleIrp(IRP *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  char v4; // di
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  _DWORD *v6; // r14
  PDEVICE_OBJECT DeviceObject; // rsi
  __int64 v9; // rax
  __int64 v10; // r8
  ULONG Flags; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = 1;
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  v6 = a2;
  DeviceObject = CurrentStackLocation->DeviceObject;
  v9 = *((_QWORD *)&a1->Tail.CompletionKey + 9 * a1->StackCount + 10);
  v10 = *(_QWORD *)(v9 + 40);
  if ( !v10
    || (LOBYTE(a2) = *(_BYTE *)(v9 + 184),
        PoDeviceReleaseIrp(a1, a2, v10),
        Flags = DeviceObject->Flags,
        (Flags & 0x8000) != 0)
    || (Flags & 0x2000) != 0 && KeGetCurrentIrql() == 2 )
  {
    if ( (DeviceObject->Flags & 0x8000) == 0 )
    {
LABEL_8:
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      PopDispatchQuerySetIrp(a1);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      *v6 = 259;
      return v4;
    }
  }
  else
  {
    v4 = 0;
  }
  LOBYTE(a2) = CurrentStackLocation->MinorFunction;
  PoDeviceAcquireIrp(a1, a2, DeviceObject, a4);
  if ( v4 )
  {
    if ( (DeviceObject->Flags & 0x8000) != 0 )
    {
      a1->IoStatus.Status = 0;
      a1->IoStatus.Information = 0LL;
      pIofCompleteRequest(a1, 0);
      *v6 = 0;
      return v4;
    }
    goto LABEL_8;
  }
  return v4;
}
