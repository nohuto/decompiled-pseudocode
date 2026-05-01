/*
 * XREFs of ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180012760
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z @ 0x18001EC20 (-SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z @ 0x1800270A0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnViewCreated(
        CActionCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  HWND v13; // rax
  int v14[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_QWORD *)this + 6) && *((_DWORD *)this + 50) != 1 )
  {
    *((_DWORD *)this + 50) = 1;
    v4 = CSingleViewShellExperience::SetImportanceValues((char *)this + 16, 1LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1166LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v4);
      goto LABEL_9;
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 96LL))(*((_QWORD *)this + 6), 1LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1167LL;
      goto LABEL_5;
    }
  }
  v5 = 0;
LABEL_9:
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x485,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
  {
    *(_QWORD *)v14 = 0x100000001LL;
    v15 = 0x100000001LL;
    v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 32LL))(v7, v14);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = (unsigned int)v8;
      v11 = 1162LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)v10);
      return v9;
    }
  }
  v13 = ExperienceManagerUtils::WindowFromViewWrapper(
          a2[4],
          (struct Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapper *)a2);
  if ( v13 && !SetPropW(v13, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    v9 = -2147467259;
    v11 = 1175LL;
    v10 = 2147500037LL;
    goto LABEL_14;
  }
  return 0LL;
}
