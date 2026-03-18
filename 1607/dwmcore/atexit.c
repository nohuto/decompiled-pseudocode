/*
 * XREFs of atexit @ 0x1800BD4C0
 * Callers:
 *     _dynamic_initializer_for__g_csCompositionEngine__ @ 0x180001000 (_dynamic_initializer_for__g_csCompositionEngine__.c)
 *     _dynamic_initializer_for__CInteraction::s_InteractionHandleTable__ @ 0x180001010 (_dynamic_initializer_for__CInteraction--s_InteractionHandleTable__.c)
 *     _dynamic_initializer_for__CExpressionValueStack::s_emptyValue__ @ 0x180001020 (_dynamic_initializer_for__CExpressionValueStack--s_emptyValue__.c)
 *     _dynamic_initializer_for__g_DisplayManager__ @ 0x180001060 (_dynamic_initializer_for__g_DisplayManager__.c)
 *     _dynamic_initializer_for__g_D3DModuleLoader__ @ 0x1800010C0 (_dynamic_initializer_for__g_D3DModuleLoader__.c)
 *     _dynamic_initializer_for__g_AnalogCompositor__ @ 0x1800011A0 (_dynamic_initializer_for__g_AnalogCompositor__.c)
 *     _dynamic_initializer_for__CManipulationManager::s_InputQueue__ @ 0x1800011C0 (_dynamic_initializer_for__CManipulationManager--s_InputQueue__.c)
 *     _dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x1800011E0 (_dynamic_initializer_for__CManipulationManager--s_InteractionUpdateQueue__.c)
 *     _dynamic_initializer_for__CManipulationManager::s_rwPointerBufferLock__ @ 0x180001200 (_dynamic_initializer_for__CManipulationManager--s_rwPointerBufferLock__.c)
 *     _dynamic_initializer_for__CManipulationContext::s_ParticipatingInteractionMap__ @ 0x180001230 (_dynamic_initializer_for__CManipulationContext--s_ParticipatingInteractionMap__.c)
 *     _dynamic_initializer_for__g_D3DDeviceManager__ @ 0x180001240 (_dynamic_initializer_for__g_D3DDeviceManager__.c)
 *     _dynamic_initializer_for__CD3DRegistryDatabase::m_rgAdapterErrorCounts__ @ 0x180001260 (_dynamic_initializer_for__CD3DRegistryDatabase--m_rgAdapterErrorCounts__.c)
 *     _dynamic_initializer_for__g_ResourceCacheIndexManager__ @ 0x1800013B0 (_dynamic_initializer_for__g_ResourceCacheIndexManager__.c)
 *     _dynamic_initializer_for__D3DCompilerHelper::s_csInitLock__ @ 0x1800013D0 (_dynamic_initializer_for__D3DCompilerHelper--s_csInitLock__.c)
 *     _dynamic_initializer_for__CRectanglesShape::sc_emptyShape__ @ 0x180001400 (_dynamic_initializer_for__CRectanglesShape--sc_emptyShape__.c)
 *     _dynamic_initializer_for__Contexts__ @ 0x180001420 (_dynamic_initializer_for__Contexts__.c)
 *     Components::Animations::_dynamic_initializer_for__g_defaultHeap__ @ 0x180001490 (Components--Animations--_dynamic_initializer_for__g_defaultHeap__.c)
 *     _dynamic_initializer_for__Components::Animations::Sequence::s_rpDefaultInterpolation__ @ 0x1800014A0 (_dynamic_initializer_for__Components--Animations--Sequence--s_rpDefaultInterpolation__.c)
 *     _dynamic_initializer_for__Components::Animations::Sequence::s_rpDefaultValue__ @ 0x1800014B0 (_dynamic_initializer_for__Components--Animations--Sequence--s_rpDefaultValue__.c)
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18007A6E0 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B7F34 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     _onexit_0 @ 0x1800BD42C (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
