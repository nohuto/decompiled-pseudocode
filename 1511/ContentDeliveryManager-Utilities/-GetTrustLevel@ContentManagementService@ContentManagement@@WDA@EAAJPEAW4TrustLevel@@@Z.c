/*
 * XREFs of ?GetTrustLevel@ContentManagementService@ContentManagement@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x180008220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentManagementService::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return ContentManagement::AppContainerCreativeEventReportedCache::GetTrustLevel(
           (ContentManagement::AppContainerCreativeEventReportedCache *)(a1 - 48),
           a2);
}
