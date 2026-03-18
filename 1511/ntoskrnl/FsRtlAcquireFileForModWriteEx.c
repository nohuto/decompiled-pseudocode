/*
 * XREFs of FsRtlAcquireFileForModWriteEx @ 0x14002FED0
 * Callers:
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 * Callees:
 *     FsFilterCtrlFree @ 0x14003AFD0 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14003AFE0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x14003B050 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x14003B2F0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14003B380 (IoGetBaseFileSystemDeviceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140098860 (IoGetDeviceAttachmentBaseRef.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1400CF384 (ExAcquireSharedWaitForExclusive.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400CF4E8 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall FsRtlAcquireFileForModWriteEx(PFILE_OBJECT FileObject, _QWORD *a2, struct _ERESOURCE **a3)
{
  unsigned int v3; // ebx
  PFILE_OBJECT v4; // r15
  char v5; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  int v7; // edx
  int v8; // r9d
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // r12
  struct _ERESOURCE **v17; // r13
  int v18; // eax
  char v19; // r12
  __int64 (__fastcall *AcquireForModWrite)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  struct _DRIVER_OBJECT *v21; // rax
  PVOID FsContext; // rdi
  char v23; // dl
  __int64 v24; // rcx
  struct _ERESOURCE *v25; // rbx
  char v26; // si
  BOOLEAN v27; // al
  char v28; // cl
  struct _ERESOURCE *v29; // rcx
  char v30; // [rsp+30h] [rbp-D0h] BYREF
  char v31; // [rsp+31h] [rbp-CFh]
  _QWORD *v32; // [rsp+38h] [rbp-C8h]
  char *v33; // [rsp+40h] [rbp-C0h]
  struct _ERESOURCE **v34; // [rsp+48h] [rbp-B8h]
  char v35[8]; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-A8h]
  struct _FILE_OBJECT *v37; // [rsp+60h] [rbp-A0h]
  _QWORD *v38; // [rsp+68h] [rbp-98h]
  struct _ERESOURCE **v39; // [rsp+70h] [rbp-90h]
  char v40; // [rsp+90h] [rbp-70h]

  v34 = a3;
  v3 = 0;
  v33 = v35;
  v31 = 0;
  v4 = FileObject;
  v30 = 0;
  v5 = 0;
  v32 = a2;
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
    v17 = v34;
    v33 = 0LL;
    v19 = 0;
LABEL_12:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x50u || !*((_QWORD *)AddDevice + 9))
      && (*(_DWORD *)AddDevice < 0x58u || !*((_QWORD *)AddDevice + 10)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0x80
        && (AcquireForModWrite = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->AcquireForModWrite) != 0LL )
      {
        v3 = AcquireForModWrite(v4, v32, v17, BaseFileSystemDeviceObject);
      }
      else
      {
        v3 = -1073741808;
      }
      v30 = 1;
    }
    if ( v19 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    v16 = v32;
    goto LABEL_25;
  }
  LOBYTE(v7) = -3;
  result = FsFilterCtrlInit((unsigned int)v35, v7, (_DWORD)RelatedDeviceObject, v8, (__int64)v4, 1);
  if ( (int)result < 0 )
    return result;
  v16 = v32;
  v17 = v34;
  LOBYTE(v15) = 1;
  v38 = v32;
  LOBYTE(v14) = 1;
  v39 = v34;
  v18 = FsFilterPerformCallbacks(v35, v14, v15, &v30);
  v3 = v18;
  if ( v18 >= 0 )
  {
    if ( v18 )
    {
      if ( v18 == 294 )
        v3 = 0;
      goto LABEL_25;
    }
    v4 = v37;
    if ( (v40 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v19 = 1;
      v21 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v21->FastIoDispatch;
      AddDevice = v21->DriverExtension[1].AddDevice;
    }
    else
    {
      v19 = v31;
    }
    goto LABEL_12;
  }
LABEL_25:
  if ( v3 == -1073741808 && v30 )
  {
    FsContext = v4->FsContext;
    if ( *((_QWORD *)FsContext + 1) )
    {
      v23 = *((_BYTE *)FsContext + 4);
      if ( (v23 & 8) != 0 || (v24 = *((_QWORD *)FsContext + 5), *v16 > v24) && v24 != *((_QWORD *)FsContext + 4) )
      {
        v26 = 1;
      }
      else
      {
        if ( (v23 & 0x10) == 0 )
        {
          v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
          if ( v25 )
          {
            v26 = 0;
            goto LABEL_54;
          }
        }
        v26 = 0;
      }
      v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      while ( 1 )
      {
LABEL_54:
        if ( v26 )
          v27 = ExAcquireResourceExclusiveLite(v25, 0);
        else
          v27 = ExAcquireSharedWaitForExclusive(v25, 0);
        if ( !v27 )
          goto LABEL_71;
        v28 = *((_BYTE *)FsContext + 4);
        if ( (v28 & 8) != 0 || *v16 > *((_QWORD *)FsContext + 5) )
        {
          if ( v26 )
            goto LABEL_43;
        }
        else
        {
          if ( (v28 & 0x10) == 0 )
          {
            v29 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
            if ( !v29 || v25 == v29 )
            {
              if ( v26 )
LABEL_42:
                ExConvertExclusiveToSharedLite(v25);
            }
            else
            {
              v25 = 0LL;
              if ( ExAcquireSharedWaitForExclusive(v29, 0) )
                v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
              ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
              if ( !v25 )
              {
LABEL_71:
                v3 = -1073741608;
                goto LABEL_26;
              }
            }
LABEL_43:
            *v17 = v25;
            goto LABEL_44;
          }
          if ( v26 )
            goto LABEL_42;
          if ( v25 == *((struct _ERESOURCE **)FsContext + 1) )
            goto LABEL_43;
        }
        ExReleaseResourceLite(v25);
        v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
        v26 = 1;
      }
    }
    *v17 = 0LL;
LABEL_44:
    v3 = 0;
  }
LABEL_26:
  if ( v33 )
  {
    if ( *((_WORD *)v33 + 37) )
      FsFilterPerformCompletionCallbacks(v35, v3);
    FsFilterCtrlFree(v35);
  }
  return v3;
}
