/*
 * XREFs of FsRtlAcquireFileExclusiveCommon @ 0x1404B34E0
 * Callers:
 *     FsRtlAcquireToCreateMappedSection @ 0x1404B31B8 (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlAcquireFileExclusive @ 0x1404B32E0 (FsRtlAcquireFileExclusive.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     FsFilterCtrlFree @ 0x140088C70 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140088C80 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140088CF0 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140088F90 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140089020 (IoGetBaseFileSystemDeviceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall FsRtlAcquireFileExclusiveCommon(PFILE_OBJECT FileObject, int a2, int a3, __int64 a4)
{
  int v4; // ebx
  char *v5; // r14
  PFILE_OBJECT v7; // r12
  char v8; // r15
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  __int64 v10; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r13
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  PDRIVER_EXTENSION DriverExtension; // rax
  PDRIVER_ADD_DEVICE AddDevice; // rsi
  __int64 result; // rax
  struct _KTHREAD *v17; // rax
  int v18; // eax
  char v19; // di
  struct _KTHREAD *CurrentThread; // rax
  char v21; // bp
  struct _DRIVER_OBJECT *v22; // rax
  void (__fastcall *AcquireFileForNtCreateSection)(PFILE_OBJECT); // rax
  PVOID FsContext; // rax
  struct _ERESOURCE *v25; // rcx
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  char v28[4]; // [rsp+30h] [rbp-2A8h] BYREF
  int v29; // [rsp+34h] [rbp-2A4h]
  __int64 v30; // [rsp+38h] [rbp-2A0h]
  struct _FAST_IO_DISPATCH *v31; // [rsp+40h] [rbp-298h]
  char v32[8]; // [rsp+48h] [rbp-290h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-288h]
  struct _FILE_OBJECT *v34; // [rsp+58h] [rbp-280h]
  int v35; // [rsp+60h] [rbp-278h]
  int v36; // [rsp+64h] [rbp-274h]
  __int64 v37; // [rsp+68h] [rbp-270h]
  char v38; // [rsp+88h] [rbp-250h]

  v4 = 0;
  v30 = a4;
  v28[0] = 0;
  v5 = v32;
  v29 = a3;
  v7 = FileObject;
  v8 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(v7);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  DriverExtension = DriverObject->DriverExtension;
  v31 = FastIoDispatch;
  AddDevice = DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x10u && *((_QWORD *)AddDevice + 1)
     || *(_DWORD *)AddDevice >= 0x18u && *((_QWORD *)AddDevice + 2)) )
  {
    v8 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v8 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 0LL;
    --CurrentThread->KernelApcDisable;
    goto LABEL_31;
  }
  if ( a2 == 1 )
    LOBYTE(v4) = 1;
  result = FsFilterCtrlInit((__int64)v32, 255, (__int64)RelatedDeviceObject, v10, (__int64)v7, v4);
  if ( (int)result >= 0 )
  {
    v36 = v29;
    v37 = v30;
    v35 = a2;
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v18 = FsFilterPerformCallbacks((__int64)v32, v4, v4, v28);
    v4 = v18;
    if ( v18 >= 0 )
    {
      if ( !v18 )
      {
        v7 = v34;
        if ( (v38 & 4) != 0 )
        {
          BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
          v21 = 1;
          v22 = BaseFileSystemDeviceObject->DriverObject;
          FastIoDispatch = v22->FastIoDispatch;
          AddDevice = v22->DriverExtension[1].AddDevice;
LABEL_32:
          if ( AddDevice
            && (*(_DWORD *)AddDevice >= 0x10u && *((_QWORD *)AddDevice + 1)
             || *(_DWORD *)AddDevice >= 0x18u && *((_QWORD *)AddDevice + 2)) )
          {
            v19 = v28[0];
          }
          else
          {
            if ( FastIoDispatch
              && FastIoDispatch->SizeOfFastIoDispatch >= 0x60
              && (AcquireFileForNtCreateSection = (void (__fastcall *)(PFILE_OBJECT))FastIoDispatch->AcquireFileForNtCreateSection) != 0LL )
            {
              AcquireFileForNtCreateSection(v7);
            }
            else
            {
              v4 = -1073741808;
            }
            v19 = 1;
          }
          if ( v21 )
            ObfDereferenceObject(BaseFileSystemDeviceObject);
LABEL_20:
          if ( v4 == -1073741808 && v19 )
          {
            FsContext = v7->FsContext;
            if ( FsContext )
            {
              v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
              if ( v25 )
                ExAcquireResourceExclusiveLite(v25, 1u);
            }
            v4 = 0;
          }
          if ( !v5 )
            goto LABEL_16;
          goto LABEL_13;
        }
        FastIoDispatch = v31;
LABEL_31:
        v21 = 0;
        goto LABEL_32;
      }
      if ( v18 == 294 )
      {
        v4 = 0;
LABEL_13:
        if ( *((_WORD *)v5 + 37) )
          FsFilterPerformCompletionCallbacks((__int64)v32, v4);
        FsFilterCtrlFree((__int64)v32);
LABEL_16:
        if ( v4 < 0 )
        {
          v26 = KeGetCurrentThread();
          v27 = v26->KernelApcDisable + 1;
          v26->KernelApcDisable = v27;
          if ( !v27
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
            && !v26->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        return (unsigned int)v4;
      }
    }
    v19 = v28[0];
    goto LABEL_20;
  }
  return result;
}
