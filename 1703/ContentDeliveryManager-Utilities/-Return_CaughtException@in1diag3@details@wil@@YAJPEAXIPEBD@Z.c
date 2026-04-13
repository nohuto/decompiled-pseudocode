/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001F694
 * Callers:
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::ActivateInstance_::_1_::catch$1 @ 0x180070FE4 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerFactory--Activate_ea_180070FE4.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEvent_::_1_::catch$6 @ 0x1800712F8 (_ContentManagement--ContentManagementService--ProcessCreativeEvent_--_1_--catch$6.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RuntimeClassInitialize_::_1_::catch$2 @ 0x180071E17 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RuntimeClas_ea_180071E17.c)
 *     __lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_::operator()_::_1_::catch$0 @ 0x180071EA2 (__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_--operator()_--_1_--catch$0.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::catch$20 @ 0x180071FA6 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_180071FA6.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::UnregisterSubscription_::_1_::catch$2 @ 0x180071FF4 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--UnregisterS_ea_180071FF4.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::PartialTrustGetSubscriptionAsync_::_1_::catch$1 @ 0x180072036 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--PartialTrus_ea_180072036.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction_::_1_::catch$12 @ 0x1800725E1 (_Windows--Services--TargetedContent--Internal--TargetedContentActionStatics--Create_ea_1800725E1.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::RuntimeClassInitialize_::_1_::catch$11 @ 0x18007265F (_Windows--Services--TargetedContent--Internal--TargetedContentActionInternalImpl--R_ea_18007265F.c)
 *     __lambda_50e7782a30e90defa1ee26bf640ccf69_::operator()_::_1_::catch$4 @ 0x1800726C8 (__lambda_50e7782a30e90defa1ee26bf640ccf69_--operator()_--_1_--catch$4.c)
 *     __lambda_fb7da16c065b1fdb50482fbcc37ad129_::operator()_::_1_::catch$4 @ 0x18007272E (__lambda_fb7da16c065b1fdb50482fbcc37ad129_--operator()_--_1_--catch$4.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::RuntimeClassInitialize_::_1_::catch$0 @ 0x1800728A5 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerImpl--RuntimeClassInitializ.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerRegistration_::_1_::catch$9 @ 0x1800730E3 (_Windows--Services--TargetedContent--Internal--SetTriggerRegistration_--_1_--catch$9.c)
 *     _wil::details::CallAndHandleErrorsWithReturnType_void_wistd::function_void___cdecl(long_Windows::Storage::IStorageFolder_____ptr64)__long_&___ptr64_Windows::Storage::IStorageFolder_____ptr64_0__::_1_::catch$0 @ 0x18007354D (_wil--details--CallAndHandleErrorsWithReturnType_void_wistd--function_void___cdecl(long_Windows-.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x18001F62C (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
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
