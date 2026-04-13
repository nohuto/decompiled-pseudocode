/*
 * XREFs of ?Release@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAKXZ @ 0x180003480
 * Callers:
 *     ?Release@ContentManagementBrokerServer@ContentManagement@@WCA@EAAKXZ @ 0x180005F40 (-Release@ContentManagementBrokerServer@ContentManagement@@WCA@EAAKXZ.c)
 *     ?Release@ContextualSuggestionsManager@ContentManagement@@W7EAAKXZ @ 0x180006020 (-Release@ContextualSuggestionsManager@ContentManagement@@W7EAAKXZ.c)
 *     ?Release@ContextualSuggestionsManager@ContentManagement@@WCI@EAAKXZ @ 0x180006050 (-Release@ContextualSuggestionsManager@ContentManagement@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::AppContainerCreativeEventReportedCache::Release(
        ContentManagement::AppContainerCreativeEventReportedCache *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IContentManagementBroker,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
