/*
 * XREFs of ?GetRuntimeClassName@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180018AE0
 * Callers:
 *     ?GetRuntimeClassName@AppContainerCreativeEventReportedCache@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18001B510 (-GetRuntimeClassName@AppContainerCreativeEventReportedCache@ContentManagement@@WCI@EAAJPEAPEAUHS.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::AppContainerCreativeEventReportedCache::GetRuntimeClassName(
        ContentManagement::AppContainerCreativeEventReportedCache *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.AppContainerCreativeEventReportedCache", 0x38u, a2);
}
