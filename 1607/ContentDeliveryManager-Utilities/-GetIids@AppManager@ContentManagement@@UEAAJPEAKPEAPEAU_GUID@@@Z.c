/*
 * XREFs of ?GetIids@AppManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180009060
 * Callers:
 *     ?GetIids@AppManager@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180018540 (-GetIids@AppManager@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::AppManager::GetIids(
        ContentManagement::AppManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IAppManager,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
