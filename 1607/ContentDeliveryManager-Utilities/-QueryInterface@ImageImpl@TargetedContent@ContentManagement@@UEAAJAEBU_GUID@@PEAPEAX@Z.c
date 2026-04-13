/*
 * XREFs of ?QueryInterface@ImageImpl@TargetedContent@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048B30
 * Callers:
 *     ?QueryInterface@ImageImpl@TargetedContent@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180052ED0 (-QueryInterface@ImageImpl@TargetedContent@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ImageImpl@TargetedContent@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180052F10 (-QueryInterface@ImageImpl@TargetedContent@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ImageImpl@TargetedContent@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800530C0 (-QueryInterface@ImageImpl@TargetedContent@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ImageImpl@TargetedContent@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800533C0 (-QueryInterface@ImageImpl@TargetedContent@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::TargetedContent::ImageImpl::QueryInterface(
        ContentManagement::TargetedContent::ImageImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentImage,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::RandomAccessStreamReferenceWrapper,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
