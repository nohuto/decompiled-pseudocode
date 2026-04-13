/*
 * XREFs of ?QueryInterface@ContentCollectionImpl@TargetedContent@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003B6A0
 * Callers:
 *     ?QueryInterface@ContentCollectionImpl@TargetedContent@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800481B0 (-QueryInterface@ContentCollectionImpl@TargetedContent@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@ContentCollectionImpl@TargetedContent@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800481F0 (-QueryInterface@ContentCollectionImpl@TargetedContent@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAP.c)
 *     ?QueryInterface@ContentCollectionImpl@TargetedContent@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048390 (-QueryInterface@ContentCollectionImpl@TargetedContent@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAP.c)
 *     ?QueryInterface@ContentCollectionImpl@TargetedContent@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048640 (-QueryInterface@ContentCollectionImpl@TargetedContent@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAP.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::TargetedContent::ContentCollectionImpl::QueryInterface(
        ContentManagement::TargetedContent::ContentCollectionImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentCollection,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
