/*
 * XREFs of ?GetTrustLevel@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAW4TrustLevel@@@Z @ 0x180006560
 * Callers:
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x180007F00 (-GetTrustLevel@ContentManagementService@ContentManagement@@WDI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WEA@EAAJPEAW4TrustLevel@@@Z @ 0x180008050 (-GetTrustLevel@ContentManagementService@ContentManagement@@WEA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@AppContainerCreativeEventReportedCache@ContentManagement@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x1800080C0 (-GetTrustLevel@AppContainerCreativeEventReportedCache@ContentManagement@@WCI@EAAJPEAW4TrustLevel.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x180008220 (-GetTrustLevel@ContentManagementService@ContentManagement@@WDA@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::AppContainerCreativeEventReportedCache::GetTrustLevel(
        ContentManagement::AppContainerCreativeEventReportedCache *this,
        enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0LL;
}
