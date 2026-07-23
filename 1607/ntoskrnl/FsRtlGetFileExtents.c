/*
 * XREFs of FsRtlGetFileExtents @ 0x1401B8094
 * Callers:
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IoSynchronousCallDriver @ 0x1400AAB98 (IoSynchronousCallDriver.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall FsRtlGetFileExtents(struct _FILE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  __int64 v9; // rdx
  IRP *Irp; // rax
  IRP *v11; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v14; // ebx
  _DWORD v15[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h]
  _QWORD v17[3]; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v15[0] = 0;
  v15[1] = 0;
  v16 = 0LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v9) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)pIoAllocateIrp(RelatedDeviceObject, v9, 0LL, retaddr);
  v11 = Irp;
  if ( !Irp )
    return 3221225626LL;
  v17[2] = 0LL;
  v17[0] = a3;
  v17[1] = a4;
  Irp->UserEvent = 0LL;
  Irp->RequestorMode = 0;
  Irp->UserIosb = (PIO_STATUS_BLOCK)v15;
  Irp->UserBuffer = a5;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 13;
  CurrentStackLocation[-1].FileObject = a1;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 590747;
  CurrentStackLocation[-1].Parameters.Create.Options = 24;
  CurrentStackLocation[-1].Parameters.Read.Length = 16 * *a5 + 8;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)v17;
  v14 = IoSynchronousCallDriver(RelatedDeviceObject, Irp);
  pIoFreeIrp(v11);
  return v14;
}
