/*
 * XREFs of ?QueryInterface@CActionCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000FCC0
 * Callers:
 *     ?QueryInterface@CActionCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015B00 (-QueryInterface@CActionCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015B40 (-QueryInterface@CActionCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015C40 (-QueryInterface@CActionCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015C70 (-QueryInterface@CActionCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015D70 (-QueryInterface@CActionCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015DB0 (-QueryInterface@CActionCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015E70 (-QueryInterface@CActionCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015EA0 (-QueryInterface@CActionCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015EC0 (-QueryInterface@CActionCenterExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CActionCenterExperienceManager::QueryInterface(
        CActionCenterExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IActionCenterExperienceManager,Microsoft::WRL::Details::InterfaceList<IEdgeUiInvocation,Microsoft::WRL::Details::InterfaceList<IEdgeUiTouchInvocation,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
