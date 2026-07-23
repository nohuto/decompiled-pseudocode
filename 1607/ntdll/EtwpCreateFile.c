/*
 * XREFs of EtwpCreateFile @ 0x180054F38
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180054904 (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x1800117F0 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ZwSetInformationFile @ 0x1800A6900 (ZwSetInformationFile.c)
 *     ZwCreateFile @ 0x1800A6EC0 (ZwCreateFile.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall EtwpCreateFile(PCWSTR SourceString, __int64 a2, __int64 a3, _BYTE *a4, int a5, HANDLE *a6)
{
  ULONG CreateDisposition; // r15d
  bool v9; // di
  NTSTATUS v10; // ebx
  HANDLE FileHandle; // [rsp+60h] [rbp-79h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-71h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+78h] [rbp-61h] BYREF
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
    v9 = SourceString[(DestinationString.Length >> 1) - 1] == 92;
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
