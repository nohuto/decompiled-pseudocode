/*
 * XREFs of ResCReloadCultureMap @ 0x180105A60
 * Callers:
 *     ResCRuntimeGetCultureID @ 0x1800FF388 (ResCRuntimeGetCultureID.c)
 *     ResCRuntimeViewLoadCultureMap @ 0x1800FF784 (ResCRuntimeViewLoadCultureMap.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _ResGetFileAttributesEx @ 0x180104888 (_ResGetFileAttributesEx.c)
 *     ResCFreeCultureMap @ 0x180105828 (ResCFreeCultureMap.c)
 *     ResCLoadCultureMap @ 0x1801059BC (ResCLoadCultureMap.c)
 */

_QWORD *__fastcall ResCReloadCultureMap(_QWORD *BaseAddress, __int64 a2)
{
  const WCHAR *v4; // rcx
  __int64 v5; // rdi
  _BYTE v6[20]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v7; // [rsp+3Ch] [rbp-2Ch]
  int v8; // [rsp+48h] [rbp-20h]

  if ( !BaseAddress )
  {
    RtlSetLastWin32Error(87);
    return BaseAddress;
  }
  v4 = (const WCHAR *)BaseAddress[5];
  if ( !v4
    || !(unsigned int)ResGetFileAttributesEx(v4, a2, (__int64)v6)
    || *((_DWORD *)BaseAddress + 12) == v8 && BaseAddress[7] == v7 )
  {
    return BaseAddress;
  }
  v5 = ResCLoadCultureMap((WCHAR *)BaseAddress[5]);
  if ( !v5 )
    return BaseAddress;
  ResCFreeCultureMap(BaseAddress);
  return (_QWORD *)v5;
}
