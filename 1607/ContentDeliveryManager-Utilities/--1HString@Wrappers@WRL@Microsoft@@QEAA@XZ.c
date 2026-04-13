/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180003D08
 * Callers:
 *     _ContentManagement::AppManager::ConvertToStoreRecords_::_1_::dtor$2 @ 0x180059CFB (_ContentManagement--AppManager--ConvertToStoreRecords_--_1_--dtor$2.c)
 *     _ContentManagement::AppManager::ConvertToStoreRecords_::_1_::dtor$3 @ 0x180059D07 (_ContentManagement--AppManager--ConvertToStoreRecords_--_1_--dtor$3.c)
 *     _ContentManagement::AppManager::ConvertFromStoreRecords_::_1_::dtor$2 @ 0x180059D3D (_ContentManagement--AppManager--ConvertFromStoreRecords_--_1_--dtor$2.c)
 *     _ContentManagement::AppManager::ConvertFromStoreRecords_::_1_::dtor$3 @ 0x180059D49 (_ContentManagement--AppManager--ConvertFromStoreRecords_--_1_--dtor$3.c)
 *     _ContentManagement::AppContainerCreativeEventReportedCache::IsEventReported_::_1_::dtor$2 @ 0x18005A7A6 (_ContentManagement--AppContainerCreativeEventReportedCache--IsEventReported_--_1_--dtor$2.c)
 *     _ContentManagement::AppContainerCreativeEventReportedCache::SetEventReported_::_1_::dtor$2 @ 0x18005A7E8 (_ContentManagement--AppContainerCreativeEventReportedCache--SetEventReported_--_1_--dtor$2.c)
 *     _ContentManagement::AppContainerCreativeEventReportedCache::IsReportedEventExpired_::_1_::dtor$2 @ 0x18005A836 (_ContentManagement--AppContainerCreativeEventReportedCache--IsReportedEventExpired_--_1_--dtor$2.c)
 *     _Windows::Foundation::Collections::Internal::SimpleKeyValuePair_HSTRING_______ptr64_ContentManagement::TargetedContent::TargetedContentValue_____ptr64_Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_ContentManagement::TargetedContent::TargetedContentValue_____ptr64__1_::Make_::_1_::dtor$1 @ 0x18005C797 (_Windows--Foundation--Collections--Internal--SimpleKeyValuePair_HSTRING_______ptr64_ea_18005C797.c)
 *     _Windows::Foundation::Collections::Internal::SimpleKeyValuePair_HSTRING_______ptr64_ContentManagement::TargetedContent::TargetedContentValue_____ptr64_Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_ContentManagement::TargetedContent::TargetedContentValue_____ptr64__1_::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x18005C81B (_Windows--Foundation--Collections--Internal--SimpleKeyValuePair_HSTRING_______ptr64_ea_18005C81B.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
