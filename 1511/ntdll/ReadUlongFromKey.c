/*
 * XREFs of ReadUlongFromKey @ 0x180073BF8
 * Callers:
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180073990 (RtlpGetDeviceFamilyInfoEnum.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A53A0 (NtQueryValueKey.c)
 */

__int64 __fastcall ReadUlongFromKey(__int64 a1, const WCHAR *a2, _DWORD *a3)
{
  __int64 result; // rax
  _BYTE v6[8]; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v8[4]; // [rsp+48h] [rbp-30h] BYREF
  int v9; // [rsp+4Ch] [rbp-2Ch]
  int v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+54h] [rbp-24h]

  *a3 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  result = NtQueryValueKey(a1, &DestinationString, 2LL, v8, 20, v6);
  if ( (int)result >= 0 )
  {
    if ( v9 == 4 && v10 == 4 )
    {
      *a3 = v11;
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
