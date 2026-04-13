/*
 * XREFs of atexit @ 0x18006F800
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x1800012E0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1800012F0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     Windows::Internal::Details::_dynamic_initializer_for___git__ @ 0x180001350 (Windows--Internal--Details--_dynamic_initializer_for___git__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001360 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x1800013C0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Generic_object__ @ 0x180001430 (_dynamic_initializer_for__std--_Error_objects_int_--_Generic_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Iostream_object__ @ 0x180001440 (_dynamic_initializer_for__std--_Error_objects_int_--_Iostream_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_System_object__ @ 0x180001450 (_dynamic_initializer_for__std--_Error_objects_int_--_System_object__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__ @ 0x180001460 (_dynamic_initializer_for__Microsoft--WRL--Module_1_Microsoft--WRL--Details--DefaultModule_1___--.c)
 *     CreativeFramework::Health::details::_dynamic_initializer_for__s_placementToBaseScenarioEventsMap__ @ 0x1800014B0 (CreativeFramework--Health--details--_dynamic_initializer_for__s_placementToBaseScenarioEventsMap.c)
 *     _dynamic_initializer_for__ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak__ @ 0x1800014D0 (_dynamic_initializer_for__ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl-.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateHandlerMap__ @ 0x1800014E0 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicateHandlerMap__.c)
 *     CreativeFramework::Triggers::_dynamic_initializer_for__wellKnownWnfs__ @ 0x180001500 (CreativeFramework--Triggers--_dynamic_initializer_for__wellKnownWnfs__.c)
 *     std::_dynamic_initializer_for__initlocks__ @ 0x180001520 (std--_dynamic_initializer_for__initlocks__.c)
 *     std::_dynamic_initializer_for___Fac_tidy_reg__ @ 0x180001540 (std--_dynamic_initializer_for___Fac_tidy_reg__.c)
 *     std::_dynamic_initializer_for__classic_locale__ @ 0x180001550 (std--_dynamic_initializer_for__classic_locale__.c)
 *     _dynamic_initializer_for__init_atexit__ @ 0x180001560 (_dynamic_initializer_for__init_atexit__.c)
 *     std::_dynamic_initializer_for__initlocks___0 @ 0x180001570 (std--_dynamic_initializer_for__initlocks___0.c)
 *     DllCanUnloadNow @ 0x18001FF30 (DllCanUnloadNow.c)
 *     DllGetClassObject @ 0x18001FFA0 (DllGetClassObject.c)
 *     DllGetActivationFactory @ 0x1800200A0 (DllGetActivationFactory.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18002418C (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180026114 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 * Callees:
 *     _onexit_0 @ 0x18006F770 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
