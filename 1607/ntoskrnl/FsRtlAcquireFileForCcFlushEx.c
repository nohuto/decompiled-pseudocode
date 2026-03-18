/*
 * XREFs of FsRtlAcquireFileForCcFlushEx @ 0x14042BC1C
 * Callers:
 *     MmFlushSection @ 0x140022558 (MmFlushSection.c)
 *     MiDeleteCachedSubsection @ 0x1401DE5D0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401DEA98 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x1404D1998 (MmFlushVirtualMemory.c)
 * Callees:
 *     FsFilterCtrlFree @ 0x140026254 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140026270 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x1400262E0 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140026580 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14002660C (IoGetBaseFileSystemDeviceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14002D250 (ExIsResourceAcquiredSharedLite.c)
 *     IoGetRelatedDeviceObject @ 0x14002E0E0 (IoGetRelatedDeviceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400FB62C (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

__int64 __fastcall FsRtlAcquireFileForCcFlushEx(PFILE_OBJECT FileObject)
{
  signed int v1; // ebx
  PDEVICE_OBJECT *v2; // r15
  PFILE_OBJECT v3; // r13
  char v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  char v14; // r12
  __int64 (__fastcall *AcquireForCcFlush)(PFILE_OBJECT, PDEVICE_OBJECT); // rax
  struct _DRIVER_OBJECT *v16; // rax
  PVOID FsContext; // rbx
  struct _ERESOURCE *v18; // rcx
  ULONG IsResourceAcquiredSharedLite; // eax
  struct _ERESOURCE *v20; // rcx
  struct _ERESOURCE *v21; // rcx
  struct _KTHREAD *v22; // rax
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
    result = FsFilterCtrlInit((__int64)v25, 251, (__int64)RelatedDeviceObject, v7, (__int64)v3, 1u);
    if ( (int)result < 0 )
      return result;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v1 = FsFilterPerformCallbacks((__int64)v25, 1, 1, &v23);
  }
  else
  {
    v22 = KeGetCurrentThread();
    v2 = 0LL;
    --v22->KernelApcDisable;
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
        v14 = 1;
        v16 = BaseFileSystemDeviceObject->DriverObject;
        FastIoDispatch = v16->FastIoDispatch;
        AddDevice = v16->DriverExtension[1].AddDevice;
      }
      else
      {
        v14 = BYTE1(v23);
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
      if ( v14 )
        ObfDereferenceObject(BaseFileSystemDeviceObject);
    }
  }
  if ( v1 == -1073741808 && (_BYTE)v23 )
  {
    FsContext = v3->FsContext;
    v18 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    if ( v18 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(v18);
      v20 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( IsResourceAcquiredSharedLite )
        ExAcquireResourceSharedLite(v20, 1u);
      else
        ExAcquireResourceExclusiveLite(v20, 1u);
    }
    v21 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v21 )
      ExAcquireResourceSharedLite(v21, 1u);
    v1 = 0;
  }
  if ( v2 )
  {
    if ( *((_WORD *)v2 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v25, v1);
    FsFilterCtrlFree((__int64)v25);
  }
  if ( v1 < 0 )
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
  return (unsigned int)v1;
}
