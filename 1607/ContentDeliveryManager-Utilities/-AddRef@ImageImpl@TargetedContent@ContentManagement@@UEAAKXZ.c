/*
 * XREFs of ?AddRef@ImageImpl@TargetedContent@ContentManagement@@UEAAKXZ @ 0x180048B50
 * Callers:
 *     ?AddRef@ImageImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ @ 0x180052D40 (-AddRef@ImageImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ.c)
 *     ?AddRef@ImageImpl@TargetedContent@ContentManagement@@W7EAAKXZ @ 0x180052F30 (-AddRef@ImageImpl@TargetedContent@ContentManagement@@W7EAAKXZ.c)
 *     ?AddRef@ImageImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ @ 0x180052F80 (-AddRef@ImageImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ.c)
 *     ?AddRef@ImageImpl@TargetedContent@ContentManagement@@WDA@EAAKXZ @ 0x180053130 (-AddRef@ImageImpl@TargetedContent@ContentManagement@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::TargetedContent::ImageImpl::AddRef(
        ContentManagement::TargetedContent::ImageImpl *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentImage,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::RandomAccessStreamReferenceWrapper,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(this);
}
