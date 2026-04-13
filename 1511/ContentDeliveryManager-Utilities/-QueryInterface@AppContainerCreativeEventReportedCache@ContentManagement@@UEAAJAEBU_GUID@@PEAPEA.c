/*
 * XREFs of ?QueryInterface@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180006580
 * Callers:
 *     ?QueryInterface@AppContainerCreativeEventReportedCache@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007EC0 (-QueryInterface@AppContainerCreativeEventReportedCache@ContentManagement@@WCA@EAAJAEBU_GUID@@PEA.c)
 *     ?QueryInterface@AppContainerCreativeEventReportedCache@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007FF0 (-QueryInterface@AppContainerCreativeEventReportedCache@ContentManagement@@W7EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@AppContainerCreativeEventReportedCache@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008010 (-QueryInterface@AppContainerCreativeEventReportedCache@ContentManagement@@WCI@EAAJAEBU_GUID@@PEA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::AppContainerCreativeEventReportedCache::QueryInterface(
        ContentManagement::AppContainerCreativeEventReportedCache *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
