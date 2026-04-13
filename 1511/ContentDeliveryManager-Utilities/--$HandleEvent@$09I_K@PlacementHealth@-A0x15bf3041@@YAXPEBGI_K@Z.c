/*
 * XREFs of ??$HandleEvent@$09I_K@PlacementHealth@?A0x15bf3041@@YAXPEBGI_K@Z @ 0x1800189FC
 * Callers:
 *     ?GetImpressionEventExpirationTime@?A0x15bf3041@@YA_KPEBG0_K@Z @ 0x18000DE38 (-GetImpressionEventExpirationTime@-A0x15bf3041@@YA_KPEBG0_K@Z.c)
 * Callees:
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x1800199B4 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x180019AF0 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x180019C2C (--$HandleEvent@$09I_K@-$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 */

int __fastcall `anonymous namespace'::PlacementHealth::HandleEvent<10,unsigned int,unsigned __int64>(
        LPCWCH lpString1,
        unsigned int a2,
        __int64 a3)
{
  int result; // eax

  if ( CompareStringOrdinal(lpString1, -1, L"LockScreen", -1, 1) == 2 )
    return CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>(
             a2,
             a3);
  if ( CompareStringOrdinal(lpString1, -1, L"LockScreenOverlay", -1, 1) == 2 )
    return CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<10,unsigned int,unsigned __int64>(
             a2,
             a3);
  result = CompareStringOrdinal(lpString1, -1, L"StartMenu", -1, 1);
  if ( result == 2 )
    return CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<10,unsigned int,unsigned __int64>(
             a2,
             a3);
  return result;
}
