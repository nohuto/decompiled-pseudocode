/*
 * XREFs of ?GetIids@FeatureManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000E480
 * Callers:
 *     ?GetIids@FeatureManager@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001F070 (-GetIids@FeatureManager@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::FeatureManager::GetIids(
        ContentManagement::FeatureManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IFeatureManager,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
