/*
 * XREFs of ??_EContextualSuggestionsManager@ContentManagement@@UEAAPEAXI@Z @ 0x180005590
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIAppManager@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180004594 (--1-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIAppManager@Content.c)
 */

ContentManagement::ContextualSuggestionsManager *__fastcall ContentManagement::ContextualSuggestionsManager::`vector deleting destructor'(
        ContentManagement::ContextualSuggestionsManager *this,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IAppManager,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IAppManager,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
