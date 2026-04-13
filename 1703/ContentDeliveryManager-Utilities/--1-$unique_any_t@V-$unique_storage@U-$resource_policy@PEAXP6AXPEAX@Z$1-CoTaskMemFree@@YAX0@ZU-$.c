/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180025728
 * Callers:
 *     _CreativeFramework::SubscribedContentStore::RefreshSubscriptionLastAccessed_::_1_::dtor$0 @ 0x180071C57 (_CreativeFramework--SubscribedContentStore--RefreshSubscriptionLastAccessed_--_1_--dtor$0.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionState_::_1_::dtor$0 @ 0x180071C6F (_CreativeFramework--SubscribedContentStore--GetSubscriptionState_--_1_--dtor$0.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$0 @ 0x180071C9F (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$0.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$6 @ 0x180071D9B (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$6.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$13 @ 0x180071DBF (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$13.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated_::_1_::dtor$5 @ 0x180072090 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--OnContentUp_ea_180072090.c)
 *     _Windows::Services::TargetedContent::Internal::RuleBiPredicateCreator_::_1_::dtor$0 @ 0x180072B80 (_Windows--Services--TargetedContent--Internal--RuleBiPredicateCreator_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::DefaultBiPredicateCreator_::_1_::dtor$0 @ 0x180072B8C (_Windows--Services--TargetedContent--Internal--DefaultBiPredicateCreator_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterWnfTrigger_::_1_::dtor$1 @ 0x180072C14 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_180072C14.c)
 *     _CreativeFramework::NotificationManager::ToastHelpers::ExpandRatingParameters_::_1_::dtor$0 @ 0x180074C50 (_CreativeFramework--NotificationManager--ToastHelpers--ExpandRatingParameters_--_1_--dtor$0.c)
 *     _CreativeFramework::NotificationManager::ToastHelpers::ResolveRatingImage_::_1_::dtor$1 @ 0x180074CEC (_CreativeFramework--NotificationManager--ToastHelpers--ResolveRatingImage_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
