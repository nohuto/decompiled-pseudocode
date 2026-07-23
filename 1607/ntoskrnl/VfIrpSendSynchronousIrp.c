/*
 * XREFs of VfIrpSendSynchronousIrp @ 0x14070BF30
 * Callers:
 *     VfPnpTestStartedPdoStack @ 0x1407186C0 (VfPnpTestStartedPdoStack.c)
 *     VfPowerTestStartedPdoStack @ 0x140718FF4 (VfPowerTestStartedPdoStack.c)
 *     VfWmiTestStartedPdoStack @ 0x1407191FC (VfWmiTestStartedPdoStack.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     IoAllocateIrpEx @ 0x14002DC54 (IoAllocateIrpEx.c)
 *     IoFreeIrp @ 0x140055950 (IoFreeIrp.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoGetAttachedDeviceReference @ 0x1400C2790 (IoGetAttachedDeviceReference.c)
 *     IovUtilWatermarkIrp @ 0x1400C3EB4 (IovUtilWatermarkIrp.c)
 */

__int64 __fastcall VfIrpSendSynchronousIrp(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        int a3,
        NTSTATUS a4,
        ULONG_PTR a5,
        ULONG_PTR *a6,
        NTSTATUS *a7)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rbp
  __int64 v11; // rdx
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  struct _IO_STACK_LOCATION *v18; // rax
  NTSTATUS Status; // r14d
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0;
  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  LOBYTE(v11) = AttachedDeviceReference->StackSize;
  Irp = (IRP *)IoAllocateIrpEx((__int64)AttachedDeviceReference, v11, 0LL);
  if ( Irp )
  {
    if ( a3 )
      IovUtilWatermarkIrp();
    Irp->IoStatus.Status = a4;
    Irp->IoStatus.Information = a5;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v15 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v16 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v15;
    v17 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v16;
    *(_QWORD *)&v16 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v17;
    CurrentStackLocation[-1].Context = (PVOID)v16;
    v18 = Irp->Tail.Overlay.CurrentStackLocation;
    v18[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&ViIrpSynchronousCompletionRoutine;
    v18[-1].Context = &Event;
    v18[-1].Control = -32;
    Status = IofCallDriver(AttachedDeviceReference, Irp);
    ObfDereferenceObject(AttachedDeviceReference);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = Irp->IoStatus.Status;
    }
    if ( a7 )
      *a7 = Status;
    if ( a6 )
      *a6 = Irp->IoStatus.Information;
    IoFreeIrp(Irp);
    return 1LL;
  }
  else
  {
    ObfDereferenceObject(AttachedDeviceReference);
    return 0LL;
  }
}
