/*
 * XREFs of ?GetTrustLevel@NotificationManager@ContentManagement@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x180017F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::NotificationManager::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return ContentManagement::AppManager::GetTrustLevel((ContentManagement::AppManager *)(a1 - 40), a2);
}
