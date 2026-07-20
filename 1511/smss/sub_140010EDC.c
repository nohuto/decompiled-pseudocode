/*
 * XREFs of sub_140010EDC @ 0x140010EDC
 * Callers:
 *     sub_1400099C4 @ 0x1400099C4 (sub_1400099C4.c)
 * Callees:
 *     sub_140010294 @ 0x140010294 (sub_140010294.c)
 *     sub_140011084 @ 0x140011084 (sub_140011084.c)
 */

__int64 __fastcall sub_140010EDC(UNICODE_STRING *SourceString, _WORD *a2, unsigned int *a3)
{
  bool v3; // cf
  NTSTATUS v8; // edi
  USHORT v9; // cx
  int appended; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+B0h] [rbp+30h] BYREF

  v3 = *a3 < 0x10;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  FileHandle = 0LL;
  if ( !v3 )
    return 3221225623LL;
  ObjectAttributes.ObjectName = SourceString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtOpenFile(&FileHandle, 0x80150100, &ObjectAttributes, &IoStatusBlock, 1u, 0x68u);
  if ( v8 >= 0 )
  {
    v9 = a2 ? *a2 + 20 : SourceString->Length + 10;
    DestinationString.MaximumLength = v9;
    DestinationString.Buffer = (PWSTR)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v9);
    if ( DestinationString.Buffer )
    {
      if ( a2 )
      {
        appended = sub_140010294((__int64)&DestinationString, L"%wZ\\pf%02u.dmp", a2, *a3);
      }
      else
      {
        RtlCopyUnicodeString(&DestinationString, SourceString);
        appended = RtlAppendUnicodeToString(&DestinationString, L".dmp");
      }
      v8 = appended;
      if ( appended >= 0 )
      {
        v8 = sub_140011084(FileHandle);
        if ( v8 >= 0 )
        {
          *(struct _UNICODE_STRING *)&a3[4 * *a3 + 2] = DestinationString;
          a3[1] += DestinationString.Length;
          ++*a3;
        }
      }
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( v8 < 0 )
  {
    if ( DestinationString.Buffer )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
  }
  return (unsigned int)v8;
}
