/*
 * XREFs of PopValidateHiberFileSize @ 0x14052F520
 * Callers:
 *     PopResizeHiberFile @ 0x14052F3EC (PopResizeHiberFile.c)
 *     PopSetHiberFileSize @ 0x14066E6C4 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x14066E7C8 (PopSetHiberFileType.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14015A410 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x14015AB10 (ZwQueryVolumeInformationFile.c)
 */

__int64 __fastcall PopValidateHiberFileSize(__int64 a1, __int64 *a2)
{
  NTSTATUS v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  HANDLE FileHandle; // [rsp+30h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-31h] BYREF
  char FsInformation[16]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v14; // [rsp+88h] [rbp+Fh]
  int v15; // [rsp+90h] [rbp+17h]
  int v16; // [rsp+94h] [rbp+1Bh]
  __int64 FileInformation[3]; // [rsp+98h] [rbp+1Fh] BYREF

  if ( FileObject )
  {
    v4 = ZwQueryInformationFile(PopHiberInfo, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
    if ( v4 < 0 )
    {
LABEL_13:
      v8 = 0LL;
      goto LABEL_10;
    }
    v5 = FileInformation[0];
  }
  else
  {
    v5 = 0LL;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &IoArcBootDeviceName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( v4 < 0 )
    goto LABEL_13;
  v4 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 0x20u, FileFsFullSizeInformation);
  ZwClose(FileHandle);
  if ( v4 < 0 )
    goto LABEL_13;
  v4 = 0;
  v6 = v14 * (unsigned int)(v16 * v15) - 0x10000000;
  if ( v6 < a1 - v5 )
    v4 = -1073741823;
  v7 = v6 + v5;
  v8 = 0LL;
  if ( v7 > 0 )
    v8 = v7;
LABEL_10:
  if ( a2 )
    *a2 = v8;
  return (unsigned int)v4;
}
