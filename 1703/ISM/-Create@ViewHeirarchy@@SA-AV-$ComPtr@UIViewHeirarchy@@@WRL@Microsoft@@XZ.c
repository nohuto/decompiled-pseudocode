/*
 * XREFs of ?Create@ViewHeirarchy@@SA?AV?$ComPtr@UIViewHeirarchy@@@WRL@Microsoft@@XZ @ 0x18006D108
 * Callers:
 *     ?GetServerWindowForViewId@ViewHelper@@SAJKPEAPEAUIServerWindow@Server@Navigation@@@Z @ 0x18002B5E0 (-GetServerWindowForViewId@ViewHelper@@SAJKPEAPEAUIServerWindow@Server@Navigation@@@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KI@Z @ 0x18002B84C (-GetWindowIdFromViewId@ViewHelper@@SA_KI@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKI@Z @ 0x18002B984 (-GetProcessIdFromViewId@ViewHelper@@SAKI@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKI@Z @ 0x18002BAC0 (-GetThreadIdFromViewId@ViewHelper@@SAKI@Z.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4FrameworkViewType@@IPEA_N@Z @ 0x18002BBF8 (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4FrameworkViewType@@IPEA_N@Z.c)
 *     _lambda_2a3b4304752dce9f4c34d9f910fd6e17_::_lambda_invoker_cdecl_ @ 0x18004D750 (_lambda_2a3b4304752dce9f4c34d9f910fd6e17_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VViewHeirarchy@@UIViewHeirarchy@@W4TestMode@1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewHeirarchy@@@WRL@Microsoft@@@012@$$QEAW4TestMode@ViewHeirarchy@@@Z @ 0x18006E888 (--$MakeAndInitialize@VViewHeirarchy@@UIViewHeirarchy@@W4TestMode@1@@Details@WRL@Microsoft@@YAJV-.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall ViewHeirarchy::Create(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = ViewHeirarchy::s_instance;
  if ( !ViewHeirarchy::s_instance )
  {
    v6 = 0;
    v3 = Microsoft::WRL::Details::MakeAndInitialize<ViewHeirarchy,IViewHeirarchy,enum ViewHeirarchy::TestMode>(
           &ViewHeirarchy::s_instance,
           &v6);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x1E,
        (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
        (const char *)(unsigned int)v3);
      JUMPOUT(0x18006D179LL);
    }
    v2 = ViewHeirarchy::s_instance;
  }
  *a1 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a1;
}
