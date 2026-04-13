/*
 * XREFs of ?Release@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@UEAAKXZ @ 0x18003B660
 * Callers:
 *     ?Release@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@WBI@EAAKXZ @ 0x180048310 (-Release@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@WBI@EAAKXZ.c)
 *     ?Release@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ @ 0x180048460 (-Release@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::TargetedContent::UpdatedEventArgsImpl::Release(
        ContentManagement::TargetedContent::UpdatedEventArgsImpl *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::DeferrableEventArgs<ContentManagement::TargetedContent::ITargetedContentUpdatedEventArgs,ContentManagement::TargetedContent::UpdatedEventArgsImpl>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(this);
}
