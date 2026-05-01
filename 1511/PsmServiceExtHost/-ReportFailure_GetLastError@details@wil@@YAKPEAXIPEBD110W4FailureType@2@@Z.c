/*
 * XREFs of ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x180052C74
 * Callers:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180053A80 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x1800509DC (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180052B48 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastError(
        wil::details *a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        char *a6)
{
  signed int LastErrorFail; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  const char *v11; // [rsp+20h] [rbp-38h]

  LastErrorFail = wil::details::GetLastErrorFail(
                    a1,
                    (void *)0x64A,
                    (__int64)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
                    a4,
                    v11,
                    a6);
  v8 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v9 = (unsigned __int16)LastErrorFail | 0x80070000;
  else
    v9 = LastErrorFail;
  wil::details::ReportFailure(
    (__int64)a1,
    1610LL,
    (__int64)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
    0LL,
    0LL,
    (__int64)a6,
    4,
    v9);
  return v8;
}
