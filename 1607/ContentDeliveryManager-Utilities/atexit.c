/*
 * XREFs of atexit @ 0x180058D18
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x1800012F0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001300 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     Windows::Internal::Details::_dynamic_initializer_for___git__ @ 0x180001360 (Windows--Internal--Details--_dynamic_initializer_for___git__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001370 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x1800013D0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Generic_object__ @ 0x1800013E0 (_dynamic_initializer_for__std--_Error_objects_int_--_Generic_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Iostream_object__ @ 0x1800013F0 (_dynamic_initializer_for__std--_Error_objects_int_--_Iostream_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_System_object__ @ 0x180001400 (_dynamic_initializer_for__std--_Error_objects_int_--_System_object__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__ @ 0x180001410 (_dynamic_initializer_for__Microsoft--WRL--Module_1_Microsoft--WRL--Details--DefaultModule_1___--.c)
 *     _dynamic_initializer_for__ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak__ @ 0x180001470 (_dynamic_initializer_for__ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl-.c)
 *     std::_dynamic_initializer_for__initlocks__ @ 0x180001480 (std--_dynamic_initializer_for__initlocks__.c)
 *     std::_dynamic_initializer_for___Fac_tidy_reg__ @ 0x1800014A0 (std--_dynamic_initializer_for___Fac_tidy_reg__.c)
 *     std::_dynamic_initializer_for__classic_locale__ @ 0x1800014B0 (std--_dynamic_initializer_for__classic_locale__.c)
 *     _dynamic_initializer_for__init_atexit__ @ 0x1800014C0 (_dynamic_initializer_for__init_atexit__.c)
 *     std::_dynamic_initializer_for__initlocks___0 @ 0x1800014D0 (std--_dynamic_initializer_for__initlocks___0.c)
 *     DllCanUnloadNow @ 0x180018E90 (DllCanUnloadNow.c)
 *     DllGetClassObject @ 0x180018F00 (DllGetClassObject.c)
 *     DllGetActivationFactory @ 0x180019000 (DllGetActivationFactory.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18001CB74 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001EAE4 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002AD2C (--$HandleEvent@$09I_K@-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002AE74 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002AFBC (--$HandleEvent@$09I_K@-$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0N@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B104 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0N@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0O@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B24C (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0O@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0M@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B394 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0M@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B4DC (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0P@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B624 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0P@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0BA@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B76C (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0BA@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x18002B8B4 (_anonymous_namespace_--PlacementHealth--HandleEvent_9_.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_1_ @ 0x18002BEC0 (_anonymous_namespace_--PlacementHealth--HandleEvent_1_.c)
 * Callees:
 *     _onexit_0 @ 0x180058C84 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
