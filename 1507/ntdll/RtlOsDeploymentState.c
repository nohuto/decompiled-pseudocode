/*
 * XREFs of RtlOsDeploymentState @ 0x1800E5150
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180093A70 (NtQueryValueKey.c)
 */

__int64 RtlOsDeploymentState()
{
  unsigned int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-78h] BYREF
  int v3; // [rsp+50h] [rbp-68h]
  __int64 v4; // [rsp+58h] [rbp-60h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-58h]
  int v6; // [rsp+68h] [rbp-50h]
  __int128 v7; // [rsp+70h] [rbp-48h]
  UNICODE_STRING v8; // [rsp+80h] [rbp-38h] BYREF
  int v9; // [rsp+94h] [rbp-24h]
  int v10; // [rsp+98h] [rbp-20h]
  int v11; // [rsp+9Ch] [rbp-1Ch]

  v0 = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  v3 = 48;
  v4 = 0LL;
  v6 = 576;
  p_DestinationString = &DestinationString;
  v7 = 0LL;
  if ( (int)NtOpenKey() >= 0 )
  {
    RtlInitUnicodeString(&v8, L"Compact");
    if ( (int)NtQueryValueKey() >= 0 && v9 == 4 && v10 == 4 && v11 )
      return 2;
  }
  return v0;
}
