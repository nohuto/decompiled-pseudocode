/*
 * XREFs of ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180047818
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180047CA0 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800485F4 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x18000255C (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@VCreativeRule@RuleSetHandlers@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x180049F00 (--$make_shared@VCreativeRule@RuleSetHandlers@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA-AV-$shar.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Services::TargetedContent::Internal::CreateCreativeRule(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  PCWSTR StringRawBuffer; // [rsp+28h] [rbp-28h] BYREF
  PCWSTR v9; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  HSTRING v12; // [rsp+78h] [rbp+28h] BYREF
  HSTRING v13; // [rsp+80h] [rbp+30h] BYREF
  HSTRING string; // [rsp+88h] [rbp+38h] BYREF

  v10[1] = -2LL;
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 160LL))(a2, &string);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x10B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( WindowsIsStringEmpty(string) )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x10C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  v13 = 0LL;
  WindowsDeleteString(0LL);
  v13 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 144LL))(a2, &v13);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x10F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  if ( WindowsIsStringEmpty(v13) )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x110,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  v12 = 0LL;
  WindowsDeleteString(0LL);
  v12 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 192LL))(a2, &v12);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x113,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  if ( WindowsIsStringEmpty(v12) )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x114,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  StringRawBuffer = WindowsGetStringRawBuffer(v13, 0LL);
  v9 = WindowsGetStringRawBuffer(v12, 0LL);
  v10[0] = WindowsGetStringRawBuffer(string, 0LL);
  ((void (__fastcall *)(__int64, _QWORD *, PCWSTR *, PCWSTR *, _DWORD))std::make_shared<CreativeFramework::RuleSetHandlers::CreativeRule,wchar_t const *,wchar_t const *,wchar_t const *>)(
    a1,
    v10,
    &v9,
    &StringRawBuffer,
    0);
  WindowsDeleteString(v12);
  v12 = 0LL;
  WindowsDeleteString(v13);
  v13 = 0LL;
  WindowsDeleteString(string);
  return a1;
}
