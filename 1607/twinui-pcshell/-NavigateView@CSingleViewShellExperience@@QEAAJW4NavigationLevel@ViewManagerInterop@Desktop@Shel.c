/*
 * XREFs of ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z @ 0x18001D028
 * Callers:
 *     ?FocusHotkeyInvoked@CActionCenterExperienceManager@@UEAAJXZ @ 0x180010B50 (-FocusHotkeyInvoked@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180010CC0 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180011150 (-OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x18001CE88 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@W4NavigationLevel@45678@@Z @ 0x180024E30 (-Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManage.c)
 */

__int64 __fastcall CSingleViewShellExperience::NavigateView(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 32);
  if ( !v3 )
    return 0LL;
  v4 = ShellExperienceHelpers::NavigationLevelOverrideHelper::Navigate(a1 + 80, v3, v2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x29D,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
