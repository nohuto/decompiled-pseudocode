/*
 * XREFs of ?ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z @ 0x1800534BC
 * Callers:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x1800535B0 (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800014F8 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x1800015C0 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001648 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x1800185A0 (-ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4Support.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800597E0 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtExceptionMsg(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char *a9)
{
  __int64 v12; // r9
  __int64 v14; // [rsp+20h] [rbp-2068h]
  __int64 v15; // [rsp+40h] [rbp-2048h]
  char v16; // [rsp+48h] [rbp-2040h]
  wchar_t Buffer[2048]; // [rsp+50h] [rbp-2038h] BYREF
  wchar_t v18[2048]; // [rsp+1050h] [rbp-1038h] BYREF

  if ( a8 )
  {
    StringCchPrintfW(v18, 2048LL, L"%hs");
    StringCchVPrintfW(Buffer, 2048LL, v18, a9);
  }
  else
  {
    Buffer[0] = 0;
  }
  StringCchCatW(Buffer, 2048LL, (char *)L" -- ");
  return wil::details::ReportFailure_CaughtExceptionCommon(a1, a2, a3, v12, v14, a6, 2, Buffer, v15, v16);
}
