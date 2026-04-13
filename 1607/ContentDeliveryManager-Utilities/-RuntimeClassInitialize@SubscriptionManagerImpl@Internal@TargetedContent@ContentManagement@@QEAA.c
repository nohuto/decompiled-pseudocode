/*
 * XREFs of ?RuntimeClassInitialize@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAAJXZ @ 0x180034BD4
 * Callers:
 *     ??$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubscriptionManager@234@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@@Z @ 0x180038A44 (--$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubs.c)
 * Callees:
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800388A8 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RuntimeClassInitialize(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this,
        __int64 a2)
{
  char *v3; // rax
  const char *v4; // r9
  char *v5; // rdi
  char *v6; // rbx
  __int64 v7; // r14
  void (__fastcall ***v8)(_QWORD, __int64); // rsi
  DWORD LastError; // r15d
  _QWORD *v10; // rdx
  _QWORD v12[2]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v13[12]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD *v14; // [rsp+90h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v12[1] = -2LL;
  try
  {
    v13[0] = &wistd::_Func_impl<wistd::_Callable_obj<_lambda_65e132131f351cb9064538b793e0e588_,0>,wistd::details::function_allocator<wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
    v13[1] = this;
    v14 = v13;
    v3 = (char *)wil::make_wnf_subscription<wil::details::empty_wnf_state>(v12, a2, v13);
    v5 = v3;
    v6 = (char *)this + 64;
    if ( v6 != v3 )
    {
      v7 = *(_QWORD *)v3;
      v8 = *(void (__fastcall ****)(_QWORD, __int64))v6;
      if ( *(_QWORD *)v6 )
      {
        LastError = GetLastError();
        (**v8)(v8, 1LL);
        SetLastError(LastError);
      }
      *(_QWORD *)v6 = v7;
      *(_QWORD *)v5 = 0LL;
    }
    if ( v12[0] )
      (**(void (__fastcall ***)(_QWORD, __int64))v12[0])(v12[0], 1LL);
    if ( v14 )
    {
      v10 = v13;
      LOBYTE(v10) = v14 != v13;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v14 + 24LL))(v14, v10);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3B,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
                           v4);
  }
  return 0LL;
}
