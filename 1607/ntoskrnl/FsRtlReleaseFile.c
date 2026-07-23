/*
 * XREFs of FsRtlReleaseFile @ 0x14042CD30
 * Callers:
 *     CcZeroEndOfLastPage @ 0x1400243D0 (CcZeroEndOfLastPage.c)
 *     MiReferenceControlArea @ 0x140025BE4 (MiReferenceControlArea.c)
 *     FsRtlCreateSectionForDataScan @ 0x14007DBE0 (FsRtlCreateSectionForDataScan.c)
 *     CcDeleteSharedCacheMap @ 0x1400CABD4 (CcDeleteSharedCacheMap.c)
 *     CcWriteBehindInternal @ 0x1400E5DD0 (CcWriteBehindInternal.c)
 *     CcClearPrivateWriteFile @ 0x1401B1EBC (CcClearPrivateWriteFile.c)
 *     CcSetPrivateWriteFile @ 0x1401B22F0 (CcSetPrivateWriteFile.c)
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 *     MiCreateNewSection @ 0x1405050A8 (MiCreateNewSection.c)
 * Callees:
 *     FsFilterCtrlFree @ 0x140025DD4 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140025DF0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140025E60 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140026100 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14002618C (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __stdcall FsRtlReleaseFile(PFILE_OBJECT FileObject)
{
  unsigned int v1; // edi
  char *v2; // r14
  PFILE_OBJECT v3; // rbp
  char v4; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v6; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r13
  struct _DRIVER_OBJECT *DriverObject; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  PDRIVER_ADD_DEVICE AddDevice; // rbx
  int v11; // eax
  char v12; // r15
  void (__fastcall *ReleaseFileForNtCreateSection)(PFILE_OBJECT); // rax
  struct _DRIVER_OBJECT *v14; // rbx
  PVOID FsContext; // rax
  struct _ERESOURCE *v16; // rcx
  char v17[8]; // [rsp+30h] [rbp-278h] BYREF
  char v18[8]; // [rsp+38h] [rbp-270h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-268h]
  struct _FILE_OBJECT *v20; // [rsp+48h] [rbp-260h]
  char v21; // [rsp+78h] [rbp-230h]

  v1 = 0;
  v2 = v18;
  v17[0] = 0;
  v3 = FileObject;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(v3);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x20u && *((_QWORD *)AddDevice + 3)
     || *(_DWORD *)AddDevice >= 0x28u && *((_QWORD *)AddDevice + 4)) )
  {
    v4 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v4 )
  {
    v2 = 0LL;
    goto LABEL_10;
  }
  FsFilterCtrlInit((__int64)v18, 254, (__int64)RelatedDeviceObject, v6, (__int64)v3, 0);
  v11 = FsFilterPerformCallbacks((__int64)v18, 0, 0, v17);
  v1 = v11;
  if ( v11 < 0 )
    goto LABEL_23;
  if ( !v11 )
  {
    v3 = v20;
    if ( (v21 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v12 = 1;
      v14 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v14->FastIoDispatch;
      AddDevice = v14->DriverExtension[1].AddDevice;
LABEL_11:
      if ( !AddDevice
        || (*(_DWORD *)AddDevice < 0x20u || !*((_QWORD *)AddDevice + 3))
        && (*(_DWORD *)AddDevice < 0x28u || !*((_QWORD *)AddDevice + 4)) )
      {
        if ( FastIoDispatch
          && FastIoDispatch->SizeOfFastIoDispatch >= 0x68
          && (ReleaseFileForNtCreateSection = (void (__fastcall *)(PFILE_OBJECT))FastIoDispatch->ReleaseFileForNtCreateSection) != 0LL )
        {
          ReleaseFileForNtCreateSection(v3);
        }
        else
        {
          v1 = -1073741808;
        }
        v17[0] = 1;
      }
      if ( v12 )
        ObfDereferenceObject(BaseFileSystemDeviceObject);
      goto LABEL_23;
    }
LABEL_10:
    v12 = 0;
    goto LABEL_11;
  }
  if ( v11 == 294 )
  {
    v1 = 0;
LABEL_25:
    if ( *((_WORD *)v2 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v18, v1);
    FsFilterCtrlFree((__int64)v18);
    goto LABEL_28;
  }
LABEL_23:
  if ( v1 == -1073741808 && v17[0] )
  {
    FsContext = v3->FsContext;
    if ( FsContext )
    {
      v16 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( v16 )
        ExReleaseResourceLite(v16);
    }
    v1 = 0;
  }
  if ( v2 )
    goto LABEL_25;
LABEL_28:
  KeLeaveCriticalRegion();
}
