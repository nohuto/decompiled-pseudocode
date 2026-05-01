/*
 * XREFs of ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180052B48
 * Callers:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x180052C74 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x180052D00 (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180052D8C (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180052DDC (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x180052E54 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     _CxxThrowException_0 @ 0x18002BBCC (_CxxThrowException_0.c)
 *     _alloca_probe @ 0x18002BCC0 (_alloca_probe.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180051C0C (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x1800533D4 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::details::ReportFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8)
{
  char v8; // bl
  __int64 v9; // [rsp+58h] [rbp-1580h]
  __int64 v10; // [rsp+68h] [rbp-1570h]
  _BYTE pExceptionObject[144]; // [rsp+80h] [rbp-1558h] BYREF
  __int64 v12; // [rsp+110h] [rbp-14C8h]
  __int64 v13; // [rsp+118h] [rbp-14C0h]
  _BYTE v14[144]; // [rsp+120h] [rbp-14B8h] BYREF
  char v15[1024]; // [rsp+1B0h] [rbp-1428h] BYREF
  WCHAR v16[2048]; // [rsp+5B0h] [rbp-1028h] BYREF

  v8 = !a7 && wil::details::g_pfnThrowPlatformException;
  wil::details::LogFailure(a1, a2, a3, a4, a5, a6, a7, a8, 0LL, v8, v16, v9, v15, v10, (struct wil::FailureInfo *)v14);
  if ( a7 == 4 )
    __fastfail(7u);
  if ( !a7 )
  {
    if ( v8 )
      wil::details::g_pfnThrowPlatformException((const struct wil::FailureInfo *)v14, v16);
    v12 = 0LL;
    v13 = 0LL;
    wil::StoredFailureInfo::SetFailureInfo(
      (wil::StoredFailureInfo *)pExceptionObject,
      (const struct wil::FailureInfo *)v14);
    throw (wil::ResultException *)pExceptionObject;
  }
}
