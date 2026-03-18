/*
 * XREFs of IopEjectDevice @ 0x1406940A4
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IoGetAttachedDeviceReference @ 0x1400CF130 (IoGetAttachedDeviceReference.c)
 *     IovUtilWatermarkIrp @ 0x1400CF684 (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x1400CF78C (IoAllocateIrp.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PnpQueuePendingEject @ 0x14067EA30 (PnpQueuePendingEject.c)
 */

__int64 __fastcall IopEjectDevice(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v3; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // r14
  PIRP Irp; // rbp
  unsigned int v8; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *v11; // rax

  v3 = *(_QWORD *)(a2 + 96);
  if ( *(_DWORD *)(a2 + 92) == 1 )
  {
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(v3 + 32))(*(_QWORD *)(v3 + 8), 3LL);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a2 + 96) + 40LL))(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL));
      if ( *(_BYTE *)(a2 + 89) )
        *(_BYTE *)(a2 + 89) = 0;
    }
    AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
    Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
    if ( Irp )
    {
      IovUtilWatermarkIrp();
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      Irp->IoStatus.Information = 0LL;
      Irp->IoStatus.Status = -1073741637;
      memset(&CurrentStackLocation[-1], 0, sizeof(struct _IO_STACK_LOCATION));
      *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 4379;
      CurrentThread = KeGetCurrentThread();
      Irp->UserIosb = 0LL;
      Irp->UserEvent = 0LL;
      Irp->Tail.Overlay.Thread = CurrentThread;
      Irp->RequestorMode = 0;
      *(_DWORD *)(a2 + 80) = 0;
      *(_QWORD *)(a2 + 72) = Irp;
      PnpQueuePendingEject((__int64 *)a2);
      v11 = Irp->Tail.Overlay.CurrentStackLocation;
      v11[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)IopDeviceEjectComplete;
      v11[-1].Context = (PVOID)a2;
      v11[-1].Control = -32;
      v8 = IofCallDriver(AttachedDeviceReference, Irp);
    }
    else
    {
      *(_QWORD *)(a2 + 72) = 0LL;
      *(_QWORD *)(a2 + 8) = a2;
      *(_QWORD *)a2 = a2;
      PnpQueuePendingEject((__int64 *)a2);
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 32) = PnpProcessCompletedEject;
      *(_QWORD *)(a2 + 40) = a2;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 16), DelayedWorkQueue);
      v8 = -1073741670;
    }
    ObfDereferenceObject(AttachedDeviceReference);
    return v8;
  }
  else
  {
    if ( v3 )
      (*(void (__fastcall **)(_QWORD, __int64))(v3 + 32))(*(_QWORD *)(v3 + 8), 4LL);
    *(_QWORD *)(a2 + 72) = 0LL;
    *(_QWORD *)(a2 + 8) = a2;
    *(_QWORD *)a2 = a2;
    PnpQueuePendingEject((__int64 *)a2);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 32) = PnpProcessCompletedEject;
    *(_QWORD *)(a2 + 40) = a2;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 16), DelayedWorkQueue);
    return 0LL;
  }
}
