/*
 * XREFs of sub_14000297C @ 0x14000297C
 * Callers:
 *     sub_140001914 @ 0x140001914 (sub_140001914.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

__int64 sub_14000297C()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx
  NTSTATUS v2; // eax
  int v4; // eax
  void *KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  int v6; // [rsp+38h] [rbp-21h] BYREF
  const wchar_t *v7; // [rsp+40h] [rbp-19h]
  struct _UNICODE_STRING ValueName; // [rsp+48h] [rbp-11h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+37h] BYREF
  int v12; // [rsp+94h] [rbp+3Bh]
  int v13; // [rsp+9Ch] [rbp+43h]

  ObjectAttributes.RootDirectory = 0LL;
  KeyHandle = 0LL;
  v7 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP";
  v6 = 7209068;
  ValueName.Buffer = L"BootOptions";
  *(_DWORD *)&ValueName.Length = 1572886;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v1 = v0;
  if ( v0 < 0 )
  {
    qword_14001FD00 = (__int64)NtOpenKey;
    dword_14001FCF8 = 1406;
    dword_14001FCFC = v0;
  }
  else
  {
    v2 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
    v1 = v2;
    if ( v2 >= 0 )
    {
      v4 = dword_14001F590;
      if ( v12 == 4 )
        v4 = v13;
      dword_14001F590 = v4;
    }
    else
    {
      dword_14001FCFC = v2;
      qword_14001FD00 = (__int64)NtQueryValueKey;
      dword_14001FCF8 = 1424;
    }
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v1;
}
