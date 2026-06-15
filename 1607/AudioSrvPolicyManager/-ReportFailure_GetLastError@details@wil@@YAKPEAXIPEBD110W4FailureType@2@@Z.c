/*
 * XREFs of ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x1800025A0
 * Callers:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002770 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180002454 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x18000255C (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastError(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  signed int LastError; // ebx
  unsigned int v9; // ecx

  LastError = GetLastError();
  if ( !LastError )
  {
    wil::details::ReportFailure_Hr(a1, a2, (__int64)"internal\\sdk\\inc\\wil\\Resource.h", 0LL, 0LL, a6, 2, 0x8007029C);
    LastError = 668;
  }
  v9 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v9 = LastError;
  wil::details::ReportFailure(a1, a2, (__int64)"internal\\sdk\\inc\\wil\\Resource.h", 0LL, 0LL, a6, 3, v9);
  return (unsigned int)LastError;
}
