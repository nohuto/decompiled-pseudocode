/*
 * XREFs of sub_140001FB0 @ 0x140001FB0
 * Callers:
 *     sub_140001E9C @ 0x140001E9C (sub_140001E9C.c)
 *     sub_140007D9C @ 0x140007D9C (sub_140007D9C.c)
 *     sub_1400095B4 @ 0x1400095B4 (sub_1400095B4.c)
 * Callees:
 *     sub_140002310 @ 0x140002310 (sub_140002310.c)
 *     sub_14000247C @ 0x14000247C (sub_14000247C.c)
 *     sub_140002864 @ 0x140002864 (sub_140002864.c)
 *     sub_140004C0C @ 0x140004C0C (sub_140004C0C.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140001FB0(
        __int128 *a1,
        _DWORD *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        struct _UNICODE_STRING *DestinationString)
{
  ULONG v7; // r14d
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax
  UNICODE_STRING String1; // [rsp+30h] [rbp-D0h] BYREF
  PWSTR PartName; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  const wchar_t *v18; // [rsp+60h] [rbp-A0h]
  __int128 v19; // [rsp+68h] [rbp-98h] BYREF
  WCHAR DosPathName[264]; // [rsp+80h] [rbp-80h] BYREF

  v18 = L"Path";
  v17 = 655368;
  PartName = 0LL;
  v7 = 0;
  RtlInitUnicodeString(a3, 0LL);
  RtlInitUnicodeString(DestinationString, 0LL);
  v19 = *a1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = sub_140002310(&v19, 0LL, &String1);
        if ( v10 < 0 || !String1.Buffer )
          return 3221225473LL;
        if ( !a2 )
        {
          v10 = sub_140004C0C(DosPathName);
          goto LABEL_18;
        }
        if ( !RtlEqualUnicodeString(&String1, &String2, 1u) )
          break;
        *a2 |= 1u;
        RtlFreeUnicodeString(&String1);
      }
      if ( !RtlEqualUnicodeString(&String1, &stru_140014B48, 1u) )
        break;
      *a2 |= 2u;
      RtlFreeUnicodeString(&String1);
    }
    if ( !RtlEqualUnicodeString(&String1, &stru_140014B38, 1u) )
      break;
    if ( !byte_1400208E1 )
      return 3221225485LL;
    if ( byte_1400208E0 )
      *a2 |= 4u;
    RtlFreeUnicodeString(&String1);
  }
  if ( (*a2 & 0x400) != 0 )
  {
    *a3 = String1;
    goto LABEL_23;
  }
  if ( (*a2 & 8) != 0 )
  {
    result = sub_14000247C(&String1);
    v10 = result;
    if ( (int)result < 0 )
      return result;
  }
  if ( RtlCompareUnicodeString(&::String1, &String1, 0) && RtlCompareUnicodeString(&SubKey, &String1, 0) )
  {
    RtlInitUnicodeString(&v16, 0LL);
    v10 = sub_140002864(v12, &v17, &v16);
    if ( v10 >= 0 )
      v7 = RtlDosSearchPath_U(v16.Buffer, String1.Buffer, L".exe", 0x208u, DosPathName, &PartName);
    if ( v16.Buffer )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v16.Buffer);
  }
  if ( v10 < 0
    || v7
    || RtlDosSearchPath_U(stru_1400208A0.Buffer, String1.Buffer, L".exe", 0x208u, DosPathName, &PartName) )
  {
LABEL_18:
    RtlFreeUnicodeString(&String1);
    if ( v10 >= 0 )
    {
      if ( RtlDosPathNameToNtPathName_U(DosPathName, a3, 0LL, 0LL) )
      {
        if ( a4 )
        {
          if ( PartName > DosPathName )
          {
            *--PartName = 0;
            if ( RtlCreateUnicodeString(a4, DosPathName) == 1 )
              goto LABEL_23;
            v10 = -1073741823;
          }
          RtlInitUnicodeString(a4, 0LL);
        }
        if ( v10 < 0 )
        {
LABEL_51:
          RtlFreeUnicodeString(a3);
          if ( a4 )
            RtlFreeUnicodeString(a4);
          return (unsigned int)v10;
        }
LABEL_23:
        LOBYTE(v11) = 1;
        v10 = sub_140002310(&v19, v11, DestinationString);
        if ( v10 >= 0 )
        {
          if ( a2 && (*(_BYTE *)a2 & 8) != 0 && DestinationString->Length )
            v10 = sub_14000247C(DestinationString);
          if ( v10 >= 0 )
            return (unsigned int)v10;
        }
        goto LABEL_51;
      }
      return (unsigned int)-1073741767;
    }
    return (unsigned int)v10;
  }
  *a2 |= 0x10u;
  *a3 = String1;
  if ( a4 )
    RtlInitUnicodeString(a4, 0LL);
  return 0LL;
}
