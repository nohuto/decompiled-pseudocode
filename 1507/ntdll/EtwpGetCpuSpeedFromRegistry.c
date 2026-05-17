/*
 * XREFs of EtwpGetCpuSpeedFromRegistry @ 0x18000CAAC
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x18000C5FC (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeed @ 0x18000CAA0 (EtwpGetCpuSpeed.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180093A70 (NtQueryValueKey.c)
 */

__int64 __fastcall EtwpGetCpuSpeedFromRegistry(_DWORD *a1)
{
  __int64 result; // rax
  int v3; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v5[8]; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  int v7; // [rsp+50h] [rbp-9h] BYREF
  __int64 v8; // [rsp+58h] [rbp-1h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp+7h]
  int v10; // [rsp+68h] [rbp+Fh]
  __int128 v11; // [rsp+70h] [rbp+17h]
  UNICODE_STRING v12; // [rsp+80h] [rbp+27h] BYREF
  _BYTE v13[12]; // [rsp+90h] [rbp+37h] BYREF
  int v14; // [rsp+9Ch] [rbp+43h]

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0");
  v8 = 0LL;
  p_DestinationString = &DestinationString;
  v7 = 48;
  v10 = 64;
  v11 = 0LL;
  result = NtOpenKey(&Handle, 131097LL, &v7);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&v12, L"~MHz");
    v3 = NtQueryValueKey(Handle, &v12, 2LL, v13, 16, v5);
    if ( v3 >= 0 )
      *a1 = v14;
    NtClose(Handle);
    return (unsigned int)v3;
  }
  return result;
}
