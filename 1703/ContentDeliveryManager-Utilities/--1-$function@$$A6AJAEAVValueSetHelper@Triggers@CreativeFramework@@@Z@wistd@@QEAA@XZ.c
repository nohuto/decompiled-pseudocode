/*
 * XREFs of ??1?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@QEAA@XZ @ 0x1800117D0
 * Callers:
 *     _wil::details_abi::RecordWnfUsageIndex_::_1_::dtor$2 @ 0x1800705E7 (_wil--details_abi--RecordWnfUsageIndex_--_1_--dtor$2.c)
 *     _ContentManagement::ContentManagementService::SendAppServiceMessage_::_1_::dtor$0 @ 0x1800713BE (_ContentManagement--ContentManagementService--SendAppServiceMessage_--_1_--dtor$0.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180071E0B (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RuntimeClassInitialize_-.c)
 *     _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::AddRule_::_1_::dtor$10 @ 0x180073389 (_CreativeFramework--RuleSetHandlers--DiagTrackRuleSetHandler--AddRule_--_1_--dtor$10.c)
 *     _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule_::_1_::dtor$9 @ 0x180073449 (_CreativeFramework--RuleSetHandlers--DiagTrackRuleSetHandler--RemoveRule_--_1_--dtor$9.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<long (CreativeFramework::Triggers::ValueSetHelper &)>::~function<long (CreativeFramework::Triggers::ValueSetHelper &)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, a2);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, a2);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  return result;
}
