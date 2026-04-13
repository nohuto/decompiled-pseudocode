/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001870C
 * Callers:
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::ActivateInstance_::_1_::catch$0 @ 0x18005A33D (_ContentManagement--TargetedContent--Internal--SubscriptionManagerFactory--Activate_ea_18005A33D.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RuntimeClassInitialize_::_1_::catch$0 @ 0x18005B332 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RuntimeClas_ea_18005B332.c)
 *     __lambda_e6eb226b317cc1f73aeda6968dc9daf6_::operator()_::_1_::catch$0 @ 0x18005B3C9 (__lambda_e6eb226b317cc1f73aeda6968dc9daf6_--operator()_--_1_--catch$0.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::catch$0 @ 0x18005B4D3 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_18005B4D3.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::UnregisterSubscription_::_1_::catch$0 @ 0x18005B527 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--UnregisterS_ea_18005B527.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::PartialTrustGetSubscriptionAsync_::_1_::catch$0 @ 0x18005B56F (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--PartialTrus_ea_18005B56F.c)
 *     __lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::operator()_::_1_::catch$0 @ 0x18005BE97 (__lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_--operator()_--_1_--catch$0.c)
 *     __lambda_770ef59a870ab0485516ac767e870dae_::operator()_::_1_::catch$0 @ 0x18005BF69 (__lambda_770ef59a870ab0485516ac767e870dae_--operator()_--_1_--catch$0.c)
 *     __lambda_a8dac312d343c3f34a0a00c8a64736dd_::operator()_::_1_::catch$0 @ 0x18005BFC9 (__lambda_a8dac312d343c3f34a0a00c8a64736dd_--operator()_--_1_--catch$0.c)
 *     _ContentManagement::TargetedContent::ContentItemImpl::RuntimeClassInitialize_::_1_::catch$0 @ 0x18005C461 (_ContentManagement--TargetedContent--ContentItemImpl--RuntimeClassInitialize_--_1_--catch$0.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800186A0 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3, (__int64)a4, v5, retaddr, 1);
}
