/*
 * XREFs of ?GetTaskNameForWnfTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@W4TriggerRegistrationOption@1234@@Z @ 0x180046DF8
 * Callers:
 *     ?RegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@W4TriggerRegistrationOption@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800492A4 (-RegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windo.c)
 *     ?UnRegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@W4TriggerRegistrationOption@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004971C (-UnRegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Win.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x18002BE9C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18002EA70 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?GetWnfNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@W4TriggerRegistrationOption@1234@@Z @ 0x180046CD8 (-GetWnfNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Micro.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::GetTaskNameForWnfTrigger(
        _QWORD *a1,
        __int64 a2,
        char a3)
{
  int v5; // eax
  int v6; // eax
  PCWSTR StringRawBuffer; // r14
  PCWSTR v8; // rax
  int v9; // eax
  HSTRING v10; // rdi
  PCWSTR v11; // rax
  int v12; // eax
  _WORD *v13; // rdx
  __int64 v14; // r8
  HSTRING string; // [rsp+48h] [rbp-39h] BYREF
  HSTRING v17; // [rsp+50h] [rbp-31h] BYREF
  HSTRING v18; // [rsp+58h] [rbp-29h] BYREF
  void *Src; // [rsp+60h] [rbp-21h] BYREF
  __int64 v20; // [rsp+68h] [rbp-19h]
  __int64 v21; // [rsp+70h] [rbp-11h]
  int v22; // [rsp+78h] [rbp-9h]
  __int64 v23; // [rsp+80h] [rbp-1h]
  void *v24[2]; // [rsp+88h] [rbp+7h] BYREF
  __int64 v25; // [rsp+98h] [rbp+17h]
  unsigned __int64 v26; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v23 = -2LL;
  v22 = 0;
  Windows::Services::TargetedContent::Internal::GetWnfNameForTrigger(&v18, a2, a3);
  WindowsDeleteString(0LL);
  v17 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL))(a2, &v17);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xAA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 128LL))(a2, &string);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xAC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  if ( WindowsIsStringEmpty(string) )
    StringRawBuffer = (PCWSTR)L"Initial";
  else
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  Src = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( WindowsIsStringEmpty(v17) )
  {
    v8 = WindowsGetStringRawBuffer(v18, 0LL);
    v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
           (__int64)&Src,
           L"%s%s%s",
           v8,
           L"-",
           StringRawBuffer);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xB5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
  }
  else
  {
    v10 = v18;
    WindowsGetStringRawBuffer(v17, 0LL);
    v11 = WindowsGetStringRawBuffer(v10, 0LL);
    v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)&Src,
            L"%s%s%s%s%s",
            v11);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xB9,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
  }
  v13 = Src;
  Src = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v26 = 7LL;
  v25 = 0LL;
  LOWORD(v24[0]) = 0;
  if ( *v13 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
  }
  std::wstring::assign(v24, v13);
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::_Assign_rv(a1, v24);
  if ( v26 >= 8 )
    operator delete(v24[0]);
  v26 = 7LL;
  v25 = 0LL;
  LOWORD(v24[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v17);
  v17 = 0LL;
  WindowsDeleteString(v18);
  return a1;
}
