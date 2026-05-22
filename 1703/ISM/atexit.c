/*
 * XREFs of atexit @ 0x18009D26C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001220 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001230 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__MPC3DStateHelper::s_isInstanceCreatedEvent__ @ 0x180001290 (_dynamic_initializer_for__MPC3DStateHelper--s_isInstanceCreatedEvent__.c)
 *     _dynamic_atexit_destructor_for__TestCommandHost::m_instance__ @ 0x1800012C0 (_dynamic_atexit_destructor_for__TestCommandHost--m_instance__.c)
 *     _dynamic_initializer_for__GestureTargetingComponent::s_pMessageSession__ @ 0x1800012D0 (_dynamic_initializer_for__GestureTargetingComponent--s_pMessageSession__.c)
 *     _dynamic_initializer_for__GestureTargetingComponent::s_pTargetingComponent__ @ 0x1800012E0 (_dynamic_initializer_for__GestureTargetingComponent--s_pTargetingComponent__.c)
 *     _dynamic_initializer_for__Windows::Internal::Shell::Holographic::SecureModeListener::s_listener__ @ 0x1800012F0 (_dynamic_initializer_for__Windows--Internal--Shell--Holographic--SecureModeListener--s_listener_.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001330 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001390 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     _dynamic_initializer_for__ViewHeirarchy::s_instance__ @ 0x180001470 (_dynamic_initializer_for__ViewHeirarchy--s_instance__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::s_lockSingleton__ @ 0x1800014B0 (_dynamic_initializer_for__Microsoft--WRL--Singleton_Windows--Internal--Holographic--SpatialGraph.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::s_wpSingleton__ @ 0x1800014E0 (_dynamic_initializer_for__Microsoft--WRL--Singleton_Windows--Internal--Holographic-_ea_1800014E0.c)
 *     _dynamic_atexit_destructor_for__Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::m_wpDestructorFinishedEvent__ @ 0x1800014F0 (_dynamic_atexit_destructor_for__Microsoft--WRL--Singleton_Windows--Internal--Holographic--Spatia.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?Instance@MPCTracing@@KAPEAV1@XZ @ 0x180046FC4 (-Instance@MPCTracing@@KAPEAV1@XZ.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180063F5C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180091C50 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x180092D40 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 * Callees:
 *     _onexit @ 0x18009D21C (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
