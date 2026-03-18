/*
 * XREFs of CmpGetVolumeClusterSize @ 0x1403D210C
 * Callers:
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     CmpOpenHiveFile @ 0x1403DD4E4 (CmpOpenHiveFile.c)
 * Callees:
 *     IoAllocateIrp @ 0x14001AF44 (IoAllocateIrp.c)
 *     IoGetAttachedDeviceReference @ 0x14001B010 (IoGetAttachedDeviceReference.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140087080 (IoFreeIrp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwQueryVolumeInformationFile @ 0x140150F40 (ZwQueryVolumeInformationFile.c)
 *     CmpCreateEvent @ 0x1403DD924 (CmpCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall CmpGetVolumeClusterSize(HANDLE FileHandle, int *a2)
{
  NTSTATUS result; // eax
  int v5; // eax
  PVOID v6; // r15
  NTSTATUS v7; // ebx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DEVICE_OBJECT *v9; // r14
  PIRP Irp; // rax
  IRP *v11; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  IRP *v13; // rdx
  struct _IO_STACK_LOCATION *v14; // rax
  NTSTATUS Status; // ebx
  unsigned int v16; // ecx
  int v17; // ecx
  HANDLE Handle; // [rsp+38h] [rbp-41h] BYREF
  PVOID Object; // [rsp+40h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-31h] BYREF
  int v21; // [rsp+58h] [rbp-21h] BYREF
  __int64 v22; // [rsp+5Ch] [rbp-1Dh]
  __int64 v23; // [rsp+64h] [rbp-15h]
  __int64 v24; // [rsp+6Ch] [rbp-Dh]
  _BYTE FsInformation[20]; // [rsp+78h] [rbp-1h] BYREF
  unsigned int v26; // [rsp+8Ch] [rbp+13h]

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21 = 6;
  result = ObReferenceObjectByHandle(FileHandle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
  if ( result >= 0 )
  {
    v5 = CmpCreateEvent(NotificationEvent, &Handle);
    v6 = Object;
    v7 = v5;
    if ( v5 < 0 )
    {
LABEL_20:
      ObfDereferenceObject(v6);
      return v7;
    }
    AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)Object + 1));
    v9 = AttachedDeviceReference;
    if ( AttachedDeviceReference )
    {
      Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
      v11 = Irp;
      if ( !Irp )
      {
LABEL_27:
        v7 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
        if ( v7 < 0 )
          goto LABEL_18;
        v16 = v26;
LABEL_13:
        if ( v16 > 0x1000 )
          v16 = 4096;
        v7 = 0;
        if ( v16 < 0x200 )
        {
          v17 = 1;
          goto LABEL_17;
        }
        v17 = v16 >> 9;
        if ( ((v17 - 1) & v17) == 0 )
        {
LABEL_17:
          *a2 = v17;
          goto LABEL_18;
        }
        v7 = -1073741288;
LABEL_18:
        if ( v9 )
          ObfDereferenceObject(v9);
        goto LABEL_20;
      }
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      v13 = Irp;
      CurrentStackLocation[-1].MajorFunction = 14;
      CurrentStackLocation[-1].DeviceObject = v9;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2954240;
      CurrentStackLocation[-1].Parameters.Read.Length = 28;
      CurrentStackLocation[-1].Parameters.Create.Options = 12;
      Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v21;
      Irp->UserBuffer = &v21;
      v14 = Irp->Tail.Overlay.CurrentStackLocation;
      v11->Flags = 80;
      v11->IoStatus.Status = -1073741637;
      v14[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&CmpGetVolumeClusterSizeCompletion;
      v14[-1].Context = 0LL;
      v14[-1].Control = -32;
      Status = IofCallDriver(v9, v13);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(0LL, Executive, 0, 0, 0LL);
        Status = v11->IoStatus.Status;
      }
      IoFreeIrp(v11);
    }
    else
    {
      Status = -1073741811;
    }
    v16 = 0;
    if ( Status >= 0 )
    {
      if ( (unsigned int)v22 < 0x18 || !(_DWORD)v24 || (v16 = v24, (((_DWORD)v24 - 1) & (unsigned int)v24) != 0) )
        Status = -1073741288;
      if ( Status >= 0 )
        goto LABEL_13;
    }
    goto LABEL_27;
  }
  return result;
}
