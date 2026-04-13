/*
 * XREFs of ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04
 * Callers:
 *     ?put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180006A50 (-put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180006B20 (-put_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180008490 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4ServiceReportingKind@23@_K@Z @ 0x1800085B8 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4ServiceReportingKind@23@_K@Z.c)
 *     ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800087C0 (-WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSC.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATFeaturePropertyCache@23@@Z @ 0x18000885C (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATFeaturePropertyCache@2.c)
 *     _lambda_4acbc82402014b2d4c356edc25e0df58_::_lambda_invoker_cdecl_ @ 0x18000E440 (_lambda_4acbc82402014b2d4c356edc25e0df58_--_lambda_invoker_cdecl_.c)
 *     _lambda_3a8e20f2e77891984b45453b80f2a737_::_lambda_invoker_cdecl_ @ 0x18000E6A0 (_lambda_3a8e20f2e77891984b45453b80f2a737_--_lambda_invoker_cdecl_.c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x180020834 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 *     ?CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ @ 0x180021380 (-CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ.c)
 *     ?LockExclusive@?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@XZ @ 0x180027990 (-LockExclusive@-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180034E50 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 *     ?UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@@Z @ 0x1800358C0 (-UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAA.c)
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180035C78 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     ?GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA?AV?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@XZ @ 0x180036380 (-GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA-AV-$.c)
 *     ?GetContentAndQueueRetryIfAppropriate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAA?AV?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@_N@Z @ 0x18003FD18 (-GetContentAndQueueRetryIfAppropriate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAA-A.c)
 *     ?add_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJPEAU?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180040010 (-add_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJPEAU-$ITypedEventHa.c)
 *     _lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::operator() @ 0x1800405E0 (_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_--operator().c)
 *     ?CancelContentUpdateRetry@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180040888 (-CancelContentUpdateRetry@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     ?OnContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJE@Z @ 0x1800408E0 (-OnContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJE@Z.c)
 *     ?NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ @ 0x180040A90 (-NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ.c)
 *     ?GetDeferral@?$DeferrableEventArgs@UITargetedContentUpdatedEventArgs@TargetedContent@ContentManagement@@VUpdatedEventArgsImpl@23@@WRL@Microsoft@@UEAAJPEAPEAUIDeferral@Foundation@Windows@@@Z @ 0x180042610 (-GetDeferral@-$DeferrableEventArgs@UITargetedContentUpdatedEventArgs@TargetedContent@ContentMana.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1800427E8 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@Cont.c)
 *     ?Invoke@?$InvokeHelper@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed0902fb5310eddefb_@@$0A@@Details@WRL@Microsoft@@UEAAJXZ @ 0x180043EC0 (-Invoke@-$InvokeHelper@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed0.c)
 *     _ContentManagement::TargetedContent::SubscriptionImpl::GetContentAndQueueRetryIfAppropriate_::_1_::catch$0 @ 0x18005BD19 (_ContentManagement--TargetedContent--SubscriptionImpl--GetContentAndQueueRetryIfApp_ea_18005BD19.c)
 *     __lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::operator()_::_1_::catch$1 @ 0x18005BE05 (__lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_--operator()_--_1_--catch$1.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180002D64 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 */

RTL_SRWLOCK **__fastcall wil::srwlock::lock_exclusive(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a2, a1);
  return a2;
}
