/*
 * XREFs of RtlpGetNtProductTypeFromRegistry @ 0x1800EF810
 * Callers:
 *     RtlGetNtProductType @ 0x18002CD40 (RtlGetNtProductType.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18001A1D0 (RtlEqualUnicodeString.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 */

__int64 __fastcall RtlpGetNtProductTypeFromRegistry(_DWORD *a1)
{
  int ValueKey; // ebx
  unsigned __int16 v4[4]; // [rsp+40h] [rbp-71h] BYREF
  char *v5; // [rsp+48h] [rbp-69h]
  int v6; // [rsp+58h] [rbp-59h] BYREF
  const wchar_t *v7; // [rsp+60h] [rbp-51h]
  int v8; // [rsp+68h] [rbp-49h]
  const wchar_t *v9; // [rsp+70h] [rbp-41h]
  int v10; // [rsp+78h] [rbp-39h] BYREF
  const wchar_t *v11; // [rsp+80h] [rbp-31h]
  int v12; // [rsp+88h] [rbp-29h] BYREF
  const wchar_t *v13; // [rsp+90h] [rbp-21h]
  int v14; // [rsp+98h] [rbp-19h] BYREF
  const wchar_t *v15; // [rsp+A0h] [rbp-11h]
  int v16; // [rsp+A8h] [rbp-9h]
  __int64 v17; // [rsp+B0h] [rbp-1h]
  int *v18; // [rsp+B8h] [rbp+7h]
  int v19; // [rsp+C0h] [rbp+Fh]
  __int128 v20; // [rsp+C8h] [rbp+17h]
  int v21; // [rsp+DCh] [rbp+2Bh]
  unsigned int v22; // [rsp+E0h] [rbp+2Fh]
  char v23; // [rsp+E4h] [rbp+33h] BYREF

  v17 = 0LL;
  v7 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions";
  v6 = 8650882;
  v9 = L"ProductType";
  v8 = 1572886;
  v13 = L"LanmanNt";
  v12 = 1179664;
  v15 = L"ServerNt";
  v14 = 1179664;
  v11 = L"WinNt";
  v18 = &v6;
  v10 = 786442;
  v16 = 48;
  v19 = 576;
  v20 = 0LL;
  ValueKey = NtOpenKey();
  if ( ValueKey >= 0 )
  {
    ValueKey = NtQueryValueKey();
    if ( ValueKey >= 0 )
    {
      if ( v21 == 1 && v22 >= 2 )
      {
        v4[1] = v22;
        v5 = &v23;
        v4[0] = v22 - 2;
        if ( RtlEqualUnicodeString(v4, (unsigned __int16 *)&v10, 1) )
        {
          *a1 = 1;
          return (unsigned int)ValueKey;
        }
        if ( RtlEqualUnicodeString(v4, (unsigned __int16 *)&v12, 1) )
        {
          *a1 = 2;
          return (unsigned int)ValueKey;
        }
        if ( RtlEqualUnicodeString(v4, (unsigned __int16 *)&v14, 1) )
        {
          *a1 = 3;
          return (unsigned int)ValueKey;
        }
      }
      return (unsigned int)-1073739509;
    }
  }
  return (unsigned int)ValueKey;
}
