/*
 * XREFs of ExpValidateLocale @ 0x14066BE6C
 * Callers:
 *     NtSetDefaultLocale @ 0x14050D2C4 (NtSetDefaultLocale.c)
 *     ExpSetCurrentUserUILanguage @ 0x14050D4F4 (ExpSetCurrentUserUILanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     RtlIntegerToUnicodeString @ 0x1403E126C (RtlIntegerToUnicodeString.c)
 */

__int64 __fastcall ExpValidateLocale(ULONG a1)
{
  unsigned int v1; // ebx
  NTSTATUS v3; // edi
  unsigned int v4; // eax
  WCHAR *v5; // rdx
  __int64 v6; // rcx
  WCHAR *v7; // rdi
  __int64 v8; // rdx
  ULONG ResultLength; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE v11; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING String; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING v15; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES v16; // [rsp+88h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES v17; // [rsp+B8h] [rbp-50h] BYREF
  UNICODE_STRING v18; // [rsp+E8h] [rbp-20h] BYREF
  UNICODE_STRING v19; // [rsp+F8h] [rbp-10h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+108h] [rbp+0h] BYREF
  WCHAR SourceString[32]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+178h] [rbp+70h] BYREF
  int v23; // [rsp+17Ch] [rbp+74h]
  unsigned int v24; // [rsp+180h] [rbp+78h]
  WCHAR v25[122]; // [rsp+184h] [rbp+7Ch] BYREF
  char v26; // [rsp+278h] [rbp+170h] BYREF

  v1 = -1073741811;
  if ( a1 == 3072 )
    return 0LL;
  *(_DWORD *)&String.Length = 2097184;
  String.Buffer = (wchar_t *)&v26;
  v3 = RtlIntegerToUnicodeString(a1, 0x10u, &String);
  if ( v3 < 0 )
    return (unsigned int)v3;
  v4 = String.Length >> 1;
  v5 = SourceString;
  if ( v4 < 8 )
  {
    v6 = 8 - v4;
    v7 = SourceString;
    v8 = (unsigned int)v6;
    while ( v6 )
    {
      *v7++ = 48;
      --v6;
    }
    v5 = &SourceString[v8];
  }
  *v5 = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  DestinationString.MaximumLength = 32;
  RtlAppendUnicodeToString(&DestinationString, String.Buffer);
  RtlInitUnicodeString(&v19, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Locale");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v19;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
  if ( v3 < 0 )
    return (unsigned int)v3;
  RtlInitUnicodeString(&v15, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Locale\\Alternate Sorts");
  v16.Length = 48;
  v16.ObjectName = &v15;
  v16.RootDirectory = 0LL;
  v16.Attributes = 576;
  *(_OWORD *)&v16.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&v11, 0x80000000, &v16);
  if ( v3 >= 0 )
  {
    RtlInitUnicodeString(&v18, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Language Groups");
    v17.Length = 48;
    v17.ObjectName = &v18;
    v17.RootDirectory = 0LL;
    v17.Attributes = 576;
    *(_OWORD *)&v17.SecurityDescriptor = 0LL;
    v3 = ZwOpenKey(&Handle, 0x80000000, &v17);
    if ( v3 >= 0 )
    {
      v3 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x100u,
             &ResultLength);
      if ( v3 >= 0
        || (v3 = ZwQueryValueKey(
                   v11,
                   &DestinationString,
                   KeyValuePartialInformation,
                   KeyValueInformation,
                   0x100u,
                   &ResultLength),
            v3 >= 0) )
      {
        if ( v24 > 2 )
        {
          RtlInitUnicodeString(&DestinationString, v25);
          v3 = ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength);
          if ( v3 >= 0 && v23 == 1 && v24 > 2 && v25[0] == 49 )
            v1 = v25[1] != 0 ? 0xC000000D : 0;
        }
      }
      ZwClose(Handle);
    }
    ZwClose(v11);
  }
  ZwClose(KeyHandle);
  if ( v3 < 0 )
    return (unsigned int)v3;
  return v1;
}
