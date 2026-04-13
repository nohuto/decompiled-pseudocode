/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180002EC0
 * Callers:
 *     _CreativeFramework::Health::details::GenericOffersHealthTracker_11_1_::GetOrCreateBaseEventForPlacementId_::_1_::dtor$2 @ 0x180071A85 (_CreativeFramework--Health--details--GenericOffersHealthTracker_11_1_--GetOrCreateBaseEventForPl.c)
 *     _CreativeFramework::Health::details::GenericOffersHealthTracker_3_1_::GetOrCreateBaseEventForPlacementId_::_1_::dtor$2 @ 0x180071BC4 (_CreativeFramework--Health--details--GenericOffersHealthTracker_3_1_--GetOrCreateBaseEventForPla.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$11 @ 0x180071F59 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_180071F59.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::UnregisterSubscription_::_1_::dtor$0 @ 0x180071FDC (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--UnregisterSubscription_-.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated_::_1_::dtor$4 @ 0x180072078 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--OnContentUp_ea_180072078.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetOrCreateInstance_::_1_::dtor$1 @ 0x1800720F0 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--GetOrCreate_ea_1800720F0.c)
 *     _CreativeFramework::Triggers::CreateSupportedWnfNameStateMap_::_1_::dtor$1 @ 0x1800735C0 (_CreativeFramework--Triggers--CreateSupportedWnfNameStateMap_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
