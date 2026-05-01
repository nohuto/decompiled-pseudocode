/*
 * XREFs of ?GetIids@CActionCenterExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000FCB0
 * Callers:
 *     ?GetIids@CActionCenterExperienceManager@@WEI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180015BA0 (-GetIids@CActionCenterExperienceManager@@WEI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CActionCenterExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180015DC0 (-GetIids@CActionCenterExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CActionCenterExperienceManager::GetIids(
        CActionCenterExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IActionCenterExperienceManager,Microsoft::WRL::Details::InterfaceList<IEdgeUiInvocation,Microsoft::WRL::Details::InterfaceList<IEdgeUiTouchInvocation,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
