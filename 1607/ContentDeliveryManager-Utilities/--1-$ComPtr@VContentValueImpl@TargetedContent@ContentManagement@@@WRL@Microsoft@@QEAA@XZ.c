/*
 * XREFs of ??1?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x18000B58C
 * Callers:
 *     _ContentManagement::AppManager::ConvertFromStoreRecords_::_1_::dtor$4 @ 0x180059D55 (_ContentManagement--AppManager--ConvertFromStoreRecords_--_1_--dtor$4.c)
 *     _ContentManagement::TargetedContent::ContentItemImpl::RuntimeClassInitialize_::_1_::dtor$8 @ 0x18005C455 (_ContentManagement--TargetedContent--ContentItemImpl--RuntimeClassInitialize_--_1_--dtor$8.c)
 *     _ContentManagement::TargetedContent::StringContentValueFromJson_::_1_::dtor$1 @ 0x18005C4EE (_ContentManagement--TargetedContent--StringContentValueFromJson_--_1_--dtor$1.c)
 *     _ContentManagement::TargetedContent::BooleanContentValueFromJson_::_1_::dtor$0 @ 0x18005C51A (_ContentManagement--TargetedContent--BooleanContentValueFromJson_--_1_--dtor$0.c)
 *     _ContentManagement::TargetedContent::UriContentValueFromJson_::_1_::dtor$3 @ 0x18005C56A (_ContentManagement--TargetedContent--UriContentValueFromJson_--_1_--dtor$3.c)
 *     _ContentManagement::TargetedContent::NumericContentValueFromJson_::_1_::dtor$0 @ 0x18005C596 (_ContentManagement--TargetedContent--NumericContentValueFromJson_--_1_--dtor$0.c)
 *     _ContentManagement::TargetedContent::FileContentValueFromJson_::_1_::dtor$1 @ 0x18005C636 (_ContentManagement--TargetedContent--FileContentValueFromJson_--_1_--dtor$1.c)
 *     _ContentManagement::TargetedContent::ImageContentValueFromJson_::_1_::dtor$2 @ 0x18005C67A (_ContentManagement--TargetedContent--ImageContentValueFromJson_--_1_--dtor$2.c)
 *     _ContentManagement::TargetedContent::MakeContentValueForJsonObject_::_1_::dtor$0 @ 0x18005C6B2 (_ContentManagement--TargetedContent--MakeContentValueForJsonObject_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentValue@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AF00 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UITargetedCont.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::ContentValueImpl>::~ComPtr<ContentManagement::TargetedContent::ContentValueImpl>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentValue,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
