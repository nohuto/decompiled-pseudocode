/*
 * XREFs of ?GetIids@ContentItemImpl@TargetedContent@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180048A80
 * Callers:
 *     ?GetIids@ContentItemImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180053220 (-GetIids@ContentItemImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentItemImpl@TargetedContent@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800533A0 (-GetIids@ContentItemImpl@TargetedContent@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::TargetedContent::ContentItemImpl::GetIids(
        ContentManagement::TargetedContent::ContentItemImpl *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentItem,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
