/*
 * XREFs of ??1?$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x18001AFBC
 * Callers:
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$6 @ 0x18005A4E2 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$6.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenRotationAsync_::_1_::dtor$0 @ 0x18005A596 (_ContentManagement--ContentManagementService--EnableLockScreenRotationAsync_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenOverlayAsync_::_1_::dtor$0 @ 0x18005A5C0 (_ContentManagement--ContentManagementService--EnableLockScreenOverlayAsync_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync_::_1_::dtor$0 @ 0x18005A5EA (_ContentManagement--ContentManagementService--EnableStartMenuSystemPaneSuggestionsAsync_--_1_--d.c)
 *     _ContentManagement::ContentManagementService::EnableContextualSuggestionsAsync_::_1_::dtor$0 @ 0x18005A614 (_ContentManagement--ContentManagementService--EnableContextualSuggestionsAsync_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIProcessCreativeEvent@ContentManagement@@U?$InterfaceList@UIProcessLockScreenEvent@ContentManagement@@U?$InterfaceList@UIProcessStartMenuEvent@ContentManagement@@U?$InterfaceList@UIProcessContextualSuggestionsEvent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019640 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIProcessCreat.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<ContentManagement::ContentManagementService>::~ComPtr<ContentManagement::ContentManagementService>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
