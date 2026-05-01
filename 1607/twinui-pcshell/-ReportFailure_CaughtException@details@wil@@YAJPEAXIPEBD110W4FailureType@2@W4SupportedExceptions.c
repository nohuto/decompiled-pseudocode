/*
 * XREFs of ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x180009134
 * Callers:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180009198 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x180009030 (-ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4Support.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800303B0 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // [rsp+20h] [rbp-1048h]
  char v8; // [rsp+30h] [rbp-1038h]
  _WORD v9[2048]; // [rsp+50h] [rbp-1018h] BYREF

  v9[0] = 0;
  return wil::details::ReportFailure_CaughtExceptionCommon(a1, a2, a3, (__int64)v9, v7, a6, v8, v9);
}
