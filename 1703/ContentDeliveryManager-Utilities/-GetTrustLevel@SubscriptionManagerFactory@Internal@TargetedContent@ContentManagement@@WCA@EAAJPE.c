/*
 * XREFs of ?GetTrustLevel@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x180022B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::GetTrustLevel(
        __int64 a1,
        enum TrustLevel *a2)
{
  return ContentManagement::IdentityManager::GetTrustLevel((ContentManagement::IdentityManager *)(a1 - 32), a2);
}
