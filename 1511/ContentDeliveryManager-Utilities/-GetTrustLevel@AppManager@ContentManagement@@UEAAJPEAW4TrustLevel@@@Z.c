/*
 * XREFs of ?GetTrustLevel@AppManager@ContentManagement@@UEAAJPEAW4TrustLevel@@@Z @ 0x180003450
 * Callers:
 *     ?GetTrustLevel@ContentManagementBrokerServer@ContentManagement@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x180006090 (-GetTrustLevel@ContentManagementBrokerServer@ContentManagement@@WCI@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::AppManager::GetTrustLevel(
        ContentManagement::AppManager *this,
        enum TrustLevel *a2)
{
  *a2 = PartialTrust;
  return 0LL;
}
