/*
 * XREFs of ?QueryInterface@ThumbnailCacheHelper@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000A150
 * Callers:
 *     ?QueryInterface@ThumbnailCacheHelper@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017C20 (-QueryInterface@ThumbnailCacheHelper@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ThumbnailCacheHelper@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017FB0 (-QueryInterface@ThumbnailCacheHelper@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ThumbnailCacheHelper@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018000 (-QueryInterface@ThumbnailCacheHelper@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ThumbnailCacheHelper::QueryInterface(
        ContentManagement::ThumbnailCacheHelper *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IThumbnailCacheHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
