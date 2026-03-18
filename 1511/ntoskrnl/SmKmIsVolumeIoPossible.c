/*
 * XREFs of SmKmIsVolumeIoPossible @ 0x14065A4DC
 * Callers:
 *     SmKmStoreFileCreateForIoType @ 0x14065B33C (SmKmStoreFileCreateForIoType.c)
 * Callees:
 *     IoAllocateIrp @ 0x14001AF44 (IoAllocateIrp.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140087080 (IoFreeIrp.c)
 *     IoSetThreadHardErrorMode @ 0x140092448 (IoSetThreadHardErrorMode.c)
 *     ZwQueryVolumeInformationFile @ 0x140150F40 (ZwQueryVolumeInformationFile.c)
 *     SmKmSendUsageNotification @ 0x14065AE00 (SmKmSendUsageNotification.c)
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
