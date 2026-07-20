/*
 * XREFs of sub_14000982C @ 0x14000982C
 * Callers:
 *     sub_1400092A8 @ 0x1400092A8 (sub_1400092A8.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     __chkstk @ 0x14000C474 (__chkstk.c)
 *     sub_140010720 @ 0x140010720 (sub_140010720.c)
 *     sub_1400107DC @ 0x1400107DC (sub_1400107DC.c)
 *     sub_140011084 @ 0x140011084 (sub_140011084.c)
 *     sub_14001144C @ 0x14001144C (sub_14001144C.c)
 */

bool __fastcall sub_14000982C(struct _UNICODE_STRING *a1)
{
  int v1; // edi
  bool v2; // bl
  void *FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  __int64 Data; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+88h] [rbp-78h] BYREF
  int v10; // [rsp+98h] [rbp-68h] BYREF
  const wchar_t *v11; // [rsp+A0h] [rbp-60h]
  struct _UNICODE_STRING v12; // [rsp+A8h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD Buffer[1000]; // [rsp+100h] [rbp+0h] BYREF
  char v16; // [rsp+1150h] [rbp+1050h]

  ObjectAttributes.ObjectName = a1;
  v11 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\MachineCrash";
  v12.Buffer = L"TempDestination";
  v10 = 10092696;
  ValueName.Buffer = L"DumpFile";
  v1 = (int)a1;
  *(_DWORD *)&v12.Length = 2097182;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  Data = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&ValueName.Length = 1179664;
  v2 = 0;
  FileHandle = (void *)-1LL;
  KeyHandle = (void *)-1LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenFile(&FileHandle, 0xC0150000, &ObjectAttributes, &IoStatusBlock, 3u, 0x68u) < 0 )
  {
    v2 = 0;
  }
  else
  {
    if ( NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x2000u, 0LL, 0LL) >= 0
      && Buffer[0] == 1162297680
      && Buffer[1] == 875976004 )
    {
      if ( (v16 & 4) != 0 )
        sub_14001144C();
      if ( (int)sub_140010720(&UnicodeString) >= 0
        && (int)sub_1400107DC((int)Buffer, (int)&UnicodeString, (int)FileHandle, v1, &DestinationString) >= 0 )
      {
        v2 = (int)sub_140011084(FileHandle) >= 0;
      }
    }
    NtClose(FileHandle);
    FileHandle = (void *)-1LL;
    if ( v2 )
    {
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v10;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 64;
      if ( NtCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL) >= 0 )
      {
        NtSetValueKey(KeyHandle, &ValueName, 0, 1u, DestinationString.Buffer + 4, DestinationString.Length - 6);
        NtSetValueKey(KeyHandle, &v12, 0, 4u, (char *)&Data + 4, 4u);
        NtClose(KeyHandle);
        KeyHandle = (void *)-1LL;
      }
    }
  }
  if ( UnicodeString.Length )
    RtlFreeUnicodeString(&UnicodeString);
  return v2;
}
