/*
 * XREFs of ?Release@ThumbnailCacheHelper@ContentManagement@@UEAAKXZ @ 0x180006B30
 * Callers:
 *     ?Release@ContextualSuggestionsManager@ContentManagement@@WCI@EAAKXZ @ 0x18001E710 (-Release@ContextualSuggestionsManager@ContentManagement@@WCI@EAAKXZ.c)
 *     ?Release@ActionHelper@ContentManagement@@WCA@EAAKXZ @ 0x18001E900 (-Release@ActionHelper@ContentManagement@@WCA@EAAKXZ.c)
 *     ?Release@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ @ 0x18001EAC0 (-Release@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::ThumbnailCacheHelper::Release(ContentManagement::ThumbnailCacheHelper *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
