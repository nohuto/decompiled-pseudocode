/*
 * XREFs of ?GetIids@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180006570
 * Callers:
 *     ?GetIids@AppContainerCreativeEventReportedCache@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180008200 (-GetIids@AppContainerCreativeEventReportedCache@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::AppContainerCreativeEventReportedCache::GetIids(
        ContentManagement::AppContainerCreativeEventReportedCache *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
