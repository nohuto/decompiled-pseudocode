/*
 * XREFs of FsRtlKernelFsControlFile @ 0x1404B5000
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     IoAllocateIrpEx @ 0x14002DC54 (IoAllocateIrpEx.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     IoFreeIrp @ 0x140055950 (IoFreeIrp.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x1400A097C (IoCancelIrp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x14049914C (FsRtlCancellableWaitForSingleObject.c)
 *     FsRtlpFreeMdlChain @ 0x14061ECAC (FsRtlpFreeMdlChain.c)
 */

__int64 __fastcall FsRtlKernelFsControlFile(
        PFILE_OBJECT FileObject,
        int a2,
        const void *a3,
        unsigned int a4,
        PVOID VirtualAddress,
        ULONG Length,
        ULONG *a7)
{
  size_t v7; // r12
  IRP *v11; // rbx
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // rcx
  ULONG v17; // r14d
  __int64 v18; // rax
  int Status; // esi
  ULONG Information; // ecx
  struct _MDL *Mdl; // rax
  struct _MDL *MdlAddress; // rcx
  PIRP Irp; // [rsp+38h] [rbp-50h]
  __int64 *v25; // [rsp+40h] [rbp-48h]
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-40h]
  struct _KEVENT Object; // [rsp+50h] [rbp-38h] BYREF

  v7 = a4;
  v11 = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v12 = a2 & 3;
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    Status = -1073741808;
    goto LABEL_33;
  }
  DeviceObject = IoGetRelatedDeviceObject(FileObject);
  LOBYTE(v13) = DeviceObject->StackSize;
  v14 = IoAllocateIrpEx((__int64)DeviceObject, v13, 0LL);
  v11 = (IRP *)v14;
  Irp = (PIRP)v14;
  if ( !v14 )
    goto LABEL_19;
  v15 = (__int64 *)(v14 + 184);
  v25 = (__int64 *)(v14 + 184);
  v16 = *(_QWORD *)(v14 + 184);
  *(_WORD *)(v16 - 72) = 1037;
  *(_QWORD *)(v16 - 24) = FileObject;
  v17 = Length;
  *(_DWORD *)(v16 - 64) = Length;
  *(_DWORD *)(v16 - 56) = v7;
  *(_DWORD *)(v16 - 48) = a2;
  if ( (a2 & 3) == 0 )
  {
    if ( (_DWORD)v7 || Length )
    {
      if ( (unsigned int)v7 >= Length )
      {
        *(_QWORD *)(v14 + 24) = a3;
      }
      else
      {
        *(_QWORD *)(v14 + 24) = VirtualAddress;
        memmove(VirtualAddress, a3, v7);
        v15 = v25;
      }
      v11->Flags = 16;
      v11->UserBuffer = VirtualAddress;
      if ( VirtualAddress )
        v11->Flags |= 0x40u;
    }
    else
    {
      *(_DWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 112) = 0LL;
    }
    goto LABEL_10;
  }
  if ( v12 > 2 )
  {
    if ( v12 == 3 )
    {
      *(_QWORD *)(v14 + 112) = VirtualAddress;
      *(_QWORD *)(v16 - 40) = a3;
    }
    goto LABEL_10;
  }
  if ( a3 )
  {
    *(_QWORD *)(v14 + 24) = a3;
    *(_DWORD *)(v14 + 16) = 16;
  }
  else
  {
    *(_DWORD *)(v14 + 16) = 0;
  }
  if ( VirtualAddress )
  {
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    v11->MdlAddress = Mdl;
    if ( Mdl )
    {
      MmProbeAndLockPages(Mdl, 0, (LOCK_OPERATION)(v12 != 1));
      v15 = v25;
      goto LABEL_10;
    }
LABEL_19:
    Status = -1073741670;
    goto LABEL_33;
  }
LABEL_10:
  v11 = Irp;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->Flags |= 4u;
  Irp->RequestorMode = 0;
  v18 = *v15;
  *(_QWORD *)(v18 - 16) = SmKmGenericCompletion;
  *(_QWORD *)(v18 - 8) = &Object;
  *(_BYTE *)(v18 - 69) = 0;
  *(_BYTE *)(v18 - 69) = 64;
  *(_BYTE *)(v18 - 69) = -64;
  *(_BYTE *)(v18 - 69) = -32;
  if ( IofCallDriver(DeviceObject, Irp) == 259 && FsRtlCancellableWaitForSingleObject(&Object, 0LL, 0LL) == -1073741749 )
  {
    IoCancelIrp(Irp);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
  Status = Irp->IoStatus.Status;
  Information = Irp->IoStatus.Information;
  *a7 = Information;
  if ( Status >= 0 && Information && (unsigned int)v7 >= Length )
  {
    if ( Information < Length )
      v17 = Information;
    memmove(VirtualAddress, a3, v17);
  }
LABEL_33:
  if ( v11 )
  {
    MdlAddress = v11->MdlAddress;
    if ( MdlAddress )
    {
      FsRtlpFreeMdlChain(MdlAddress);
      v11->MdlAddress = 0LL;
    }
    IoFreeIrp(v11);
  }
  return (unsigned int)Status;
}
