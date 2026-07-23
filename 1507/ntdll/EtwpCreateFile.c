/*
 * XREFs of EtwpCreateFile @ 0x1800787B8
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x18000C5FC (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x18001C280 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwSetInformationFile @ 0x180093B70 (ZwSetInformationFile.c)
 *     ZwCreateFile @ 0x180093E50 (ZwCreateFile.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall EtwpCreateFile(PCWSTR SourceString, __int64 a2, __int64 a3, _BYTE *a4, int a5, HANDLE *a6)
{
  ULONG CreateDisposition; // r15d
  bool v9; // di
  NTSTATUS v10; // ebx
  HANDLE FileHandle; // [rsp+60h] [rbp-79h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+68h] [rbp-71h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-61h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-51h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-41h] BYREF
  _DWORD FileInformation[10]; // [rsp+C8h] [rbp-11h] BYREF

  *a6 = 0LL;
  CreateDisposition = 5;
  if ( *a4 == 1 )
    CreateDisposition = 3;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&NtFileName, 0LL);
  v9 = 0;
  if ( DestinationString.Length > 1u )
    v9 = SourceString[((unsigned __int64)DestinationString.Length >> 1) - 1] == 92;
  v10 = RtlDosPathNameToNtPathName_U_WithStatus(DestinationString.Buffer, &NtFileName, 0LL, 0LL);
  if ( v10 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &NtFileName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwCreateFile(
            &FileHandle,
            0xC0100080,
            &ObjectAttributes,
            &IoStatusBlock,
            0LL,
            0x80u,
            5u,
            CreateDisposition,
            0x68u,
            0LL,
            0);
    if ( v10 >= 0 )
    {
      if ( *a4 == 1 && IoStatusBlock.Information == 2 )
        *a4 = 0;
      if ( !v9 )
      {
        memset(FileInformation, 0, sizeof(FileInformation));
        FileInformation[8] = 0x2000;
        v10 = ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
      }
      *a6 = FileHandle;
    }
  }
  RtlFreeAnsiString(&NtFileName);
  return (unsigned int)v10;
}
