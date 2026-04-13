/*
 * XREFs of ??1?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@V?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@@2@@std@@QEAA@XZ @ 0x1800362B0
 * Callers:
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x180035A94 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x1800374AC (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 *     _CreativeFramework::Health::details::GenericOffersHealthTracker_11_1_::GetOrCreateBaseEventForPlacementId_::_1_::dtor$4 @ 0x180071AA9 (_CreativeFramework--Health--details--GenericOffersHealthTracker_11_1_--GetOrCreateB_ea_180071AA9.c)
 *     _CreativeFramework::Health::details::GenericOffersHealthTracker_3_1_::GetOrCreateBaseEventForPlacementId_::_1_::dtor$4 @ 0x180071BDC (_CreativeFramework--Health--details--GenericOffersHealthTracker_3_1_--GetOrCreateBa_ea_180071BDC.c)
 *     _std::unordered_map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::shared_ptr_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue__std::hash_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::equal_to_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue_______::operator[]_::_1_::dtor$1 @ 0x180072108 (_std--unordered_map_std--basic_string_unsigned_short_std--char_traits_unsigned_shor_ea_180072108.c)
 *     _CreativeFramework::CommonHelper::SettingsContainer::ResolveContainers_::_1_::dtor$4 @ 0x180075010 (_CreativeFramework--CommonHelper--SettingsContainer--ResolveContainers_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::pair<std::wstring,std::shared_ptr<CreativeFramework::Health::details::BaseEventsWithEvaluation<1>>>::~pair<std::wstring,std::shared_ptr<CreativeFramework::Health::details::BaseEventsWithEvaluation<1>>>(
        __int64 a1)
{
  volatile signed __int32 *v1; // rdi

  v1 = *(volatile signed __int32 **)(a1 + 40);
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    operator delete(*(void **)a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
}
