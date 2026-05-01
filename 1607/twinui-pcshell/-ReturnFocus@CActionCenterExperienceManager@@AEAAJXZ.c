/*
 * XREFs of ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x180011BC0
 * Callers:
 *     ?InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x180011C4C (-InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180012AD0 (-OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z @ 0x1800270A0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::ReturnFocus(
        ExperienceManagerUtils **this,
        struct Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapper *a2)
{
  HWND v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::WindowFromViewWrapper(this[18], a2);
  if ( !this[18] )
    return 0LL;
  if ( !this[68] )
    return 0LL;
  if ( GetForegroundWindow() != v3 )
    return 0LL;
  v4 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, __int64))(*(_QWORD *)this[68] + 24LL))(this[68], 0xFFFFLL);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30C,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
