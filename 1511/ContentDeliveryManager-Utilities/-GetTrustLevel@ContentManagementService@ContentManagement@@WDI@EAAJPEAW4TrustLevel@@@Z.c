/*
 * XREFs of ?GetTrustLevel@ContentManagementService@ContentManagement@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x180007F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentManagementService::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return ContentManagement::AppContainerCreativeEventReportedCache::GetTrustLevel(
           (ContentManagement::AppContainerCreativeEventReportedCache *)(a1 - 56),
           a2);
}
