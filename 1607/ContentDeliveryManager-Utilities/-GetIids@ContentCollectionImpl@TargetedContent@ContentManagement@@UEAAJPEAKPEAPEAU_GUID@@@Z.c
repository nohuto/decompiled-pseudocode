/*
 * XREFs of ?GetIids@ContentCollectionImpl@TargetedContent@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18003B690
 * Callers:
 *     ?GetIids@ContentCollectionImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180048510 (-GetIids@ContentCollectionImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentCollectionImpl@TargetedContent@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180048690 (-GetIids@ContentCollectionImpl@TargetedContent@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::TargetedContent::ContentCollectionImpl::GetIids(
        ContentManagement::TargetedContent::ContentCollectionImpl *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentCollection,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
