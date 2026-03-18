/*
 * XREFs of FsRtlReleaseFileForCcFlush @ 0x1404B2240
 * Callers:
 *     MmFlushSection @ 0x140085220 (MmFlushSection.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140211468 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x140531D6C (MmFlushVirtualMemory.c)
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

void __fastcall FsRtlReleaseFileForCcFlush(PFILE_OBJECT FileObject)
{
  unsigned int v1; // ebx
  PDEVICE_OBJECT *v2; // r12
  PFILE_OBJECT v3; // r15
  char v4; // r13
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // rsi
  __int64 v6; // r9
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  int v10; // eax
  char v11; // r13
  __int64 (__fastcall *ReleaseForCcFlush)(PFILE_OBJECT, PDEVICE_OBJECT); // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v14; // ax
  struct _DRIVER_OBJECT *v15; // rax
  PVOID FsContext; // rbx
  struct _ERESOURCE *v17; // rcx
  struct _ERESOURCE *v18; // rcx
  __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C8h]
  PDEVICE_OBJECT v21[8]; // [rsp+48h] [rbp-C0h] BYREF
  char v22; // [rsp+88h] [rbp-80h]

  v1 = 0;
  v2 = v21;
  LOBYTE(v19) = 0;
  v3 = FileObject;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(v3);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x40u && *((_QWORD *)AddDevice + 7)
     || *(_DWORD *)AddDevice >= 0x48u && *((_QWORD *)AddDevice + 8)) )
  {
    v4 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v4 )
  {
    v2 = 0LL;
    goto LABEL_10;
  }
  FsFilterCtrlInit((__int64)v21, 250, (__int64)RelatedDeviceObject, v6, (__int64)v3, 0);
  v10 = FsFilterPerformCallbacks((__int64)v21, 0, 1, &v19);
  v1 = v10;
  if ( v10 < 0 )
    goto LABEL_23;
  if ( !v10 )
  {
    v3 = (PFILE_OBJECT)v21[2];
    if ( (v22 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(v21[1]);
      v11 = 1;
      v15 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v15->FastIoDispatch;
      AddDevice = v15->DriverExtension[1].AddDevice;
LABEL_11:
      if ( !AddDevice
        || (*(_DWORD *)AddDevice < 0x40u || !*((_QWORD *)AddDevice + 7))
        && (*(_DWORD *)AddDevice < 0x48u || !*((_QWORD *)AddDevice + 8)) )
      {
        if ( FastIoDispatch
          && FastIoDispatch->SizeOfFastIoDispatch >= 0xE0
          && (ReleaseForCcFlush = (__int64 (__fastcall *)(PFILE_OBJECT, PDEVICE_OBJECT))FastIoDispatch->ReleaseForCcFlush) != 0LL )
        {
          v1 = ReleaseForCcFlush(v3, BaseFileSystemDeviceObject);
        }
        else
        {
          v1 = -1073741808;
        }
        LOBYTE(v19) = 1;
      }
      if ( v11 )
        ObfDereferenceObject(BaseFileSystemDeviceObject);
      goto LABEL_23;
    }
LABEL_10:
    v11 = 0;
    goto LABEL_11;
  }
  if ( v10 == 294 )
    v1 = 0;
LABEL_23:
  if ( v1 == -1073741808 && (_BYTE)v19 )
  {
    FsContext = v3->FsContext;
    v17 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v17 )
      ExReleaseResourceLite(v17);
    v18 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    if ( v18 )
      ExReleaseResourceLite(v18);
    v1 = 0;
  }
  if ( v2 )
  {
    if ( *((_WORD *)v2 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v21, v1);
    FsFilterCtrlFree((__int64)v21);
  }
  CurrentThread = KeGetCurrentThread();
  v14 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
