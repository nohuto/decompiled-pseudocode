/*
 * XREFs of ?QueryInterface@FeatureManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000E490
 * Callers:
 *     ?QueryInterface@FeatureManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E6F0 (-QueryInterface@FeatureManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@FeatureManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E790 (-QueryInterface@FeatureManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@FeatureManager@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001F290 (-QueryInterface@FeatureManager@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::FeatureManager::QueryInterface(
        ContentManagement::FeatureManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IFeatureManager,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
