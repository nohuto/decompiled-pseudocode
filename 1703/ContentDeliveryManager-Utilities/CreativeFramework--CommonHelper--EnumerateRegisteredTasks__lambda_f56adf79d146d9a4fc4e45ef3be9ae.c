/*
 * XREFs of CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_f56adf79d146d9a4fc4e45ef3be9ae80___ @ 0x180068AEC
 * Callers:
 *     ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180067AF8 (-UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V-$shared_ptr@VCorrelationVect.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003C90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WAEAY0CH@_WPEBD@Z @ 0x1800689C4 (--$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 *     ??$query@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@?$com_ptr_t@U?$IMapView@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800690C4 (--$query@U-$IIterable@PEAU-$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Background@App.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_f56adf79d146d9a4fc4e45ef3be9ae80___(
        __int64 a1)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  int v4; // eax
  __int64 *v5; // rax
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rsi
  int v13; // eax
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v15; // rax
  int v16; // eax
  __int64 result; // rax
  __int64 v18; // [rsp+38h] [rbp-89h] BYREF
  HSTRING v19; // [rsp+40h] [rbp-81h] BYREF
  __int64 v20; // [rsp+48h] [rbp-79h] BYREF
  __int64 v21; // [rsp+50h] [rbp-71h] BYREF
  __int64 v22; // [rsp+58h] [rbp-69h] BYREF
  __int64 v23; // [rsp+60h] [rbp-61h] BYREF
  __int64 v24; // [rsp+68h] [rbp-59h] BYREF
  __int64 v25; // [rsp+70h] [rbp-51h]
  const WCHAR *v26[2]; // [rsp+78h] [rbp-49h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-39h] BYREF
  HSTRING string; // [rsp+A0h] [rbp-21h] BYREF
  OLECHAR sz[40]; // [rsp+A8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v26[1] = (const WCHAR *)-2LL;
  v22 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Background.BackgroundTaskRegistration",
         0x3Eu,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
  v22 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_4c542f69_b000_42ba_a093_6a563c65e3f8, &v22);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
  v24 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 48LL))(v22, &v24);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v25 = 0LL;
  v5 = (__int64 *)wil::com_ptr_t<Windows::Foundation::Collections::IMapView<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *>,wil::err_exception_policy>::query<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *> *>>(
                    &v24,
                    &v21);
  v6 = *v5;
  *v5 = 0LL;
  v25 = v6;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v20 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, &v20);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  LOBYTE(v18) = 1;
  while ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 56LL))(v20, &v18) >= 0 && (_BYTE)v18 )
  {
    v21 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 48LL))(v20, &v21);
    v9 = retaddr;
    if ( v8 < 0 )
      goto LABEL_32;
    v23 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 56LL))(v21, &v23);
    v11 = retaddr;
    if ( v10 < 0 )
      goto LABEL_31;
    v12 = v23;
    v19 = 0LL;
    WindowsDeleteString(0LL);
    v19 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v12 + 56LL))(v12, &v19);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x50,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v13);
LABEL_31:
      wil::details::in1diag3::_Throw_Hr(
        v11,
        (void *)0x32,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v10);
LABEL_32:
      wil::details::in1diag3::_Throw_Hr(
        v9,
        (void *)0x2F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v8);
      break;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v19, 0LL);
    v15 = WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
    if ( CompareStringOrdinal(v15, -1, StringRawBuffer, -1, 1) == 2 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, HSTRING_HEADER *))(*(_QWORD *)v12 + 48LL))(v12, &hstringHeader);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x54,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 96LL))(v12, 0LL);
      memset_0(sz, 0, 0x4EuLL);
      StringFromGUID2((const GUID *const)&hstringHeader, sz, 39);
      v26[0] = WindowsGetStringRawBuffer(v19, 0LL);
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TaskUnregistered<wchar_t const *,wchar_t (&)[39]>(
        v26,
        sz,
        (const unsigned __int16 *)(**(_QWORD **)(a1 + 8) + 8LL));
      WindowsDeleteString(v19);
LABEL_25:
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      break;
    }
    WindowsDeleteString(v19);
    if ( (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 64LL))(v20, &v18) == -2147483637 )
      goto LABEL_25;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v24 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v22 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return result;
}
