/*
 * XREFs of ??1?$function@$$A6A_NAEBUTargetedContentSubscriptionConfiguration@TargetedContent@CreativeFramework@@@Z@std@@QEAA@XZ @ 0x18002AC60
 * Callers:
 *     _CreativeFramework::TargetedContent::GetSubscriptionBehavior_::_1_::dtor$0 @ 0x1800710B5 (_CreativeFramework--TargetedContent--GetSubscriptionBehavior_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterWnfTrigger_::_1_::dtor$4 @ 0x180072C38 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_180072C38.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::function<bool (CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &)>::~function<bool (CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
