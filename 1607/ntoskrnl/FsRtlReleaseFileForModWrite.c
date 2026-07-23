/*
 * XREFs of FsRtlReleaseFileForModWrite @ 0x14008E914
 * Callers:
 *     MiGatherMappedPages @ 0x14001FD70 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 * Callees:
 *     FsFilterCtrlFree @ 0x140025DD4 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140025DF0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140025E60 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140026100 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14002618C (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall FsRtlReleaseFileForModWrite(PFILE_OBJECT FileObject, struct _ERESOURCE *a2)
{
  signed int v2; // ebx
  char *v3; // r15
  struct _FILE_OBJECT *v4; // r13
  char v5; // r12
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // rsi
  __int64 v7; // r9
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  struct _ERESOURCE *v11; // r12
  int v12; // eax
  __int64 (__fastcall *ReleaseForModWrite)(struct _FILE_OBJECT *, struct _ERESOURCE *, PDEVICE_OBJECT); // rax
  struct _DRIVER_OBJECT *v14; // rax
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+31h] [rbp-CFh]
  PERESOURCE Resource; // [rsp+38h] [rbp-C8h]
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C0h]
  char v19[8]; // [rsp+48h] [rbp-B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-B0h]
  struct _FILE_OBJECT *v21; // [rsp+58h] [rbp-A8h]
  PERESOURCE v22; // [rsp+60h] [rbp-A0h]
  char v23; // [rsp+88h] [rbp-78h]

  v2 = 0;
  Resource = a2;
  v16 = 0;
  v3 = v19;
  v15 = 0;
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
    v11 = Resource;
    v3 = 0LL;
    goto LABEL_11;
  }
  FsFilterCtrlInit((__int64)v19, 252, (__int64)RelatedDeviceObject, v7, (__int64)v4, 0);
  v11 = Resource;
  v22 = Resource;
  v12 = FsFilterPerformCallbacks((__int64)v19, 0, 1, &v15);
  v2 = v12;
  if ( v12 >= 0 )
  {
    if ( v12 )
    {
      if ( v12 == 294 )
        v2 = 0;
LABEL_23:
      if ( v2 >= 0 )
        goto LABEL_24;
      goto LABEL_35;
    }
    v4 = v21;
    if ( (v23 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v16 = 1;
      v14 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v14->FastIoDispatch;
      AddDevice = v14->DriverExtension[1].AddDevice;
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
        v2 = ReleaseForModWrite(v4, v11, BaseFileSystemDeviceObject);
      }
      else
      {
        v2 = -1073741808;
      }
      v15 = 1;
    }
    if ( v16 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    goto LABEL_23;
  }
LABEL_35:
  if ( v15 )
  {
    ExReleaseResourceLite(v11);
    v2 = 0;
  }
LABEL_24:
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v19, v2);
    FsFilterCtrlFree((__int64)v19);
  }
}
