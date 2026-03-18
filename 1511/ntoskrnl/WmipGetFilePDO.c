/*
 * XREFs of WmipGetFilePDO @ 0x14050B798
 * Callers:
 *     IoWMIHandleToInstanceName @ 0x14050B4F0 (IoWMIHandleToInstanceName.c)
 *     WmipTranslateFileHandle @ 0x14065EA80 (WmipTranslateFileHandle.c)
 * Callees:
 *     IoAllocateIrp @ 0x14001AF44 (IoAllocateIrp.c)
 *     IoGetAttachedDeviceReference @ 0x14001B010 (IoGetAttachedDeviceReference.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IoFreeIrp @ 0x140087080 (IoFreeIrp.c)
 *     IoSynchronousCallDriver @ 0x1400EB0E0 (IoSynchronousCallDriver.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall WmipGetFilePDO(void *a1, KPROCESSOR_MODE a2, _QWORD *a3)
{
  NTSTATUS v4; // ebx
  PFILE_OBJECT v5; // rsi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rbp
  PIRP Irp; // rax
  IRP *v9; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _QWORD *Information; // rcx
  PFILE_OBJECT FileObject; // [rsp+68h] [rbp+20h] BYREF

  v4 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, a2, (PVOID *)&FileObject, 0LL);
  if ( v4 >= 0 )
  {
    v5 = FileObject;
    RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
    AttachedDeviceReference = IoGetAttachedDeviceReference(RelatedDeviceObject);
    Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
    v9 = Irp;
    if ( Irp )
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1819;
      CurrentStackLocation[-1].Parameters.Read.Length = 4;
      CurrentStackLocation[-1].FileObject = v5;
      v9->IoStatus.Status = -1073741637;
      v4 = IoSynchronousCallDriver(AttachedDeviceReference, v9);
      if ( v4 >= 0 )
      {
        Information = (_QWORD *)v9->IoStatus.Information;
        *a3 = Information[1];
        ExFreePoolWithTag(Information, 0);
        v4 = 0;
      }
      IoFreeIrp(v9);
    }
    else
    {
      v4 = -1073741670;
    }
    ObfDereferenceObject(AttachedDeviceReference);
    if ( v5 )
      ObfDereferenceObject(v5);
  }
  return (unsigned int)v4;
}
