/*
 * XREFs of ?Release@ThumbnailCacheHelper@ContentManagement@@UEAAKXZ @ 0x180006930
 * Callers:
 *     ?Release@ContextualSuggestionsManager@ContentManagement@@WCI@EAAKXZ @ 0x180017890 (-Release@ContextualSuggestionsManager@ContentManagement@@WCI@EAAKXZ.c)
 *     ?Release@ContentValueImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ @ 0x180017A90 (-Release@ContentValueImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ.c)
 *     ?Release@ContextualSuggestionsManager@ContentManagement@@W7EAAKXZ @ 0x180017BA0 (-Release@ContextualSuggestionsManager@ContentManagement@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::ThumbnailCacheHelper::Release(ContentManagement::ThumbnailCacheHelper *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentValue,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
