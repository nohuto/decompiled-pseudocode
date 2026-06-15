/*
 * XREFs of ?AtlConvertSystemTimeToVariantTime@ATL@@YAHAEBU_SYSTEMTIME@@PEAN@Z @ 0x180071C54
 * Callers:
 *     ??4COleDateTime@ATL@@QEAAAEAV01@AEBU_FILETIME@@@Z @ 0x180071884 (--4COleDateTime@ATL@@QEAAAEAV01@AEBU_FILETIME@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::AtlConvertSystemTimeToVariantTime(struct _SYSTEMTIME *a1, double *a2)
{
  unsigned int v2; // edi
  struct _SYSTEMTIME SystemTime; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  *(_QWORD *)&SystemTime.wYear = 0LL;
  *(_QWORD *)&SystemTime.wHour = 0LL;
  if ( SystemTimeToVariantTime(a1, a2)
    && VariantTimeToSystemTime(*a2, &SystemTime)
    && a1->wYear == SystemTime.wYear
    && a1->wMonth == SystemTime.wMonth
    && a1->wDay == SystemTime.wDay
    && a1->wHour == SystemTime.wHour
    && a1->wMinute == SystemTime.wMinute )
  {
    return a1->wSecond == SystemTime.wSecond;
  }
  return v2;
}
