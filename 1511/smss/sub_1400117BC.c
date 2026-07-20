/*
 * XREFs of sub_1400117BC @ 0x1400117BC
 * Callers:
 *     sub_140006D94 @ 0x140006D94 (sub_140006D94.c)
 * Callees:
 *     sub_140004C0C @ 0x140004C0C (sub_140004C0C.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     sub_140011DD0 @ 0x140011DD0 (sub_140011DD0.c)
 */

char sub_1400117BC()
{
  char *Heap; // rbx
  NTSTATUS i; // eax
  _DWORD *v2; // rdi
  char result; // al
  void *FileHandle; // [rsp+68h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  struct _UNICODE_STRING v7; // [rsp+90h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  WCHAR SourceString[264]; // [rsp+D8h] [rbp-30h] BYREF

  FileHandle = 0LL;
  Heap = 0LL;
  ObjectAttributes.ObjectName = &::DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x4021u) >= 0 )
  {
    Heap = (char *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, 0x8A8uLL);
    if ( Heap )
    {
      RtlInitUnicodeString(&DestinationString, L"SMSS-PFRO*.tmp");
      for ( i = NtQueryDirectoryFile(
                  FileHandle,
                  0LL,
                  0LL,
                  0LL,
                  &IoStatusBlock,
                  Heap,
                  0x8A8u,
                  FileNamesInformation,
                  0,
                  &DestinationString,
                  1u);
            i >= 0;
            i = NtQueryDirectoryFile(
                  FileHandle,
                  0LL,
                  0LL,
                  0LL,
                  &IoStatusBlock,
                  Heap,
                  0x8A8u,
                  FileNamesInformation,
                  0,
                  &DestinationString,
                  0) )
      {
        v2 = Heap;
        if ( Heap < Heap + 2216 )
        {
          do
          {
            if ( (int)sub_140004C0C(SourceString, 0x20AuLL, L"%s\\%s", ::DestinationString.Buffer, v2 + 3) >= 0 )
            {
              RtlInitUnicodeString(&v7, SourceString);
              sub_140011DD0(&v7);
            }
            if ( !*v2 )
              break;
            v2 = (_DWORD *)((char *)v2 + (unsigned int)*v2);
          }
          while ( v2 < (_DWORD *)Heap + 554 );
        }
      }
    }
  }
  result = RtlDeleteRegistryValue(2u, L"Session Manager", L"ClearTempFiles");
  if ( Heap )
    result = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
  if ( FileHandle )
    return NtClose(FileHandle);
  return result;
}
