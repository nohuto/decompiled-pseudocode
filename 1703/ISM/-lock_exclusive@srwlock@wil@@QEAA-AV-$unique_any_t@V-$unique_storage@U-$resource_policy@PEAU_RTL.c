/*
 * XREFs of ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8
 * Callers:
 *     ?Register3DCompositor@@YAHPEAUIUnknown@@@Z @ 0x1800056E0 (-Register3DCompositor@@YAHPEAUIUnknown@@@Z.c)
 *     ?Unregister3DCompositor@@YAHXZ @ 0x1800057E0 (-Unregister3DCompositor@@YAHXZ.c)
 *     ?On3DCompositorStateChanged@MPC3DStateHelper@@AEAAX_N@Z @ 0x1800076EC (-On3DCompositorStateChanged@MPC3DStateHelper@@AEAAX_N@Z.c)
 *     ?OnSecureModeChanged@MPC3DStateHelper@@AEAAX_N@Z @ 0x180007780 (-OnSecureModeChanged@MPC3DStateHelper@@AEAAX_N@Z.c)
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x180007820 (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180007B64 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18003F400 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18003F520 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18003F648 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     _lambda_74900582371bb26b135d7f7a3ba0da76_::_lambda_invoker_cdecl_ @ 0x18003F900 (_lambda_74900582371bb26b135d7f7a3ba0da76_--_lambda_invoker_cdecl_.c)
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18003FDB0 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 *     ?WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18003FF00 (-WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_S.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x18003FF98 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x1800400E8 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180040204 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     _lambda_4acbc82402014b2d4c356edc25e0df58_::_lambda_invoker_cdecl_ @ 0x180043610 (_lambda_4acbc82402014b2d4c356edc25e0df58_--_lambda_invoker_cdecl_.c)
 *     _lambda_3a8e20f2e77891984b45453b80f2a737_::_lambda_invoker_cdecl_ @ 0x180043680 (_lambda_3a8e20f2e77891984b45453b80f2a737_--_lambda_invoker_cdecl_.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18004A9E0 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x180053B5C (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?Remove@?$EventSource@UIHeadEventHandler@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180056760 (-Remove@-$EventSource@UIHeadEventHandler@@U-$InvokeModeOptions@$0-1@WRL@Microsoft@@@WRL@Microsof.c)
 *     ?AddInternal@?$EventSource@UIHeadEventHandler@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIHeadEventHandler@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180056B30 (-AddInternal@-$EventSource@UIHeadEventHandler@@U-$InvokeModeOptions@$0-1@WRL@Microsoft@@@WRL@Mic.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_c477df94ac86060bf495915fe4bf8a5d__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180057630 (wistd--_Func_impl_wistd--_Callable_obj__lambda_c477df94ac86060bf495915fe4bf8a5d__0__ea_180057630.c)
 *     ?Create@InputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeliveryServer@@@Z @ 0x1800685FC (-Create@InputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeli.c)
 *     ??$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@CAJPEAPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@W4Behavior@012@@Z @ 0x18008CF28 (--$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@-$Singleton@VSpatia.c)
 *     ?LockExclusive@?$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@XZ @ 0x180091A24 (-LockExclusive@-$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0I.c)
 *     ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAA@XZ @ 0x180092ED8 (--1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAA@XZ.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ @ 0x1800930B0 (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ.c)
 *     ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x18009332C (-CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z.c)
 *     ?UnregisterCmNotifAsync@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXXZ @ 0x18009359C (-UnregisterCmNotifAsync@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180007488 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 */

RTL_SRWLOCK **__fastcall wil::srwlock::lock_exclusive(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a2, a1);
  return a2;
}
