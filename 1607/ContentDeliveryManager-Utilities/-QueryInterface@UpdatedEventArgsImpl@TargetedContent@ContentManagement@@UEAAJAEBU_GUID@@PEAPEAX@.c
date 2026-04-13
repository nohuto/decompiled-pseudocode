/*
 * XREFs of ?QueryInterface@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003B650
 * Callers:
 *     ?QueryInterface@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800483B0 (-QueryInterface@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@WBI@EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800484E0 (-QueryInterface@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::TargetedContent::UpdatedEventArgsImpl::QueryInterface(
        ContentManagement::TargetedContent::UpdatedEventArgsImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::DeferrableEventArgs<ContentManagement::TargetedContent::ITargetedContentUpdatedEventArgs,ContentManagement::TargetedContent::UpdatedEventArgsImpl>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
