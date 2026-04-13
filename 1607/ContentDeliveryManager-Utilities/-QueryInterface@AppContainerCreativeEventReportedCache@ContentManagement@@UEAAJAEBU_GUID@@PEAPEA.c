/*
 * XREFs of ?QueryInterface@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018B10
 * Callers:
 *     ?QueryInterface@AppContainerCreativeEventReportedCache@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B470 (-QueryInterface@AppContainerCreativeEventReportedCache@ContentManagement@@WCA@EAAJAEBU_GUID@@PEA.c)
 *     ?QueryInterface@AppContainerCreativeEventReportedCache@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B5B0 (-QueryInterface@AppContainerCreativeEventReportedCache@ContentManagement@@W7EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@AppContainerCreativeEventReportedCache@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B5F0 (-QueryInterface@AppContainerCreativeEventReportedCache@ContentManagement@@WCI@EAAJAEBU_GUID@@PEA.c)
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
