/*
 * XREFs of ?GetTrustLevel@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x18001B5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::GetTrustLevel(
        __int64 a1,
        enum TrustLevel *a2)
{
  return ContentManagement::AppManager::GetTrustLevel((ContentManagement::AppManager *)(a1 - 32), a2);
}
