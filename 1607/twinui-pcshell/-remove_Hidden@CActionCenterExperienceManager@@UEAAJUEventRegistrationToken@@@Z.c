/*
 * XREFs of ?remove_Hidden@CActionCenterExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180012000
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180013D3C (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@I.c)
 */

__int64 __fastcall CActionCenterExperienceManager::remove_Hidden(
        CActionCenterExperienceManager *this,
        struct EventRegistrationToken a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ActionCenterExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
         (char *)this + 560,
         a2.value);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
