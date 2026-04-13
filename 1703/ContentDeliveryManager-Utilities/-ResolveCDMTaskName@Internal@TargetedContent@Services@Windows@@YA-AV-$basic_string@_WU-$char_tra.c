/*
 * XREFs of ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x1800468CC
 * Callers:
 *     ?RegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@W4TriggerRegistrationOption@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800492A4 (-RegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windo.c)
 *     ?UnRegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@W4TriggerRegistrationOption@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004971C (-UnRegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Win.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x18002BE9C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18002EA70 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::ResolveCDMTaskName(_QWORD *a1, __int64 a2)
{
  int v3; // eax
  _WORD *v4; // rdx
  __int64 v5; // r8
  void *Src; // [rsp+20h] [rbp-50h] BYREF
  __int64 v8; // [rsp+28h] [rbp-48h]
  __int64 v9; // [rsp+30h] [rbp-40h]
  int v10; // [rsp+38h] [rbp-38h]
  __int64 v11; // [rsp+40h] [rbp-30h]
  void *v12[3]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v11 = -2LL;
  v10 = 0;
  Src = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)&Src,
         L"ContentDeliveryManager.Background.%s.CustomEventListenerTask",
         a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = Src;
  Src = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  v13 = 7LL;
  v12[2] = 0LL;
  LOWORD(v12[0]) = 0;
  if ( *v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v4[v5] );
  }
  std::wstring::assign(v12, v4);
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::_Assign_rv(a1, v12);
  if ( v13 >= 8 )
    operator delete(v12[0]);
  return a1;
}
