/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180008464
 * Callers:
 *     _ContentManagement::AppContainerCreativeEventReportedCache::IsEventReported_::_1_::dtor$2 @ 0x180028E5B (_ContentManagement--AppContainerCreativeEventReportedCache--IsEventReported_--_1_--dtor$2.c)
 *     _ContentManagement::AppContainerCreativeEventReportedCache::SetEventReported_::_1_::dtor$2 @ 0x180028E9D (_ContentManagement--AppContainerCreativeEventReportedCache--SetEventReported_--_1_--dtor$2.c)
 *     _ContentManagement::AppContainerCreativeEventReportedCache::IsReportedEventExpired_::_1_::dtor$2 @ 0x180028EEB (_ContentManagement--AppContainerCreativeEventReportedCache--IsReportedEventExpired_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
