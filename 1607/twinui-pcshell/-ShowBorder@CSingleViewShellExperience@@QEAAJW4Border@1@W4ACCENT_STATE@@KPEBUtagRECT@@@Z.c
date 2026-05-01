/*
 * XREFs of ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18001CF4C
 * Callers:
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180013760 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180013A80 (-OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18001862C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z @ 0x1800270A0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 */

__int64 __fastcall CSingleViewShellExperience::ShowBorder(
        __int64 a1,
        struct Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapper *a2,
        unsigned int a3)
{
  ExperienceManagerUtils *v3; // rcx
  char v5; // bl
  HWND v6; // rax
  int v7; // ecx
  const char *v8; // r9
  int v10; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v11; // [rsp+28h] [rbp-28h]
  int v12; // [rsp+30h] [rbp-20h]
  _QWORD v13[2]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v3 = *(ExperienceManagerUtils **)(a1 + 32);
  v5 = (char)a2;
  if ( v3 )
  {
    v6 = ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
    v7 = 1024;
    v13[1] = 0LL;
    v13[0] = a3;
    if ( (v5 & 1) != 0 )
      v7 = 1056;
    HIDWORD(v13[0]) = v7;
    if ( (v5 & 2) != 0 )
    {
      v7 |= 0x40u;
      HIDWORD(v13[0]) = v7;
    }
    if ( (v5 & 4) != 0 )
    {
      v7 |= 0x80u;
      HIDWORD(v13[0]) = v7;
    }
    if ( (v5 & 8) != 0 )
      HIDWORD(v13[0]) = v7 | 0x100;
    v10 = 19;
    v11 = v13;
    v12 = 16;
    if ( !(unsigned int)SetWindowCompositionAttribute(v6, &v10) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x290,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        v8);
  }
  return 0LL;
}
