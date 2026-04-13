/*
 * XREFs of ?GetIids@LaunchManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000D3F0
 * Callers:
 *     ?GetIids@LaunchManager@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001F2B0 (-GetIids@LaunchManager@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::LaunchManager::GetIids(
        ContentManagement::LaunchManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::ILaunchManager,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
