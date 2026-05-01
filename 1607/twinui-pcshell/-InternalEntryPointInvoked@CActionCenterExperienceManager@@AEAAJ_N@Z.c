/*
 * XREFs of ?InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x180011C4C
 * Callers:
 *     ?EntryPointInvoked@CActionCenterExperienceManager@@UEAAJXZ @ 0x180010A20 (-EntryPointInvoked@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180010B10 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18000D4E0 (-ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800119D8 (-Launch@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180011B44 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x180011BC0 (-ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180012040 (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18001E86C (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 */

__int64 __fastcall CActionCenterExperienceManager::InternalEntryPointInvoked(CActionCenterExperienceManager *this)
{
  int v2; // eax
  int v3; // eax
  struct Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapper *v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v8; // eax
  HRESULT v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  HSTRING string; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)SHWindowsPolicy(&POLID_DisableNotificationCenter) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToPolicy();
    return 2147943660LL;
  }
  else
  {
    v2 = *((_DWORD *)this + 86);
    if ( !v2 )
    {
      v3 = CActionCenterExperienceManager::TransitionToState(this, 2LL);
      v5 = v3;
      if ( v3 < 0 )
      {
        v6 = 801LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
        return v5;
      }
      v8 = CActionCenterExperienceManager::ReturnFocus((ExperienceManagerUtils **)this, v4);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x322,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
      return 0LL;
    }
    if ( (unsigned int)(v2 - 2) > 1 )
    {
      v3 = CActionCenterExperienceManager::Hide(this);
      v5 = v3;
      if ( v3 < 0 )
      {
        v6 = 813LL;
        goto LABEL_5;
      }
    }
    string = 0LL;
    v9 = WindowsCreateStringReference(
           L"Windows.Internal.ShellExperience.ActionCenter fullscreen",
           0x38u,
           &hstringHeader,
           &string);
    if ( v9 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
      JUMPOUT(0x180011D99LL);
    }
    v3 = CSingleViewShellExperience::SetArgs((HSTRING *)this + 14, string);
    v5 = v3;
    if ( v3 < 0 )
    {
      v6 = 818LL;
      goto LABEL_5;
    }
    v10 = CActionCenterExperienceManager::Launch(this);
    v11 = v10;
    if ( v10 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x333,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
}
