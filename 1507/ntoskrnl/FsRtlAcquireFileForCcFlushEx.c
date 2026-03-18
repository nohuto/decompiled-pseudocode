/*
 * XREFs of FsRtlAcquireFileForCcFlushEx @ 0x1404B1FB8
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
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall FsRtlAcquireFileForCcFlushEx(PFILE_OBJECT FileObject)
{
  signed int v1; // ebx
  PDEVICE_OBJECT *v2; // r15
  PFILE_OBJECT v3; // r13
  char v4; // r12
  __int64 v5; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  char v12; // r12
  __int64 (__fastcall *AcquireForCcFlush)(PFILE_OBJECT, PDEVICE_OBJECT); // rax
  struct _DRIVER_OBJECT *v14; // rax
  PVOID FsContext; // rbx
  struct _ERESOURCE *v16; // rcx
  ULONG IsResourceAcquiredSharedLite; // eax
  struct _ERESOURCE *v18; // rcx
  struct _ERESOURCE *v19; // rcx
  struct _KTHREAD *v20; // rax
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  __int64 v23; // [rsp+38h] [rbp-D0h] BYREF
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C8h]
  PDEVICE_OBJECT v25[8]; // [rsp+48h] [rbp-C0h] BYREF
  char v26; // [rsp+88h] [rbp-80h]

  v1 = 0;
  v2 = v25;
  v3 = FileObject;
  LOWORD(v23) = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(v3);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x30u && *((_QWORD *)AddDevice + 5)
     || *(_DWORD *)AddDevice >= 0x38u && *((_QWORD *)AddDevice + 6)) )
  {
    v4 = 1;
  }
  if ( RelatedDeviceObject != BaseFileSystemDeviceObject || v4 )
  {
    result = FsFilterCtrlInit((__int64)v25, 251, (__int64)RelatedDeviceObject, v5, (__int64)v3, 1u);
    if ( (int)result < 0 )
      return result;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v1 = FsFilterPerformCallbacks((__int64)v25, 1, 1, &v23);
  }
  else
  {
    v20 = KeGetCurrentThread();
    v2 = 0LL;
    --v20->KernelApcDisable;
  }
  if ( v1 >= 0 )
  {
    if ( v1 )
    {
      if ( v1 == 294 )
        v1 = 0;
    }
    else
    {
      if ( v2 && (v3 = (PFILE_OBJECT)v25[2], (v26 & 4) != 0) )
      {
        BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(v25[1]);
        v12 = 1;
        v14 = BaseFileSystemDeviceObject->DriverObject;
        FastIoDispatch = v14->FastIoDispatch;
        AddDevice = v14->DriverExtension[1].AddDevice;
      }
      else
      {
        v12 = BYTE1(v23);
      }
      if ( !AddDevice
        || (*(_DWORD *)AddDevice < 0x30u || !*((_QWORD *)AddDevice + 5))
        && (*(_DWORD *)AddDevice < 0x38u || !*((_QWORD *)AddDevice + 6)) )
      {
        if ( FastIoDispatch
          && FastIoDispatch->SizeOfFastIoDispatch >= 0xD8
          && (AcquireForCcFlush = (__int64 (__fastcall *)(PFILE_OBJECT, PDEVICE_OBJECT))FastIoDispatch->AcquireForCcFlush) != 0LL )
        {
          v1 = AcquireForCcFlush(v3, BaseFileSystemDeviceObject);
        }
        else
        {
          v1 = -1073741808;
        }
        LOBYTE(v23) = 1;
      }
      if ( v12 )
        ObfDereferenceObject(BaseFileSystemDeviceObject);
    }
  }
  if ( v1 == -1073741808 && (_BYTE)v23 )
  {
    FsContext = v3->FsContext;
    v16 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    if ( v16 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(v16);
      v18 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( IsResourceAcquiredSharedLite )
        ExAcquireResourceSharedLite(v18, 1u);
      else
        ExAcquireResourceExclusiveLite(v18, 1u);
    }
    v19 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v19 )
      ExAcquireResourceSharedLite(v19, 1u);
    v1 = 0;
  }
  if ( v2 )
  {
    if ( *((_WORD *)v2 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v25, v1);
    FsFilterCtrlFree((__int64)v25);
  }
  if ( v1 < 0 )
  {
    v21 = KeGetCurrentThread();
    v22 = v21->KernelApcDisable + 1;
    v21->KernelApcDisable = v22;
    if ( !v22
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
      && !v21->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return (unsigned int)v1;
}
