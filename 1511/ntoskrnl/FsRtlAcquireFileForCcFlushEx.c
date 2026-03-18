/*
 * XREFs of FsRtlAcquireFileForCcFlushEx @ 0x140455928
 * Callers:
 *     MmFlushSection @ 0x1400A8E90 (MmFlushSection.c)
 *     MiDeleteCachedSubsection @ 0x1401D0BA0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401D0FFC (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x140455438 (MmFlushVirtualMemory.c)
 * Callees:
 *     FsFilterCtrlFree @ 0x14003AFD0 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14003AFE0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x14003B050 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x14003B2F0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14003B380 (IoGetBaseFileSystemDeviceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140098860 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
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
  __int64 v21; // [rsp+38h] [rbp-D0h] BYREF
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C8h]
  PDEVICE_OBJECT v23[8]; // [rsp+48h] [rbp-C0h] BYREF
  char v24; // [rsp+88h] [rbp-80h]

  v1 = 0;
  v2 = v23;
  v3 = FileObject;
  LOWORD(v21) = 0;
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
    result = FsFilterCtrlInit((__int64)v23, 251, (__int64)RelatedDeviceObject, v5, (__int64)v3, 1u);
    if ( (int)result < 0 )
      return result;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v1 = FsFilterPerformCallbacks((__int64)v23, 1, 1, &v21);
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
      if ( v2 && (v3 = (PFILE_OBJECT)v23[2], (v24 & 4) != 0) )
      {
        BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(v23[1]);
        v12 = 1;
        v14 = BaseFileSystemDeviceObject->DriverObject;
        FastIoDispatch = v14->FastIoDispatch;
        AddDevice = v14->DriverExtension[1].AddDevice;
      }
      else
      {
        v12 = BYTE1(v21);
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
        LOBYTE(v21) = 1;
      }
      if ( v12 )
        ObfDereferenceObject(BaseFileSystemDeviceObject);
    }
  }
  if ( v1 == -1073741808 && (_BYTE)v21 )
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
      FsFilterPerformCompletionCallbacks((__int64)v23, v1);
    FsFilterCtrlFree((__int64)v23);
  }
  if ( v1 < 0 )
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v1;
}
