/*
 * XREFs of FsRtlSetKernelEaFile @ 0x1404A233C
 * Callers:
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140087080 (IoFreeIrp.c)
 *     IoCancelIrp @ 0x1400C97FC (IoCancelIrp.c)
 *     IoAllocateIrpEx @ 0x1400DF48C (IoAllocateIrpEx.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x140489AA0 (FsRtlCancellableWaitForSingleObject.c)
 *     FsRtlpFreeMdlChain @ 0x1405F4894 (FsRtlpFreeMdlChain.c)
 */

__int64 __fastcall FsRtlSetKernelEaFile(PFILE_OBJECT FileObject, void *a2, int a3)
{
  IRP *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int Status; // edi
  struct _MDL *MdlAddress; // rcx
  PIRP Irp; // [rsp+30h] [rbp-28h]
  struct _KEVENT Object; // [rsp+38h] [rbp-20h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp+20h]

  v6 = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    Status = -1073741808;
  }
  else
  {
    DeviceObject = IoGetRelatedDeviceObject(FileObject);
    LOBYTE(v7) = DeviceObject->StackSize;
    v8 = IoAllocateIrpEx((__int64)DeviceObject, v7, 0LL);
    v6 = (IRP *)v8;
    Irp = (PIRP)v8;
    if ( v8 )
    {
      v9 = (__int64 *)(v8 + 184);
      v10 = *(_QWORD *)(v8 + 184);
      *(_WORD *)(v10 - 72) = 1032;
      *(_QWORD *)(v10 - 24) = FileObject;
      v6->UserBuffer = a2;
      *(_DWORD *)(v10 - 64) = a3;
      v6 = Irp;
      Irp->Tail.Overlay.Thread = KeGetCurrentThread();
      Irp->Flags = 4;
      Irp->RequestorMode = 0;
      v11 = *v9;
      *(_QWORD *)(v11 - 16) = SmKmGenericCompletion;
      *(_QWORD *)(v11 - 8) = &Object;
      *(_BYTE *)(v11 - 69) = 0;
      *(_BYTE *)(v11 - 69) = 64;
      *(_BYTE *)(v11 - 69) = -64;
      *(_BYTE *)(v11 - 69) = -32;
      if ( IofCallDriver(DeviceObject, Irp) == 259
        && FsRtlCancellableWaitForSingleObject(&Object, 0LL, 0LL) == -1073741749 )
      {
        IoCancelIrp(Irp);
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      }
      Status = Irp->IoStatus.Status;
    }
    else
    {
      Status = -1073741670;
    }
  }
  if ( v6 )
  {
    MdlAddress = v6->MdlAddress;
    if ( MdlAddress )
    {
      FsRtlpFreeMdlChain(MdlAddress);
      v6->MdlAddress = 0LL;
    }
    IoFreeIrp(v6);
  }
  return Status;
}
