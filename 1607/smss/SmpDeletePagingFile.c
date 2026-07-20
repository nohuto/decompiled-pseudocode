/*
 * XREFs of SmpDeletePagingFile @ 0x14000FFFC
 * Callers:
 *     SmpCreatePagefileOnVolume @ 0x140009564 (SmpCreatePagefileOnVolume.c)
 *     SmpCleanupStalePageFiles @ 0x140009C8C (SmpCleanupStalePageFiles.c)
 *     SmpSaveOldPageFiles @ 0x14000A108 (SmpSaveOldPageFiles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpDeletePagingFile(struct _UNICODE_STRING *a1)
{
  NTSTATUS v1; // ebx
  __int64 v2; // rax
  signed __int32 v3; // edx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  char FileInformation; // [rsp+80h] [rbp+10h] BYREF
  void *FileHandle; // [rsp+88h] [rbp+18h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = NtOpenFile(&FileHandle, 0x10000u, &ObjectAttributes, &IoStatusBlock, 7u, 0x40u);
  if ( v1 >= 0 )
  {
    FileInformation = 1;
    v1 = NtSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 1u, FileDispositionInformation);
    v3 = _InterlockedIncrement(&SmpPagefileLogIndex) % 32;
    if ( v1 < 0 )
      *((_DWORD *)&SmpPagefileLog + 4 * v3) = 3927;
    else
      *((_DWORD *)&SmpPagefileLog + 4 * v3) = 3919;
    *((_QWORD *)&SmpPagefileLog + 2 * v3 + 1) = 0LL;
    *((_DWORD *)&SmpPagefileLog + 4 * v3 + 1) = v1;
    NtClose(FileHandle);
  }
  else
  {
    v2 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_QWORD *)&SmpPagefileLog + v2 + 1) = 0LL;
    *((_DWORD *)&SmpPagefileLog + 2 * v2) = 3900;
    *((_DWORD *)&SmpPagefileLog + 2 * v2 + 1) = v1;
  }
  return (unsigned int)v1;
}
