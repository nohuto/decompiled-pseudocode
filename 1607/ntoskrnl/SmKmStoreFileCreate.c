/*
 * XREFs of SmKmStoreFileCreate @ 0x140698BCC
 * Callers:
 *     SmcCacheStart @ 0x14069A334 (SmcCacheStart.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     IoSetThreadHardErrorMode @ 0x140074D38 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x14015A410 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14015A6D0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x14015AB10 (ZwQueryVolumeInformationFile.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IoRegisterPlugPlayNotification @ 0x14052A9FC (IoRegisterPlugPlayNotification.c)
 *     SmKmFileInfoCleanup @ 0x140697EC4 (SmKmFileInfoCleanup.c)
 *     SmKmStoreFileCreateForIoType @ 0x14069904C (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x1406992C0 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x140699358 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x140699848 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x1406999B0 (SmKmStoreFileWriteHeader.c)
 */

__int64 __fastcall SmKmStoreFileCreate(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        int a6,
        unsigned int *a7,
        _OWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        __int64 a11)
{
  __int64 v13; // r13
  unsigned int v14; // r14d
  HANDLE *v15; // rdi
  HANDLE v16; // r15
  char *v17; // rsi
  NTSTATUS Status; // ebx
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  __int128 v21; // xmm1
  _OWORD *v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  _DWORD *v25; // rcx
  int v27; // [rsp+28h] [rbp-D8h]
  BOOLEAN EnableHardErrors; // [rsp+50h] [rbp-B0h]
  int v29[3]; // [rsp+54h] [rbp-ACh] BYREF
  int v30; // [rsp+60h] [rbp-A0h]
  int v31; // [rsp+64h] [rbp-9Ch]
  PVOID NotificationEntry; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-90h] BYREF
  HANDLE FileHandle[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 FileInformation; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v36; // [rsp+C8h] [rbp-38h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+D0h] [rbp-30h]
  _OWORD *v38; // [rsp+D8h] [rbp-28h]
  _DWORD *v39; // [rsp+E0h] [rbp-20h]
  _DWORD *v40; // [rsp+E8h] [rbp-18h]
  _QWORD *v41; // [rsp+F0h] [rbp-10h]
  unsigned int *v42; // [rsp+F8h] [rbp-8h]
  __int64 v43; // [rsp+100h] [rbp+0h]
  _QWORD FsInformation[2]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v45; // [rsp+118h] [rbp+18h]
  char v46[8]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v47; // [rsp+128h] [rbp+28h]

  v38 = a8;
  v39 = a9;
  v40 = a10;
  v43 = a11;
  v13 = a3;
  DriverObject = PnpDriverObject;
  v29[0] = a4;
  v41 = a5;
  v42 = a7;
  memset(FileHandle, 0, sizeof(FileHandle));
  v14 = *a7;
  v31 = 0;
  v30 = 0;
  LODWORD(NotificationEntry) = v14;
  EnableHardErrors = IoSetThreadHardErrorMode(0);
  if ( (a2 & 1) != 0 )
  {
    v15 = (HANDLE *)(a2 & 0xFFFFFFFFFFFFFFFEuLL);
    v16 = *v15;
    v17 = (char *)v15[1];
    FileHandle[5] = v15[5];
    FileHandle[0] = v16;
    FileHandle[1] = v17;
    memset(v15, 0, 0x40uLL);
    a2 = 0LL;
    *(_QWORD *)&v29[1] = -1LL;
  }
  else
  {
    v17 = (char *)FileHandle[1];
    v16 = FileHandle[0];
    *(_QWORD *)&v29[1] = *a5;
  }
  if ( a4 > (unsigned int)v13 )
  {
    Status = -1073741811;
    goto LABEL_40;
  }
  if ( a2 )
  {
    Status = SmKmStoreFileCreateForIoType(FileHandle, a2, &NotificationEntry);
    if ( Status < 0 )
      goto LABEL_40;
    v16 = FileHandle[0];
    v31 = 1;
    FileInformation = *(_QWORD *)&v29[1];
    v19 = ZwSetInformationFile(FileHandle[0], &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
    v17 = (char *)FileHandle[1];
    Status = v19;
    if ( v19 == 259 )
    {
      KeWaitForSingleObject((char *)FileHandle[1] + 152, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
    {
LABEL_39:
      SmKmStoreFileDelete(FileHandle);
      goto LABEL_40;
    }
    v14 = (unsigned int)NotificationEntry;
    if ( (_DWORD)NotificationEntry )
    {
      v36 = *(_QWORD *)&v29[1];
      v20 = ZwSetInformationFile(v16, &IoStatusBlock, &v36, 8u, FileValidDataLengthInformation);
      if ( v20 == 259 )
      {
        KeWaitForSingleObject(v17 + 152, Executive, 0, 0, 0LL);
        v20 = IoStatusBlock.Status;
      }
      if ( v20 < 0 )
        v30 = 1;
    }
LABEL_20:
    if ( *(_QWORD *)&v29[1] / v13 < 0xFFFFFFFFLL )
    {
      FsInformation[0] = 0LL;
      FsInformation[1] = 0LL;
      v45 = 0LL;
      Status = ZwQueryVolumeInformationFile(v16, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(v17 + 152, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        if ( !HIDWORD(v45)
          || ((HIDWORD(v45) - 1) & HIDWORD(v45)) != 0
          || HIDWORD(v45) > v29[0]
          || HIDWORD(v45) > (unsigned int)v13
          || HIDWORD(v45) > 0x1000 )
        {
          Status = -1070071787;
        }
        else
        {
          Status = SmKmStoreFileGetExtents(
                     v16,
                     v29[0],
                     v27,
                     v14,
                     (__int64)v29,
                     (__int64)&FileHandle[6],
                     (__int64)&FileHandle[7]);
          if ( Status >= 0 )
          {
            if ( v14 || (Status = SmKmStoreFileOpenVolume(FileHandle[1], &FileHandle[2], &FileHandle[3]), Status >= 0) )
            {
              if ( !a2 || (Status = SmKmStoreFileWriteHeader(FileHandle, v14), Status >= 0) )
              {
                Status = IoRegisterPlugPlayNotification(
                           EventCategoryTargetDeviceChange,
                           0,
                           FileHandle[1],
                           DriverObject,
                           SmcVolumePnpNotification,
                           0LL,
                           &NotificationEntry);
                if ( Status >= 0 )
                {
                  v21 = *(_OWORD *)&FileHandle[2];
                  FileHandle[4] = NotificationEntry;
                  v22 = v38;
                  *v38 = *(_OWORD *)FileHandle;
                  v23 = *(_OWORD *)&FileHandle[4];
                  v22[1] = v21;
                  v24 = *(_OWORD *)&FileHandle[6];
                  v22[2] = v23;
                  v22[3] = v24;
                  memset(FileHandle, 0, sizeof(FileHandle));
                  Status = 0;
                  *v39 = HIDWORD(v45);
                  *v40 = v29[0];
                  *v41 = *(_QWORD *)&v29[1];
                  v25 = (_DWORD *)v43;
                  *v42 = v14;
                  *v25 = v30;
                  goto LABEL_40;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      Status = -1073741811;
    }
    if ( !v31 )
      goto LABEL_40;
    goto LABEL_39;
  }
  Status = ZwQueryInformationFile(v16, &IoStatusBlock, v46, 0x18u, FileStandardInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(v17 + 152, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    *(_QWORD *)&v29[1] = v47;
    goto LABEL_20;
  }
LABEL_40:
  SmKmFileInfoCleanup((__int64)FileHandle);
  IoSetThreadHardErrorMode(EnableHardErrors);
  return (unsigned int)Status;
}
