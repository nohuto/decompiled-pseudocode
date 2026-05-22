/*
 * XREFs of ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_WW4ReportFailureOptions@12@@Z @ 0x1800655B0
 * Callers:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x180065050 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_W_NPEA_W_KPEAD6PEAUFailureInfo@2@@Z @ 0x180065344 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_W_NPEA_W_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18009EA70 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ReportFailure(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8)
{
  char v8; // bl
  __int64 v9; // [rsp+20h] [rbp-1508h]
  __int64 v10; // [rsp+40h] [rbp-14E8h]
  __int64 v11; // [rsp+58h] [rbp-14D0h]
  __int64 v12; // [rsp+68h] [rbp-14C0h]
  _BYTE v13[144]; // [rsp+80h] [rbp-14A8h] BYREF
  char v14[1024]; // [rsp+110h] [rbp-1418h] BYREF
  _BYTE v15[4096]; // [rsp+510h] [rbp-1018h] BYREF

  v8 = !a7 && g_pfnThrowPlatformException;
  wil::details::LogFailure(a1, a2, a3, a6, v9, a6, a7, a8, v10, v8, (wil *)v15, v11, v14, v12, (unsigned __int64)v13);
  if ( a7 == 3 )
LABEL_11:
    __fastfail(7u);
  if ( !a7 )
  {
    if ( v8 )
      ((void (__fastcall *)(_BYTE *, _BYTE *))g_pfnThrowPlatformException)(v13, v15);
    if ( wil::details::g_pfnThrowResultException )
      wil::details::g_pfnThrowResultException((const struct wil::FailureInfo *)v13);
    goto LABEL_11;
  }
}
