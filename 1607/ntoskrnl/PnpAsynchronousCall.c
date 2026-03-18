/*
 * XREFs of PnpAsynchronousCall @ 0x1403F1BB0
 * Callers:
 *     PnpSendIrp @ 0x1400082D8 (PnpSendIrp.c)
 *     PiIrpQueryRemoveDevice @ 0x14064A0C8 (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     IofCallDriver @ 0x14002E060 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IoGetAttachedDeviceReference @ 0x1400C48F0 (IoGetAttachedDeviceReference.c)
 *     IovUtilWatermarkIrp @ 0x1400C6014 (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x1400C611C (IoAllocateIrp.c)
 */

__int64 __fastcall PnpAsynchronousCall(struct _DEVICE_OBJECT *a1, __int128 *a2, IO_COMPLETION_ROUTINE *a3, void *a4)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  PIRP Irp; // rbx
  _QWORD *DeviceNode; // rax
  __int128 v11; // xmm0
  struct _KTHREAD *CurrentThread; // rax
  __int128 v13; // xmm1
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  struct _IO_STACK_LOCATION *v17; // rax
  unsigned int v18; // ebx

  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  if ( Irp )
  {
    IovUtilWatermarkIrp();
    if ( a1 )
      DeviceNode = a1->DeviceObjectExtension->DeviceNode;
    else
      DeviceNode = 0LL;
    if ( DeviceNode )
      DeviceNode[9] = Irp;
    Irp->IoStatus.Information = 0LL;
    v11 = *a2;
    Irp->IoStatus.Status = -1073741637;
    CurrentThread = KeGetCurrentThread();
    Irp->UserIosb = 0LL;
    Irp->UserEvent = 0LL;
    v13 = a2[1];
    Irp->Tail.Overlay.Thread = CurrentThread;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    Irp->RequestorMode = 0;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = v11;
    v15 = a2[2];
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v13;
    v16 = a2[3];
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v15;
    *(_QWORD *)&v15 = *((_QWORD *)a2 + 8);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v16;
    CurrentStackLocation[-1].Context = (PVOID)v15;
    v17 = Irp->Tail.Overlay.CurrentStackLocation;
    v17[-1].CompletionRoutine = a3;
    v17[-1].Context = a4;
    v17[-1].Control = -32;
    v18 = IofCallDriver(AttachedDeviceReference, Irp);
  }
  else
  {
    v18 = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return v18;
}
