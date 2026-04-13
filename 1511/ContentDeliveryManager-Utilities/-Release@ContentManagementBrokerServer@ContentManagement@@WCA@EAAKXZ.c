/*
 * XREFs of ?Release@ContentManagementBrokerServer@ContentManagement@@WCA@EAAKXZ @ 0x180005F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::ContentManagementBrokerServer::Release(__int64 a1)
{
  return ContentManagement::AppContainerCreativeEventReportedCache::Release((ContentManagement::AppContainerCreativeEventReportedCache *)(a1 - 32));
}
