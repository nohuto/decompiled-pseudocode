/*
 * XREFs of sub_140005320 @ 0x140005320
 * Callers:
 *     sub_140005E5C @ 0x140005E5C (sub_140005E5C.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

int sub_140005320()
{
  int result; // eax
  NTSTATUS v1; // ebx
  NTSTATUS v2; // ebx
  _BYTE *v3; // rdx
  __int64 v4; // rcx
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Context; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING LinkTarget; // [rsp+50h] [rbp-B0h] BYREF
  void *SymbolicLinkHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String2; // [rsp+98h] [rbp-68h] BYREF
  struct _UNICODE_STRING v11; // [rsp+A8h] [rbp-58h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+B8h] [rbp-48h] BYREF
  int v13; // [rsp+C8h] [rbp-38h] BYREF
  const wchar_t *v14; // [rsp+D0h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  int v16; // [rsp+E8h] [rbp-18h] BYREF
  const wchar_t *v17; // [rsp+F0h] [rbp-10h]
  ULONG ResultLength; // [rsp+F8h] [rbp-8h] BYREF
  __int16 Buffer; // [rsp+100h] [rbp+0h] BYREF
  _BYTE *i; // [rsp+108h] [rbp+8h]
  UNICODE_STRING String1; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v22[544]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD Data[128]; // [rsp+340h] [rbp+240h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+540h] [rbp+440h] BYREF
  WCHAR SourceString[258]; // [rsp+54Ch] [rbp+44Ch] BYREF

  v13 = 4063292;
  v14 = L"\\Registry\\Machine\\System\\Setup";
  *(_DWORD *)&ValueName.Length = 2097182;
  ValueName.Buffer = L"SystemPartition";
  *(_DWORD *)&String2.Length = 1703960;
  String2.Buffer = L"SymbolicLink";
  Context = 0;
  v17 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Setup";
  v16 = 8650882;
  v11.Buffer = L"BootDir";
  *(_DWORD *)&v11.Length = 1048590;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v1 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x210u, &ResultLength);
    result = NtClose(KeyHandle);
    if ( v1 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      LinkTarget.Buffer = (PWSTR)Data;
      result = NtQueryDirectoryObject(FileHandle, &Buffer, 0x23Au, 1u, 1u, &Context, 0LL);
      if ( result < 0 )
      {
LABEL_19:
        if ( result != -2147483622 )
          return result;
        v3 = v22;
        v4 = 0LL;
        for ( i = v22; ; v3 = i )
        {
          *(_WORD *)&v3[v4] = *(_WORD *)(v4 + 2147352624);
          v4 += 2LL;
          if ( v4 >= 4 )
            break;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
          {
            if ( Buffer == 4 && *((_WORD *)i + 1) == 58 )
            {
              ObjectAttributes.RootDirectory = FileHandle;
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&Buffer;
              ObjectAttributes.Attributes = 64;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( NtOpenSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes) >= 0 )
              {
                *(_DWORD *)&LinkTarget.Length = 0x2000000;
                v2 = NtQuerySymbolicLinkObject(SymbolicLinkHandle, &LinkTarget, 0LL);
                NtClose(SymbolicLinkHandle);
                if ( v2 >= 0
                  && (RtlEqualUnicodeString(&DestinationString, &LinkTarget, 1u)
                   || RtlPrefixUnicodeString(&DestinationString, &LinkTarget, 1u)
                   && LinkTarget.Buffer[(unsigned __int64)DestinationString.Length >> 1] == 92) )
                {
                  break;
                }
              }
            }
          }
          result = NtQueryDirectoryObject(FileHandle, &Buffer, 0x23Au, 1u, 0, &Context, 0LL);
          if ( result < 0 )
            goto LABEL_19;
        }
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      if ( result >= 0 )
      {
        Data[0] = *(_DWORD *)i;
        Data[1] = 92;
        NtSetValueKey(KeyHandle, &v11, 0, 1u, Data, 8u);
        return NtClose(KeyHandle);
      }
    }
  }
  return result;
}
