/*
 * XREFs of _anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_ @ 0x18002991C
 * Callers:
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18001EED0 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 * Callees:
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002AD2C (--$HandleEvent@$09I_K@-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002AE74 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002AFBC (--$HandleEvent@$09I_K@-$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0N@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B104 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0N@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0O@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B24C (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0O@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0M@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B394 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0M@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B4DC (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0P@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B624 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0P@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0BA@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B76C (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0BA@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 */

int __fastcall anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_(
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
  if ( CompareStringOrdinal(lpString1, -1, L"StartMenu", -1, 1) == 2 )
    return CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<10,unsigned int,unsigned __int64>(
             a2,
             a3);
  if ( CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280810", -1, 1) == 2 )
    return CreativeFramework::Health::details::OffersHealthTracker<13,1>::HandleEvent<10,unsigned int,unsigned __int64>(
             a2,
             a3);
  if ( CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280811", -1, 1) == 2 )
    return CreativeFramework::Health::details::OffersHealthTracker<14,1>::HandleEvent<10,unsigned int,unsigned __int64>(
             a2,
             a3);
  if ( CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280812", -1, 1) == 2 )
    return CreativeFramework::Health::details::OffersHealthTracker<12,1>::HandleEvent<10,unsigned int,unsigned __int64>(
             a2,
             a3);
  if ( CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280813", -1, 1) == 2 )
    return CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<10,unsigned int,unsigned __int64>(
             a2,
             a3);
  if ( CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280817", -1, 1) == 2 )
    return CreativeFramework::Health::details::OffersHealthTracker<15,1>::HandleEvent<10,unsigned int,unsigned __int64>(
             a2,
             a3);
  result = CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280797", -1, 1);
  if ( result == 2 )
    return CreativeFramework::Health::details::OffersHealthTracker<16,1>::HandleEvent<10,unsigned int,unsigned __int64>(
             a2,
             a3);
  return result;
}
