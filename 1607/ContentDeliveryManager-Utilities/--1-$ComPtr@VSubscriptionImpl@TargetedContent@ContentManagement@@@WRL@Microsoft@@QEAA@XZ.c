/*
 * XREFs of ??1?$ComPtr@VSubscriptionImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x180042330
 * Callers:
 *     _ContentManagement::TargetedContent::SubscriptionImpl::GetContentAsync_::_1_::dtor$0 @ 0x18005BCB1 (_ContentManagement--TargetedContent--SubscriptionImpl--GetContentAsync_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ContentManagement::TargetedContent::ContentCollectionImpl_ContentManagement::TargetedContent::ITargetedContentCollection_HSTRING_______ptr64_HSTRING_______ptr64_Windows::Data::Json::IJsonObject_____ptr64_unsigned_int_____ptr64__::_1_::dtor$0 @ 0x18005C038 (_Microsoft--WRL--Details--MakeAndInitialize_ContentManagement--TargetedContent--ContentCollectio.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ContentManagement::TargetedContent::ContentItemImpl_ContentManagement::TargetedContent::ITargetedContentItem_HSTRING_______ptr64_&___ptr64_HSTRING_______ptr64_&___ptr64_Windows::Data::Json::IJsonObject_____ptr64_unsigned_int_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x18005C726 (_Microsoft--WRL--Details--MakeAndInitialize_ContentManagement--TargetedContent--ContentItemImpl_.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentItem@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180042180 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@U_ea_180042180.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::SubscriptionImpl>::~ComPtr<ContentManagement::TargetedContent::SubscriptionImpl>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentItem,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
