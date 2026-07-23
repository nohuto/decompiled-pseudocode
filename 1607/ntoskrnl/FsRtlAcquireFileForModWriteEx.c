/*
 * XREFs of FsRtlAcquireFileForModWriteEx @ 0x14009E320
 * Callers:
 *     MiGatherMappedPages @ 0x14001FD70 (MiGatherMappedPages.c)
 * Callees:
 *     FsFilterCtrlFree @ 0x140025DD4 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140025DF0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140025E60 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140026100 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14002618C (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400A4198 (ExConvertExclusiveToSharedLite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140132C38 (ExAcquireSharedWaitForExclusive.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall FsRtlAcquireFileForModWriteEx(PFILE_OBJECT FileObject, _QWORD *a2, struct _ERESOURCE **a3)
{
  unsigned int v3; // ebx
  PFILE_OBJECT v4; // r15
  char v5; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v7; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  __int64 result; // rax
  _QWORD *v13; // r12
  struct _ERESOURCE **v14; // r13
  int v15; // eax
  char v16; // r12
  __int64 (__fastcall *AcquireForModWrite)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  struct _DRIVER_OBJECT *v18; // rax
  PVOID FsContext; // rdi
  char v20; // dl
  __int64 v21; // rcx
  struct _ERESOURCE *v22; // rbx
  char v23; // si
  BOOLEAN v24; // al
  char v25; // cl
  struct _ERESOURCE *v26; // rcx
  char v27; // [rsp+30h] [rbp-D0h] BYREF
  char v28; // [rsp+31h] [rbp-CFh]
  _QWORD *v29; // [rsp+38h] [rbp-C8h]
  struct _ERESOURCE **v30; // [rsp+40h] [rbp-C0h]
  char *v31; // [rsp+48h] [rbp-B8h]
  char v32[8]; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-A8h]
  struct _FILE_OBJECT *v34; // [rsp+60h] [rbp-A0h]
  _QWORD *v35; // [rsp+68h] [rbp-98h]
  struct _ERESOURCE **v36; // [rsp+70h] [rbp-90h]
  char v37; // [rsp+90h] [rbp-70h]

  v30 = a3;
  v3 = 0;
  v31 = v32;
  v28 = 0;
  v4 = FileObject;
  v27 = 0;
  v5 = 0;
  v29 = a2;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(v4);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x50u && *((_QWORD *)AddDevice + 9)
     || *(_DWORD *)AddDevice >= 0x58u && *((_QWORD *)AddDevice + 10)) )
  {
    v5 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v5 )
  {
    v14 = v30;
    v31 = 0LL;
    v16 = 0;
LABEL_12:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x50u || !*((_QWORD *)AddDevice + 9))
      && (*(_DWORD *)AddDevice < 0x58u || !*((_QWORD *)AddDevice + 10)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0x80
        && (AcquireForModWrite = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->AcquireForModWrite) != 0LL )
      {
        v3 = AcquireForModWrite(v4, v29, v14, BaseFileSystemDeviceObject);
      }
      else
      {
        v3 = -1073741808;
      }
      v27 = 1;
    }
    if ( v16 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    v13 = v29;
    goto LABEL_25;
  }
  result = FsFilterCtrlInit((__int64)v32, 253, (__int64)RelatedDeviceObject, v7, (__int64)v4, 1u);
  if ( (int)result < 0 )
    return result;
  v13 = v29;
  v14 = v30;
  v35 = v29;
  v36 = v30;
  v15 = FsFilterPerformCallbacks((__int64)v32, 1, 1, &v27);
  v3 = v15;
  if ( v15 >= 0 )
  {
    if ( v15 )
    {
      if ( v15 == 294 )
        v3 = 0;
      goto LABEL_25;
    }
    v4 = v34;
    if ( (v37 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v16 = 1;
      v18 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v18->FastIoDispatch;
      AddDevice = v18->DriverExtension[1].AddDevice;
    }
    else
    {
      v16 = v28;
    }
    goto LABEL_12;
  }
LABEL_25:
  if ( v3 == -1073741808 && v27 )
  {
    FsContext = v4->FsContext;
    if ( *((_QWORD *)FsContext + 1) )
    {
      v20 = *((_BYTE *)FsContext + 4);
      if ( (v20 & 8) != 0 || (v21 = *((_QWORD *)FsContext + 5), *v13 > v21) && v21 != *((_QWORD *)FsContext + 4) )
      {
        v23 = 1;
      }
      else
      {
        if ( (v20 & 0x10) == 0 )
        {
          v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
          if ( v22 )
          {
            v23 = 0;
            goto LABEL_54;
          }
        }
        v23 = 0;
      }
      v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      while ( 1 )
      {
LABEL_54:
        if ( v23 )
          v24 = ExAcquireResourceExclusiveLite(v22, 0);
        else
          v24 = ExAcquireSharedWaitForExclusive(v22, 0);
        if ( !v24 )
          goto LABEL_71;
        v25 = *((_BYTE *)FsContext + 4);
        if ( (v25 & 8) != 0 || *v13 > *((_QWORD *)FsContext + 5) )
        {
          if ( v23 )
            goto LABEL_43;
        }
        else
        {
          if ( (v25 & 0x10) == 0 )
          {
            v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
            if ( !v26 || v22 == v26 )
            {
              if ( v23 )
LABEL_42:
                ExConvertExclusiveToSharedLite(v22);
            }
            else
            {
              v22 = 0LL;
              if ( ExAcquireSharedWaitForExclusive(v26, 0) )
                v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
              ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
              if ( !v22 )
              {
LABEL_71:
                v3 = -1073741608;
                goto LABEL_26;
              }
            }
LABEL_43:
            *v14 = v22;
            goto LABEL_44;
          }
          if ( v23 )
            goto LABEL_42;
          if ( v22 == *((struct _ERESOURCE **)FsContext + 1) )
            goto LABEL_43;
        }
        ExReleaseResourceLite(v22);
        v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
        v23 = 1;
      }
    }
    *v14 = 0LL;
LABEL_44:
    v3 = 0;
  }
LABEL_26:
  if ( v31 )
  {
    if ( *((_WORD *)v31 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v32, v3);
    FsFilterCtrlFree((__int64)v32);
  }
  return v3;
}
