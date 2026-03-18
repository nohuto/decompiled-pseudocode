/*
 * XREFs of FsRtlQueryInformationFile @ 0x1405F46E4
 * Callers:
 *     <none>
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

NTSTATUS __stdcall FsRtlQueryInformationFile(
        PFILE_OBJECT FileObject,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        PULONG RetFileInformationSize)
{
  IRP *v9; // rbx
  NTSTATUS Status; // edi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  struct _MDL *MdlAddress; // rcx
  PIRP Irp; // [rsp+30h] [rbp-38h]
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-30h]
  struct _KEVENT Object; // [rsp+40h] [rbp-28h] BYREF

  v9 = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    Status = -1073741808;
  }
  else
  {
    DeviceObject = IoGetRelatedDeviceObject(FileObject);
    LOBYTE(v11) = DeviceObject->StackSize;
    v12 = IoAllocateIrpEx((__int64)DeviceObject, v11, 0LL);
    v9 = (IRP *)v12;
    Irp = (PIRP)v12;
    if ( v12 )
    {
      v13 = (__int64 *)(v12 + 184);
      v14 = *(_QWORD *)(v12 + 184);
      *(_WORD *)(v14 - 72) = 1029;
      *(_QWORD *)(v14 - 24) = FileObject;
      v9->AssociatedIrp.MasterIrp = (struct _IRP *)FileInformation;
      *(_DWORD *)(v14 - 64) = Length;
      *(_DWORD *)(v14 - 56) = FileInformationClass;
      v9 = Irp;
      Irp->Tail.Overlay.Thread = KeGetCurrentThread();
      Irp->Flags |= 4u;
      Irp->RequestorMode = 0;
      v15 = *v13;
      *(_QWORD *)(v15 - 16) = SmKmGenericCompletion;
      *(_QWORD *)(v15 - 8) = &Object;
      *(_BYTE *)(v15 - 69) = 0;
      *(_BYTE *)(v15 - 69) = 64;
      *(_BYTE *)(v15 - 69) = -64;
      *(_BYTE *)(v15 - 69) = -32;
      if ( IofCallDriver(DeviceObject, Irp) == 259
        && FsRtlCancellableWaitForSingleObject(&Object, 0LL, 0LL) == -1073741749 )
      {
        IoCancelIrp(Irp);
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      }
      Status = Irp->IoStatus.Status;
      *RetFileInformationSize = Irp->IoStatus.Information;
    }
    else
    {
      Status = -1073741670;
    }
  }
  if ( v9 )
  {
    MdlAddress = v9->MdlAddress;
    if ( MdlAddress )
    {
      FsRtlpFreeMdlChain(MdlAddress);
      v9->MdlAddress = 0LL;
    }
    IoFreeIrp(v9);
  }
  return Status;
}
