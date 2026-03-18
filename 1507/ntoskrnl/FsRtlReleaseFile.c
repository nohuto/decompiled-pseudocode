/*
 * XREFs of FsRtlReleaseFile @ 0x1404B32F0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14002F658 (FsRtlCreateSectionForDataScan.c)
 *     CcWriteBehindInternal @ 0x1400414C0 (CcWriteBehindInternal.c)
 *     CcDeleteSharedCacheMap @ 0x140086290 (CcDeleteSharedCacheMap.c)
 *     CcZeroEndOfLastPage @ 0x140088AE0 (CcZeroEndOfLastPage.c)
 *     MiReferenceControlArea @ 0x140089080 (MiReferenceControlArea.c)
 *     CcClearPrivateWriteFile @ 0x1401DD72C (CcClearPrivateWriteFile.c)
 *     CcSetPrivateWriteFile @ 0x1401DDBC0 (CcSetPrivateWriteFile.c)
 *     MiCreateNewSection @ 0x1404702B8 (MiCreateNewSection.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     FsFilterCtrlFree @ 0x140088C70 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140088C80 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140088CF0 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140088F90 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140089020 (IoGetBaseFileSystemDeviceObject.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
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
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v15; // ax
  struct _DRIVER_OBJECT *v16; // rbx
  PVOID FsContext; // rax
  struct _ERESOURCE *v18; // rcx
  char v19[8]; // [rsp+30h] [rbp-278h] BYREF
  char v20[8]; // [rsp+38h] [rbp-270h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-268h]
  struct _FILE_OBJECT *v22; // [rsp+48h] [rbp-260h]
  char v23; // [rsp+78h] [rbp-230h]

  v1 = 0;
  v2 = v20;
  v19[0] = 0;
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
  FsFilterCtrlInit((__int64)v20, 254, (__int64)RelatedDeviceObject, v6, (__int64)v3, 0);
  v11 = FsFilterPerformCallbacks((__int64)v20, 0, 0, v19);
  v1 = v11;
  if ( v11 < 0 )
    goto LABEL_23;
  if ( !v11 )
  {
    v3 = v22;
    if ( (v23 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v12 = 1;
      v16 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v16->FastIoDispatch;
      AddDevice = v16->DriverExtension[1].AddDevice;
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
        v19[0] = 1;
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
      FsFilterPerformCompletionCallbacks((__int64)v20, v1);
    FsFilterCtrlFree((__int64)v20);
    goto LABEL_28;
  }
LABEL_23:
  if ( v1 == -1073741808 && v19[0] )
  {
    FsContext = v3->FsContext;
    if ( FsContext )
    {
      v18 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( v18 )
        ExReleaseResourceLite(v18);
    }
    v1 = 0;
  }
  if ( v2 )
    goto LABEL_25;
LABEL_28:
  CurrentThread = KeGetCurrentThread();
  v15 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
