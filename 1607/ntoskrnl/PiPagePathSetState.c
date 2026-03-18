/*
 * XREFs of PiPagePathSetState @ 0x14057D324
 * Callers:
 *     MiCreatePagingFile @ 0x140568224 (MiCreatePagingFile.c)
 *     CmpSendBootDeviceUsageNotification @ 0x1406042CC (CmpSendBootDeviceUsageNotification.c)
 *     PpPagePathAssign @ 0x14062CB6C (PpPagePathAssign.c)
 *     MiDeletePagefile @ 0x14065AE08 (MiDeletePagefile.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002E060 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x14002E0E0 (IoGetRelatedDeviceObject.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IoAllocateIrp @ 0x1400C611C (IoAllocateIrp.c)
 *     IoQueueThreadIrp @ 0x140132E00 (IoQueueThreadIrp.c)
 *     PpDevNodeUnlockTree @ 0x1403F49E0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1403F4AB8 (PpDevNodeLockTree.c)
 */

__int64 __fastcall PiPagePathSetState(struct _FILE_OBJECT *Object, BOOLEAN a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  PIRP Irp; // rax
  IRP *v6; // rbx
  IRP *v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v10; // ebx
  _DWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  v12[0] = 0;
  v12[1] = 0;
  v13 = 0LL;
  ObfReferenceObject(Object);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  Irp = IoAllocateIrp(RelatedDeviceObject->StackSize, 0);
  v6 = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = Object;
    v7 = Irp;
    CurrentThread = KeGetCurrentThread();
    v6->Overlay.AllocationSize.QuadPart = 0LL;
    v6->Tail.Overlay.Thread = CurrentThread;
    v6->UserEvent = &Event;
    v6->UserIosb = (PIO_STATUS_BLOCK)v12;
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    v6->RequestorMode = 0;
    v6->Flags = 4;
    CurrentStackLocation[-1].FileObject = Object;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 5659;
    v6->AssociatedIrp.MasterIrp = 0LL;
    v6->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.Create.Options = 1;
    CurrentStackLocation[-1].Parameters.SetLock.Lock = a2;
    IoQueueThreadIrp(v7);
    PpDevNodeLockTree(1);
    v10 = IofCallDriver(RelatedDeviceObject, v6);
    if ( v10 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v10 = v12[0];
    }
    PpDevNodeUnlockTree(1);
    return v10;
  }
  else
  {
    ObfDereferenceObject(Object);
    return 3221225495LL;
  }
}
