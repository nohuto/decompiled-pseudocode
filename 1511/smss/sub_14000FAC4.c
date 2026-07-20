/*
 * XREFs of sub_14000FAC4 @ 0x14000FAC4
 * Callers:
 *     sub_140008F84 @ 0x140008F84 (sub_140008F84.c)
 *     sub_140009540 @ 0x140009540 (sub_140009540.c)
 *     sub_1400099C4 @ 0x1400099C4 (sub_1400099C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000FAC4(struct _UNICODE_STRING *a1)
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
    v3 = _InterlockedIncrement(&dword_140020420) % 32;
    if ( v1 < 0 )
      *((_DWORD *)&unk_140020220 + 4 * v3) = 3789;
    else
      *((_DWORD *)&unk_140020220 + 4 * v3) = 3781;
    *((_QWORD *)&unk_140020220 + 2 * v3 + 1) = 0LL;
    *((_DWORD *)&unk_140020220 + 4 * v3 + 1) = v1;
    NtClose(FileHandle);
  }
  else
  {
    v2 = 2LL * (_InterlockedIncrement(&dword_140020420) % 32);
    *((_QWORD *)&unk_140020220 + v2 + 1) = 0LL;
    *((_DWORD *)&unk_140020220 + 2 * v2) = 3762;
    *((_DWORD *)&unk_140020220 + 2 * v2 + 1) = v1;
  }
  return (unsigned int)v1;
}
