/*
 * XREFs of SmpForceDeleteTargetFile @ 0x140012510
 * Callers:
 *     SmpProcessFileRenames @ 0x140007624 (SmpProcessFileRenames.c)
 *     SmpClearTemporaryFiles @ 0x140011EFC (SmpClearTemporaryFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 *     memset_0 @ 0x14000CC60 (memset_0.c)
 *     SmpOpenTargetFile @ 0x140012B40 (SmpOpenTargetFile.c)
 *     SmpPathCanBeTrustedIsNotARedirection @ 0x140012BD8 (SmpPathCanBeTrustedIsNotARedirection.c)
 *     SmpSetTargetAttributes @ 0x140013190 (SmpSetTargetAttributes.c)
 */

__int64 __fastcall SmpForceDeleteTargetFile(struct _UNICODE_STRING *a1, char a2)
{
  int v4; // edi
  NTSTATUS v5; // ebx
  HANDLE v6; // rcx
  char FileInformation[8]; // [rsp+30h] [rbp-39h] BYREF
  HANDLE FileHandle; // [rsp+38h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+7h] BYREF
  _FILE_BASIC_INFORMATION v12; // [rsp+80h] [rbp+17h] BYREF

  FileHandle = 0LL;
  v4 = 0;
  memset_0(&v12, 0, sizeof(v12));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = SmpOpenTargetFile(&FileHandle, 3u);
  if ( v5 >= 0 )
  {
    if ( a2 != 1 || (unsigned __int8)SmpPathCanBeTrustedIsNotARedirection(FileHandle) )
    {
      FileInformation[0] = 1;
      v5 = NtSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
      if ( v5 < 0 && NtQueryAttributesFile(&ObjectAttributes, &v12) >= 0 && (v12.FileAttributes & 1) != 0 )
      {
        v5 = SmpSetTargetAttributes(FileHandle);
        if ( v5 >= 0 )
        {
          v4 = 1;
          FileInformation[0] = 1;
          v5 = NtSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
          if ( v5 >= 0 )
          {
            v4 = 0;
            v5 = 0;
          }
        }
      }
    }
    else
    {
      v5 = -1073740533;
    }
  }
  v6 = FileHandle;
  if ( FileHandle )
  {
    if ( v4 )
    {
      SmpSetTargetAttributes(FileHandle);
      v6 = FileHandle;
    }
    NtClose(v6);
  }
  return (unsigned int)v5;
}
