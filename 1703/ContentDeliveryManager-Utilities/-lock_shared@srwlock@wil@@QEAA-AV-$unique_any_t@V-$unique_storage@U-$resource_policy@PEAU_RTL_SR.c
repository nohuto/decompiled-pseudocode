/*
 * XREFs of ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002F3C
 * Callers:
 *     ?get_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180006BF0 (-get_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?get_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180006CB0 (-get_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     _lambda_74900582371bb26b135d7f7a3ba0da76_::_lambda_invoker_cdecl_ @ 0x180009B40 (_lambda_74900582371bb26b135d7f7a3ba0da76_--_lambda_invoker_cdecl_.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x180035A94 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x1800374AC (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18003B3F4 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     ?CreateSupportedWnfNameStateMap@Triggers@CreativeFramework@@YA?AV?$map@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@XZ @ 0x180054F50 (-CreateSupportedWnfNameStateMap@Triggers@CreativeFramework@@YA-AV-$map@PEBGPEBU_WNF_STATE_NAME@@.c)
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180002ED8 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 */

RTL_SRWLOCK **__fastcall wil::srwlock::lock_shared(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a2, a1);
  return a2;
}
