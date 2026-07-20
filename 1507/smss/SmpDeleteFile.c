/*
 * XREFs of SmpDeleteFile @ 0x140011F4C
 * Callers:
 *     SmpGetDumpDestination @ 0x14001090C (SmpGetDumpDestination.c)
 * Callees:
 *     SmpSetTargetAttributes @ 0x140012C88 (SmpSetTargetAttributes.c)
 */

__int64 __fastcall SmpDeleteFile(struct _UNICODE_STRING *a1)
{
  NTSTATUS v1; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK v4; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char FileInformation; // [rsp+90h] [rbp+10h] BYREF
  void *FileHandle; // [rsp+98h] [rbp+18h] BYREF

  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 64;
  v1 = NtOpenFile(&FileHandle, 0x10100u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4040u);
  if ( v1 >= 0 )
  {
    v1 = SmpSetTargetAttributes(FileHandle);
    if ( v1 >= 0 )
    {
      FileInformation = 1;
      v1 = NtSetInformationFile(FileHandle, &v4, &FileInformation, 1u, FileDispositionInformation);
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  return (unsigned int)v1;
}
