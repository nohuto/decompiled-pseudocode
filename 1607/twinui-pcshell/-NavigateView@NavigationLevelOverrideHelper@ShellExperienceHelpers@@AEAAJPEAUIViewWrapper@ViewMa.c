/*
 * XREFs of ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@W4NavigationLevel@45678@@Z @ 0x180026EDC
 * Callers:
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@AEAAJH@Z @ 0x18001C008 (-OnSessionIdleStateChanged@CSingleViewShellExperience@@AEAAJH@Z.c)
 *     ?Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@W4NavigationLevel@45678@@Z @ 0x180024E30 (-Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManage.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z @ 0x1800270A0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(
        __int64 a1,
        ExperienceManagerUtils *a2,
        unsigned int a3)
{
  int v5; // ebx
  int v6; // eax
  struct Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapper *v7; // rdx
  unsigned int v8; // edi
  __int64 result; // rax
  HWND v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = a3;
  v6 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, _QWORD))(*(_QWORD *)a2 + 120LL))(a2, a3);
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( !v5 )
    {
      v10 = ExperienceManagerUtils::WindowFromViewWrapper(a2, v7);
      PostMessageW(v10, 0x10u, 0LL, 0LL);
    }
    if ( v5 == 5 )
      v5 = 4;
    result = 0LL;
    *(_DWORD *)(a1 + 4) = v5;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
      (const char *)(unsigned int)v6);
    return v8;
  }
  return result;
}
