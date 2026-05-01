/*
 * XREFs of ?FocusHotkeyInvoked@CActionCenterExperienceManager@@UEAAJXZ @ 0x180010B50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180011714 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z @ 0x18001D028 (-NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Desktop@Shel.c)
 */

__int64 __fastcall CActionCenterExperienceManager::FocusHotkeyInvoked(CActionCenterExperienceManager *this)
{
  int v2; // eax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 80) == 1 )
  {
    v2 = CSingleViewShellExperience::NavigateView((char *)this + 88, 5LL);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19D,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
    v3 = CActionCenterExperienceManager::RaiseApplicationEvent(
           (CActionCenterExperienceManager *)((char *)this - 24),
           L"FocusHotkeyInvoked",
           1);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
  return 0LL;
}
