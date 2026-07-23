/*
 * XREFs of FsRtlAcquireFileExclusiveCommon @ 0x14042CEE0
 * Callers:
 *     FsRtlAcquireToCreateMappedSection @ 0x14042CC68 (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlAcquireFileExclusive @ 0x14042CD18 (FsRtlAcquireFileExclusive.c)
 * Callees:
 *     FsFilterCtrlFree @ 0x140025DD4 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140025DF0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140025E60 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140026100 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14002618C (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall FsRtlAcquireFileExclusiveCommon(PFILE_OBJECT FileObject, int a2, int a3, __int64 a4)
{
  int v4; // ebx
  char *v5; // r14
  PFILE_OBJECT v7; // r12
  char v8; // r15
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r13
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  PDRIVER_EXTENSION DriverExtension; // rax
  PDRIVER_ADD_DEVICE AddDevice; // rsi
  __int64 result; // rax
  struct _KTHREAD *v19; // rax
  int v20; // eax
  char v21; // di
  struct _KTHREAD *CurrentThread; // rax
  char v23; // bp
  struct _DRIVER_OBJECT *v24; // rax
  void (__fastcall *AcquireFileForNtCreateSection)(PFILE_OBJECT); // rax
  PVOID FsContext; // rax
  struct _ERESOURCE *v27; // rcx
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
    goto LABEL_32;
  }
  if ( a2 == 1 )
    LOBYTE(v4) = 1;
  result = FsFilterCtrlInit((__int64)v32, 255, (__int64)RelatedDeviceObject, v12, (__int64)v7, v4);
  if ( (int)result >= 0 )
  {
    v36 = v29;
    v37 = v30;
    v35 = a2;
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v20 = FsFilterPerformCallbacks((__int64)v32, v4, v4, v28);
    v4 = v20;
    if ( v20 >= 0 )
    {
      if ( !v20 )
      {
        v7 = v34;
        if ( (v38 & 4) != 0 )
        {
          BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
          v23 = 1;
          v24 = BaseFileSystemDeviceObject->DriverObject;
          FastIoDispatch = v24->FastIoDispatch;
          AddDevice = v24->DriverExtension[1].AddDevice;
LABEL_33:
          if ( AddDevice
            && (*(_DWORD *)AddDevice >= 0x10u && *((_QWORD *)AddDevice + 1)
             || *(_DWORD *)AddDevice >= 0x18u && *((_QWORD *)AddDevice + 2)) )
          {
            v21 = v28[0];
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
            v21 = 1;
          }
          if ( v23 )
            ObfDereferenceObject(BaseFileSystemDeviceObject);
LABEL_21:
          if ( v4 == -1073741808 && v21 )
          {
            FsContext = v7->FsContext;
            if ( FsContext )
            {
              v27 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
              if ( v27 )
                ExAcquireResourceExclusiveLite(v27, 1u);
            }
            v4 = 0;
          }
          if ( !v5 )
            goto LABEL_16;
          goto LABEL_13;
        }
        FastIoDispatch = v31;
LABEL_32:
        v23 = 0;
        goto LABEL_33;
      }
      if ( v20 == 294 )
      {
        v4 = 0;
LABEL_13:
        if ( *((_WORD *)v5 + 37) )
          FsFilterPerformCompletionCallbacks((__int64)v32, v4);
        FsFilterCtrlFree((__int64)v32);
LABEL_16:
        if ( v4 < 0 )
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
        return (unsigned int)v4;
      }
    }
    v21 = v28[0];
    goto LABEL_21;
  }
  return result;
}
