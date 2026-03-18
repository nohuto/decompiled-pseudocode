/*
 * XREFs of FsRtlReleaseFileForModWrite @ 0x14003079C
 * Callers:
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 * Callees:
 *     FsFilterCtrlFree @ 0x14003AFD0 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14003AFE0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x14003B050 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x14003B2F0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14003B380 (IoGetBaseFileSystemDeviceObject.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140098860 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __fastcall FsRtlReleaseFileForModWrite(PFILE_OBJECT FileObject, struct _ERESOURCE *a2)
{
  int v2; // ebx
  char *v3; // r15
  struct _FILE_OBJECT *v4; // r13
  char v5; // r12
  int v6; // edx
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // rsi
  int v8; // r9d
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  struct _ERESOURCE *v12; // r12
  __int64 v13; // r8
  int v14; // eax
  __int64 (__fastcall *ReleaseForModWrite)(struct _FILE_OBJECT *, struct _ERESOURCE *, PDEVICE_OBJECT); // rax
  struct _DRIVER_OBJECT *v16; // rax
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18; // [rsp+31h] [rbp-CFh]
  PERESOURCE Resource; // [rsp+38h] [rbp-C8h]
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C0h]
  char v21[8]; // [rsp+48h] [rbp-B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-B0h]
  struct _FILE_OBJECT *v23; // [rsp+58h] [rbp-A8h]
  PERESOURCE v24; // [rsp+60h] [rbp-A0h]
  char v25; // [rsp+88h] [rbp-78h]

  v2 = 0;
  Resource = a2;
  v18 = 0;
  v3 = v21;
  v17 = 0;
  v4 = FileObject;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(v4);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x60u && *((_QWORD *)AddDevice + 11)
     || *(_DWORD *)AddDevice >= 0x68u && *((_QWORD *)AddDevice + 12)) )
  {
    v5 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v5 )
  {
    v12 = Resource;
    v3 = 0LL;
    goto LABEL_11;
  }
  LOBYTE(v6) = -4;
  FsFilterCtrlInit((unsigned int)v21, v6, (_DWORD)RelatedDeviceObject, v8, (__int64)v4, 0);
  v12 = Resource;
  LOBYTE(v13) = 1;
  v24 = Resource;
  v14 = FsFilterPerformCallbacks(v21, 0LL, v13, &v17);
  v2 = v14;
  if ( v14 >= 0 )
  {
    if ( v14 )
    {
      if ( v14 == 294 )
        v2 = 0;
LABEL_23:
      if ( v2 >= 0 )
        goto LABEL_24;
      goto LABEL_35;
    }
    v4 = v23;
    if ( (v25 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v18 = 1;
      v16 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v16->FastIoDispatch;
      AddDevice = v16->DriverExtension[1].AddDevice;
    }
LABEL_11:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x60u || !*((_QWORD *)AddDevice + 11))
      && (*(_DWORD *)AddDevice < 0x68u || !*((_QWORD *)AddDevice + 12)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0xD0
        && (ReleaseForModWrite = (__int64 (__fastcall *)(struct _FILE_OBJECT *, struct _ERESOURCE *, PDEVICE_OBJECT))FastIoDispatch->ReleaseForModWrite) != 0LL )
      {
        v2 = ReleaseForModWrite(v4, v12, BaseFileSystemDeviceObject);
      }
      else
      {
        v2 = -1073741808;
      }
      v17 = 1;
    }
    if ( v18 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    goto LABEL_23;
  }
LABEL_35:
  if ( v17 )
  {
    ExReleaseResourceLite(v12);
    v2 = 0;
  }
LABEL_24:
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks(v21, (unsigned int)v2);
    FsFilterCtrlFree(v21);
  }
}
