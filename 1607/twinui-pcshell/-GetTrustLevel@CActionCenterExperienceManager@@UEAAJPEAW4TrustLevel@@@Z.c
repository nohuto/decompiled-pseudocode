/*
 * XREFs of ?GetTrustLevel@CActionCenterExperienceManager@@UEAAJPEAW4TrustLevel@@@Z @ 0x18000FCA0
 * Callers:
 *     ?GetTrustLevel@CActionCenterExperienceManager@@WEI@EAAJPEAW4TrustLevel@@@Z @ 0x180015BD0 (-GetTrustLevel@CActionCenterExperienceManager@@WEI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CActionCenterExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x180015DF0 (-GetTrustLevel@CActionCenterExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CActionCenterExperienceManager::GetTrustLevel(
        CActionCenterExperienceManager *this,
        enum TrustLevel *a2)
{
  *a2 = FullTrust;
  return 0LL;
}
