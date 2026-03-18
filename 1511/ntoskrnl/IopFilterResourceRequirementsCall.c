/*
 * XREFs of IopFilterResourceRequirementsCall @ 0x1404F179C
 * Callers:
 *     IopQueryDeviceResources @ 0x1404EF3B0 (IopQueryDeviceResources.c)
 * Callees:
 *     IovUtilWatermarkIrp @ 0x14001AE3C (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x14001AF44 (IoAllocateIrp.c)
 *     IoGetAttachedDeviceReference @ 0x14001B010 (IoGetAttachedDeviceReference.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

__int64 __fastcall IopFilterResourceRequirementsCall(struct _DEVICE_OBJECT *a1, ULONG_PTR a2, ULONG_PTR *a3)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  PIRP Irp; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v10; // ebx
  int v12; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR v13; // [rsp+38h] [rbp-30h]
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  if ( Irp )
  {
    IovUtilWatermarkIrp();
    if ( a2 )
    {
      v12 = 0;
      Irp->IoStatus.Status = 0;
      v13 = a2;
      Irp->IoStatus.Information = a2;
    }
    else
    {
      v12 = -1073741637;
      Irp->IoStatus.Status = -1073741637;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v12;
    Irp->UserEvent = &Event;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)Irp, v7, v8);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 3355;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    v10 = IofCallDriver(AttachedDeviceReference, Irp);
    if ( v10 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v10 = v12;
    }
    *a3 = v13;
  }
  else
  {
    v10 = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return v10;
}
