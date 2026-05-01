/*
 * XREFs of ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180011714
 * Callers:
 *     ?FocusHotkeyInvoked@CActionCenterExperienceManager@@UEAAJXZ @ 0x180010B50 (-FocusHotkeyInvoked@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180010CC0 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800139A0 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180013A80 (-OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001134 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18000CEAC (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18000D2AC (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000FB70 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180014390 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800147B0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@AEAPEBGAEA_N@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@AEAPEBGAEA_N@Z @ 0x180014D44 (--$Start@AEAPEBGAEA_N@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationC.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180014E14 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014EC4 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@7@2@Z @ 0x18002718C (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Desktop@Sh.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CActionCenterExperienceManager::RaiseApplicationEvent(
        CActionCenterExperienceManager *this,
        const unsigned __int16 *a2,
        char a3)
{
  HRESULT v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  HSTRING v12; // rcx
  const struct _TlgProvider_t *v13; // rax
  HSTRING v14; // rcx
  const struct _TlgProvider_t *v15; // rax
  struct Windows::Foundation::Collections::IPropertySet *v17; // [rsp+38h] [rbp-D0h]
  struct Windows::Foundation::Collections::IPropertySet *v18; // [rsp+40h] [rbp-C8h]
  HSTRING v19; // [rsp+50h] [rbp-B8h] BYREF
  const unsigned __int16 *v20; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v22[6]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-60h]
  HSTRING_HEADER hstringHeader; // [rsp+1B8h] [rbp+B0h] BYREF
  HSTRING string; // [rsp+1D0h] [rbp+C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v21[1] = -2LL;
  v20 = a2;
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::Start<unsigned short const * &,bool &>((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)v22);
  if ( !*((_QWORD *)this + 18) )
  {
    v15 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v15 > 5u )
      TlgWrite(v15, &unk_1800426BB, (LPCGUID)(v23 + 8), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&hstringHeader);
    goto LABEL_24;
  }
  v19 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         string,
         &v19);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v21[0] = v19;
    if ( v19 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v19 + 8LL))(v19);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v20);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)v21,
           *(HSTRING *)(v8 + 24),
           a3);
    v7 = v9;
    if ( v9 < 0 )
    {
      v10 = 727LL;
      goto LABEL_12;
    }
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v20);
    v9 = ExperienceManagerUtils::RaiseReactivatedEvent(
           *((ExperienceManagerUtils **)this + 18),
           (struct Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 66),
           *((_QWORD *)this + 15),
           *((HSTRING *)this + 16),
           *(HSTRING *)(v11 + 24),
           v19,
           v17,
           v18);
    v7 = v9;
    if ( v9 < 0 )
    {
      v10 = 728LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      if ( v21[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21[0] + 16LL))(v21[0]);
      goto LABEL_14;
    }
    v13 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v13 > 5u )
      TlgWrite(v13, &unk_1800426E5, (LPCGUID)(v23 + 8), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&hstringHeader);
    if ( v21[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21[0] + 16LL))(v21[0]);
    v14 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v14 + 16LL))(v14);
    }
LABEL_24:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v22);
    v7 = 0;
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D4,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_14:
  v12 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v12 + 16LL))(v12);
  }
LABEL_25:
  v22[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v22);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v22);
  return v7;
}
