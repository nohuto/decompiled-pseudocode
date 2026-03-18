/*
 * XREFs of Win32FileInfo @ 0x1C0141D68
 * Callers:
 *     vGetFontDriverLWT @ 0x1C013C9E4 (vGetFontDriverLWT.c)
 *     ComputeFNTCacheFastCheckSum @ 0x1C0141C9C (ComputeFNTCacheFastCheckSum.c)
 *     ?IsWin32kRefreshed@@YA_NXZ @ 0x1C015B304 (-IsWin32kRefreshed@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall Win32FileInfo(PCWSTR SourceString, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  NTSTATUS v6; // r14d
  void *FileHandle; // [rsp+70h] [rbp-59h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-51h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-41h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-31h] BYREF
  _BYTE FileInformation[8]; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v13; // [rsp+D0h] [rbp+7h]
  __int64 v14; // [rsp+D8h] [rbp+Fh]

  v3 = 0;
  FileHandle = 0LL;
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = IoCreateFile(
         &FileHandle,
         0x1200A9u,
         &ObjectAttributes,
         &IoStatusBlock,
         0LL,
         0x80u,
         1u,
         1u,
         0x10u,
         0LL,
         0,
         CreateFileTypeNone,
         0LL,
         0x301u);
  if ( v6 < 0 )
    return 0LL;
  if ( !a2 )
    goto LABEL_9;
  v6 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  if ( v6 >= 0 )
  {
    *a2 = v14;
LABEL_9:
    if ( a3 )
    {
      v6 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
      if ( v6 >= 0 )
        *a3 = v13;
    }
  }
  ZwClose(FileHandle);
  if ( v6 >= 0 )
    return 1;
  return v3;
}
