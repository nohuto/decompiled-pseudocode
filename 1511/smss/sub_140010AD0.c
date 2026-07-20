/*
 * XREFs of sub_140010AD0 @ 0x140010AD0
 * Callers:
 *     sub_14000F878 @ 0x14000F878 (sub_14000F878.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

__int64 sub_140010AD0()
{
  __int64 v0; // rbx
  struct _UNICODE_STRING v2; // [rsp+30h] [rbp-38h] BYREF
  ULONG v3; // [rsp+40h] [rbp-28h] BYREF
  _DWORD v4[2]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  *(_DWORD *)&v2.Length = 2228256;
  v2.Buffer = L"PagefileTooSmall";
  v0 = 0LL;
  if ( NtQueryValueKey(Handle, &v2, KeyValuePartialInformationAlign64, v4, 0x10u, &v3) >= 0 && v4[0] == 11 && v4[1] == 8 )
    return v5;
  return v0;
}
