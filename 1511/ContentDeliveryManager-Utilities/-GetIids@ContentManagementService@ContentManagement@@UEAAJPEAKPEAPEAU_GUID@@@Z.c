/*
 * XREFs of ?GetIids@ContentManagementService@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800065C0
 * Callers:
 *     ?GetIids@ContentManagementService@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180007E60 (-GetIids@ContentManagementService@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180007FA0 (-GetIids@ContentManagementService@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800080E0 (-GetIids@ContentManagementService@ContentManagement@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WEA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800081A0 (-GetIids@ContentManagementService@ContentManagement@@WEA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentManagementService::GetIids(
        ContentManagement::ContentManagementService *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
