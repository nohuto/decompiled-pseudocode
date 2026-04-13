/*
 * XREFs of ?GetIids@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004BDB0
 * Callers:
 *     ?GetIids@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180053310 (-GetIids@-$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U-$Def_ea_180053310.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::TargetedContent::TargetedContentItem *,0,1,0>>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IVector<ContentManagement::TargetedContent::TargetedContentItem *>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<ContentManagement::TargetedContent::TargetedContentItem *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::GetIids(
           a1,
           a2,
           a3);
}
