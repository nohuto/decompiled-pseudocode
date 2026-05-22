/*
 * XREFs of ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@K@Z @ 0x180054F3C
 * Callers:
 *     ??$Make@VSpectrumListener@@QEAVMPCRawInputProvider@@AEAK@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSpectrumListener@@@12@$$QEBQEAVMPCRawInputProvider@@AEAK@Z @ 0x180054A18 (--$Make@VSpectrumListener@@QEAVMPCRawInputProvider@@AEAK@Details@WRL@Microsoft@@YA-AV-$ComPtr@VS.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18004391C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivHandEventArgs@23456@@Foundation@Windows@@VSpectrumListener@@PEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivHandEventArgs@67893@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivHandEventArgs@23456@@Foundation@Windows@@@01@PEAVSpectrumListener@@P83@EAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivHandEventArgs@56789@@Z@Z @ 0x1800558E0 (--$Callback@U-$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivHandE.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivVoiceEventArgs@23456@@Foundation@Windows@@VSpectrumListener@@PEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@67893@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivVoiceEventArgs@23456@@Foundation@Windows@@@01@PEAVSpectrumListener@@P83@EAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@56789@@Z@Z @ 0x180055960 (--$Callback@U-$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivVoice.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x180056428 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationToken@@@Z @ 0x1800565A0 (-AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationTo.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
SpectrumListener *__fastcall SpectrumListener::SpectrumListener(
        SpectrumListener *this,
        struct MPCRawInputProvider *a2,
        int a3,
        const char *a4)
{
  __int64 *v7; // rbx
  HRESULT v8; // eax
  HSTRING v9; // rdi
  __int64 v10; // rcx
  int v11; // edi
  MPCHeadUpdateListener *Instance; // rax
  int v13; // eax
  __int64 v14; // rdi
  _QWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int128 v23; // [rsp+28h] [rbp-59h] BYREF
  __int128 v24; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v25[4]; // [rsp+48h] [rbp-39h] BYREF
  __int128 v26; // [rsp+68h] [rbp-19h] BYREF
  __int128 v27; // [rsp+78h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+7h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v25[1] = -2LL;
  v25[2] = this;
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SpectrumListener::`vftable';
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 6) = a3;
  v7 = (__int64 *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      a4);
    __debugbreak();
  }
  string = 0LL;
  v8 = WindowsCreateStringReference(L"Windows.UI.Input.Spatial.Internal.InputPriv", 0x2Bu, &hstringHeader, &string);
  if ( v8 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
  v9 = string;
  v10 = *v7;
  if ( *v7 )
  {
    *v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *v7 = 0LL;
  v11 = RoActivateInstance(v9, &v23);
  if ( v11 >= 0 )
  {
    if ( *(_QWORD *)&GUID_fb443535_ff9a_45e9_89fc_ae5955449664.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_fb443535_ff9a_45e9_89fc_ae5955449664.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *v7 = v23;
    }
    else
    {
      v11 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))v23)(
              v23,
              &GUID_fb443535_ff9a_45e9_89fc_ae5955449664,
              (char *)this + 32);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  Instance = MPCHeadUpdateListener::GetInstance();
  v13 = MPCHeadUpdateListener::AddHeadEventOccurred(Instance, this, (struct EventRegistrationToken *)this + 6);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  *(_QWORD *)&v23 = SpectrumListener::OnHandEventOccurred;
  DWORD2(v23) = 0;
  v26 = v23;
  v14 = *v7;
  v15 = (_QWORD *)Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivHandEventArgs *>,SpectrumListener,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivHandEventArgs *>(
                    &v24,
                    this,
                    &v26);
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v14 + 48LL))(v14, *v15, (char *)this + 40);
  if ( v16 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v16);
  v17 = v24;
  if ( (_QWORD)v24 )
  {
    *(_QWORD *)&v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  *(_QWORD *)&v24 = SpectrumListener::OnPhraseDetected;
  DWORD2(v24) = 0;
  v27 = v24;
  v18 = *v7;
  v19 = (_QWORD *)Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,SpectrumListener,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>(
                    v25,
                    this,
                    &v27);
  v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v18 + 64LL))(v18, *v19, (char *)this + 56);
  if ( v20 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v20);
  v21 = v25[0];
  if ( v25[0] )
  {
    v25[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return this;
}
