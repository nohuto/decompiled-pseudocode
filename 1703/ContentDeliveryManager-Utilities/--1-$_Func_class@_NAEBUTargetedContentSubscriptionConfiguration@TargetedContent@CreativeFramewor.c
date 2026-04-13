/*
 * XREFs of ??1?$_Func_class@_NAEBUTargetedContentSubscriptionConfiguration@TargetedContent@CreativeFramework@@U_Nil@std@@U45@U45@U45@U45@U45@@std@@QEAA@XZ @ 0x18002D560
 * Callers:
 *     _CreativeFramework::TargetedContent::GetSubscriptionBehavior_::_1_::dtor$1 @ 0x1800710A9 (_CreativeFramework--TargetedContent--GetSubscriptionBehavior_--_1_--dtor$1.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateHandlerMap___::_1_::dtor$6 @ 0x180072BA4 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicateHandlerMap__.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateHandlerMap___::_1_::dtor$9 @ 0x180072BBC (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicat_ea_180072BBC.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateHandlerMap___::_1_::dtor$12 @ 0x180072BD8 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicat_ea_180072BD8.c)
 *     _Windows::Services::TargetedContent::Internal::ResolvePredicateHandler_::_1_::dtor$1 @ 0x180072BE4 (_Windows--Services--TargetedContent--Internal--ResolvePredicateHandler_--_1_--dtor$1.c)
 *     _Windows::Services::TargetedContent::Internal::ResolvePredicateHandler_::_1_::dtor$2 @ 0x180072BF0 (_Windows--Services--TargetedContent--Internal--ResolvePredicateHandler_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<bool,CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::~_Func_class<bool,CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
