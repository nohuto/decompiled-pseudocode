/*
 * XREFs of FastUpdateWinIni @ 0x1C00B40B0
 * Callers:
 *     <none>
 * Callees:
 *     FastWriteProfileStringW @ 0x1C00540B0 (FastWriteProfileStringW.c)
 *     RtlLoadStringOrError @ 0x1C0055EE0 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall FastUpdateWinIni(const UNICODE_STRING *a1, unsigned int a2, ULONG a3, _WORD *a4)
{
  WCHAR v8[40]; // [rsp+20h] [rbp-78h] BYREF

  RtlLoadStringOrError(a3, v8, 40, 0);
  return FastWriteProfileStringW(a1, a2, v8, a4);
}
