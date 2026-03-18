/*
 * XREFs of SepSecureBootSetRegistryKey @ 0x1407DD218
 * Callers:
 *     SeSecureBootRegisterPolicy @ 0x1407DD14C (SeSecureBootRegisterPolicy.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlStringFromGUID @ 0x140557AF4 (RtlStringFromGUID.c)
 */

__int64 __fastcall SepSecureBootSetRegistryKey(__int64 a1)
{
  NTSTATUS v2; // ebx
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int Data; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+38h] BYREF

  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  UnicodeString.Length = 0;
  if ( (dword_140356BA4 & 8) == 0 && !a1 )
  {
    v2 = 0;
    goto LABEL_4;
  }
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"z|";
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v2 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v2 >= 0 )
  {
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1402AD088;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = ZwCreateKey(&Handle, 0x20006u, &ObjectAttributes, 0, 0LL, 1u, 0LL);
    if ( v2 >= 0 )
    {
      if ( (dword_140356BA4 & 8) != 0 )
      {
        Data = dword_140356BA4 & 1;
        v2 = ZwSetValueKey(Handle, (PUNICODE_STRING)&stru_1402AD058, 0, 4u, &Data, 4u);
        if ( v2 < 0 )
          goto LABEL_4;
        if ( Data )
          _interlockedbittestandset((volatile signed __int32 *)0xFFFFF780000002F0LL, 7u);
      }
      if ( a1 )
      {
        v2 = RtlStringFromGUID((const GUID *const)(a1 + 4), &UnicodeString);
        if ( v2 >= 0 )
        {
          v2 = ZwSetValueKey(
                 Handle,
                 (PUNICODE_STRING)&stru_1402AD068,
                 0,
                 1u,
                 UnicodeString.Buffer,
                 UnicodeString.Length + 2);
          if ( v2 >= 0 )
            v2 = ZwSetValueKey(Handle, (PUNICODE_STRING)&stru_1402AD038, 0, 4u, (PVOID)(a1 + 20), 4u);
        }
      }
    }
  }
LABEL_4:
  RtlFreeAnsiString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
