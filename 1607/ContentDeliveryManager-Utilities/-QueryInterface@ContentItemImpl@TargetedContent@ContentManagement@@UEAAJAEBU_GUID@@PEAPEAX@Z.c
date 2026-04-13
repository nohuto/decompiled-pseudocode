/*
 * XREFs of ?QueryInterface@ContentItemImpl@TargetedContent@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048A90
 * Callers:
 *     ?QueryInterface@ContentItemImpl@TargetedContent@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180052D70 (-QueryInterface@ContentItemImpl@TargetedContent@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentItemImpl@TargetedContent@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180052DD0 (-QueryInterface@ContentItemImpl@TargetedContent@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentItemImpl@TargetedContent@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180052FD0 (-QueryInterface@ContentItemImpl@TargetedContent@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentItemImpl@TargetedContent@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180053300 (-QueryInterface@ContentItemImpl@TargetedContent@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::TargetedContent::ContentItemImpl::QueryInterface(
        ContentManagement::TargetedContent::ContentItemImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentItem,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
