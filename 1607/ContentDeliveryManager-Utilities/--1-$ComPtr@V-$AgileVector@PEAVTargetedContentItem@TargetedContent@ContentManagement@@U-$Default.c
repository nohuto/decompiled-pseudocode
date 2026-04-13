/*
 * XREFs of ??1?$ComPtr@V?$AgileVector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18000B940
 * Callers:
 *     _ContentManagement::AppManager::ConvertFromStoreRecords_::_1_::dtor$0 @ 0x180059D25 (_ContentManagement--AppManager--ConvertFromStoreRecords_--_1_--dtor$0.c)
 *     _ContentManagement::TargetedContent::ContentCollectionImpl::RuntimeClassInitialize_::_1_::dtor$2 @ 0x18005C3CB (_ContentManagement--TargetedContent--ContentCollectionImpl--RuntimeClassInitialize_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000B760 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IVector@PEAVAppInstallInfoRecord@ContentManagement@@.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,0>>::~ComPtr<Windows::Foundation::Collections::Internal::AgileVector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,0>>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(result);
  }
  return result;
}
