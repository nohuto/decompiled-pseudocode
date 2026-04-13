/*
 * XREFs of ?GetTrustLevel@AppManager@ContentManagement@@UEAAJPEAW4TrustLevel@@@Z @ 0x180006900
 * Callers:
 *     ?GetTrustLevel@NotificationManager@ContentManagement@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x180017F30 (-GetTrustLevel@NotificationManager@ContentManagement@@WCI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x18001B5C0 (-GetTrustLevel@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@WCA@EAAJPE.c)
 *     ?GetTrustLevel@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x18003A040 (-GetTrustLevel@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJPEAW4.c)
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
