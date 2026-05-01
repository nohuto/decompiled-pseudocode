/*
 * XREFs of ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180008A28
 * Callers:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180008B4C (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18001D408 (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x18001E604 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x18001EFDC (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x1800080AC (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ??0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x18000891C (--0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     __security_check_cookie @ 0x180025B30 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1800269DC (_CxxThrowException_0.c)
 *     _alloca_probe @ 0x180027330 (_alloca_probe.c)
 */

void __fastcall wil::details::ReportFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        _WORD *a9)
{
  char v9; // bl
  __int64 v10; // [rsp+58h] [rbp-1580h]
  __int64 v11; // [rsp+68h] [rbp-1570h]
  _BYTE v12[144]; // [rsp+80h] [rbp-1558h] BYREF
  _BYTE pExceptionObject[160]; // [rsp+110h] [rbp-14C8h] BYREF
  char v14[1024]; // [rsp+1B0h] [rbp-1428h] BYREF
  WCHAR v15[2048]; // [rsp+5B0h] [rbp-1028h] BYREF

  v9 = !a7 && wil::details::g_pfnThrowPlatformException;
  wil::details::LogFailure(a1, a2, a3, a4, a5, a6, a7, a8, a9, v9, v15, v10, v14, v11, (struct wil::FailureInfo *)v12);
  if ( a7 == 4 )
    __fastfail(7u);
  if ( !a7 )
  {
    if ( v9 )
      wil::details::g_pfnThrowPlatformException((const struct wil::FailureInfo *)v12, v15);
    wil::ResultException::ResultException(
      (wil::ResultException *)pExceptionObject,
      (const struct wil::FailureInfo *)v12);
    throw (wil::ResultException *)pExceptionObject;
  }
}
