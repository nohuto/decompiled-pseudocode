/*
 * XREFs of SmKmIsVolumeIoPossible @ 0x1406DCC20
 * Callers:
 *     SmKmStoreFileCreateForIoType @ 0x1406DDB90 (SmKmStoreFileCreateForIoType.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IoFreeIrp @ 0x14004BC70 (IoFreeIrp.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IoAllocateIrp @ 0x1400CF78C (IoAllocateIrp.c)
 *     IoSetThreadHardErrorMode @ 0x1400EFE84 (IoSetThreadHardErrorMode.c)
 *     ZwQueryVolumeInformationFile @ 0x14017F910 (ZwQueryVolumeInformationFile.c)
 *     SmKmSendUsageNotification @ 0x1406DD654 (SmKmSendUsageNotification.c)
 */

__int64 __fastcall SmKmIsVolumeIoPossible(__int64 a1, int *a2)
{
  IRP *v4; // rdi
  int v5; // ebp
  BOOLEAN v6; // r14
  NTSTATUS Status; // ebx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  IRP *Irp; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-28h] BYREF
  char FsInformation; // [rsp+60h] [rbp+8h] BYREF
  char v13; // [rsp+64h] [rbp+Ch]

  v4 = 0LL;
  v5 = 0;
  v6 = IoSetThreadHardErrorMode(0);
  Status = ZwQueryVolumeInformationFile(*(HANDLE *)a1, &IoStatusBlock, &FsInformation, 8u, FileFsDeviceInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 8) + 152LL), Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    if ( (v13 & 1) != 0 )
      goto LABEL_8;
    RelatedDeviceObject = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)(a1 + 8));
    Irp = IoAllocateIrp(RelatedDeviceObject->StackSize, 0);
    v4 = Irp;
    if ( !Irp )
    {
      Status = -1073741670;
      goto LABEL_10;
    }
    Status = SmKmSendUsageNotification(Irp, *(PFILE_OBJECT *)(a1 + 8));
    if ( Status < 0 )
    {
LABEL_8:
      Status = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 40) = v4;
      v5 = 1;
      v4 = 0LL;
    }
  }
LABEL_10:
  *a2 = v5;
  if ( v4 )
    IoFreeIrp(v4);
  IoSetThreadHardErrorMode(v6);
  return (unsigned int)Status;
}
