/*
 * XREFs of ?Release@ImageImpl@TargetedContent@ContentManagement@@UEAAKXZ @ 0x180048B40
 * Callers:
 *     ?Release@ImageImpl@TargetedContent@ContentManagement@@W7EAAKXZ @ 0x180052D50 (-Release@ImageImpl@TargetedContent@ContentManagement@@W7EAAKXZ.c)
 *     ?Release@ImageImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ @ 0x180052DB0 (-Release@ImageImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ.c)
 *     ?Release@ImageImpl@TargetedContent@ContentManagement@@WDA@EAAKXZ @ 0x180052FB0 (-Release@ImageImpl@TargetedContent@ContentManagement@@WDA@EAAKXZ.c)
 *     ?Release@ImageImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ @ 0x1800532E0 (-Release@ImageImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::TargetedContent::ImageImpl::Release(
        ContentManagement::TargetedContent::ImageImpl *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentImage,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::RandomAccessStreamReferenceWrapper,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
