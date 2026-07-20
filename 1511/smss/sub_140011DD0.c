/*
 * XREFs of sub_140011DD0 @ 0x140011DD0
 * Callers:
 *     sub_140006D94 @ 0x140006D94 (sub_140006D94.c)
 *     sub_1400117BC @ 0x1400117BC (sub_1400117BC.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     memset @ 0x14000C48C (memset.c)
 *     sub_1400123D0 @ 0x1400123D0 (sub_1400123D0.c)
 *     sub_14001277C @ 0x14001277C (sub_14001277C.c)
 */

__int64 __fastcall sub_140011DD0(struct _UNICODE_STRING *a1)
{
  int v2; // edi
  NTSTATUS v3; // ebx
  HANDLE v4; // rcx
  char FileInformation[8]; // [rsp+30h] [rbp-29h] BYREF
  HANDLE FileHandle; // [rsp+38h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+17h] BYREF
  _FILE_BASIC_INFORMATION v10; // [rsp+80h] [rbp+27h] BYREF

  FileHandle = 0LL;
  v2 = 0;
  memset(&v10, 0, sizeof(v10));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = sub_1400123D0(&FileHandle, 1114368LL, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    FileInformation[0] = 1;
    v3 = NtSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
    if ( v3 < 0 && NtQueryAttributesFile(&ObjectAttributes, &v10) >= 0 && (v10.FileAttributes & 1) != 0 )
    {
      v3 = sub_14001277C(FileHandle);
      if ( v3 >= 0 )
      {
        v2 = 1;
        FileInformation[0] = 1;
        v3 = NtSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
        if ( v3 >= 0 )
        {
          v2 = 0;
          v3 = 0;
        }
      }
    }
  }
  v4 = FileHandle;
  if ( FileHandle )
  {
    if ( v2 )
    {
      sub_14001277C(FileHandle);
      v4 = FileHandle;
    }
    NtClose(v4);
  }
  return (unsigned int)v3;
}
