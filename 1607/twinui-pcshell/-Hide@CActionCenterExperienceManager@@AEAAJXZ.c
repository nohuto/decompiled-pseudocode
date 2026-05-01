/*
 * XREFs of ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180011B44
 * Callers:
 *     ?InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x180011C4C (-InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180012040 (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180012AD0 (-OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeAll@PEAVCActionCenterExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCActionCenterExperienceManager@@$$T@Z @ 0x180014FE4 (--$InvokeAll@PEAVCActionCenterExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVAct.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18001E63C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::Hide(CActionCenterExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CSingleViewShellExperience::Hide((char *)this + 112);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ActionCenterExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CActionCenterExperienceManager *,std::nullptr_t>(
           (char *)this + 584,
           this);
    v6 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x302,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x301,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
