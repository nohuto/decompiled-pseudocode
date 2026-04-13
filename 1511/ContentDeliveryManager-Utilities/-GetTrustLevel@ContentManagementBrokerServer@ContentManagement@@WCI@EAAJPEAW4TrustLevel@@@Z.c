/*
 * XREFs of ?GetTrustLevel@ContentManagementBrokerServer@ContentManagement@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x180006090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentManagementBrokerServer::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return ContentManagement::AppManager::GetTrustLevel((ContentManagement::AppManager *)(a1 - 40), a2);
}
