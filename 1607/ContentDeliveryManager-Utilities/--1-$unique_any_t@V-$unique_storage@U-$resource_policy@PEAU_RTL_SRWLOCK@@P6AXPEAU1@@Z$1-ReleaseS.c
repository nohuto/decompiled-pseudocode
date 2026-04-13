/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180002D94
 * Callers:
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$11 @ 0x18005B486 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_18005B486.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::UnregisterSubscription_::_1_::dtor$0 @ 0x18005B50F (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--UnregisterSubscription_-.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated_::_1_::dtor$4 @ 0x18005B5B7 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--OnContentUp_ea_18005B5B7.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetOrCreateInstance_::_1_::dtor$1 @ 0x18005B63B (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--GetOrCreate_ea_18005B63B.c)
 *     _ContentManagement::TargetedContent::SubscriptionImpl::GetContentAndQueueRetryIfAppropriate_::_1_::dtor$8 @ 0x18005BD7B (_ContentManagement--TargetedContent--SubscriptionImpl--GetContentAndQueueRetryIfApp_ea_18005BD7B.c)
 *     _ContentManagement::TargetedContent::SubscriptionImpl::GetContentAndQueueRetryIfAppropriate_::_1_::dtor$6 @ 0x18005BD87 (_ContentManagement--TargetedContent--SubscriptionImpl--GetContentAndQueueRetryIfApp_ea_18005BD87.c)
 *     __lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::operator()_::_1_::dtor$6 @ 0x18005BE8B (__lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_--operator()_--_1_--dtor$6.c)
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
