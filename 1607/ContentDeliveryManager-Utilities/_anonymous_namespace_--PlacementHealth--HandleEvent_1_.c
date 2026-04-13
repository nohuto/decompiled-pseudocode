/*
 * XREFs of _anonymous_namespace_::PlacementHealth::HandleEvent_1_ @ 0x18002BEC0
 * Callers:
 *     ??$ExecuteHandlerByEventPolicy@V_lambda_3824f3ba179c9c834d671447a577c27a_@@@ContentManagement@@YAJPEBGPEAUICreativeEventReportedCache@0@PEAUHSTRING__@@W4CreativeEventType@0@2$$QEAV_lambda_3824f3ba179c9c834d671447a577c27a_@@@Z @ 0x180029BA4 (--$ExecuteHandlerByEventPolicy@V_lambda_3824f3ba179c9c834d671447a577c27a_@@@ContentManagement@@Y.c)
 * Callees:
 *     ??0?$OffersHealthTracker@$0BA@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D014 (--0-$OffersHealthTracker@$0BA@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$0P@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D150 (--0-$OffersHealthTracker@$0P@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$0O@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D28C (--0-$OffersHealthTracker@$0O@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$0N@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D3C8 (--0-$OffersHealthTracker@$0N@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$0M@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D504 (--0-$OffersHealthTracker@$0M@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D640 (--0-$OffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D77C (--0-$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D8B8 (--0-$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D9F4 (--0-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0BA@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180030824 (-Evaluate@-$BaseScenarioEvents@$0BA@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180030AF0 (-Evaluate@-$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0L@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180030DBC (-Evaluate@-$BaseScenarioEvents@$0L@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0M@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031088 (-Evaluate@-$BaseScenarioEvents@$0M@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031354 (-Evaluate@-$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0N@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031620 (-Evaluate@-$BaseScenarioEvents@$0N@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800318EC (-Evaluate@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031BB8 (-Evaluate@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$00@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031E84 (-Evaluate@-$BaseScenarioEvents@$00@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     atexit @ 0x180058D18 (atexit.c)
 */

// Hidden C++ exception states: #wind=9
int __fastcall anonymous_namespace_::PlacementHealth::HandleEvent_1_(LPCWCH lpString1)
{
  int result; // eax

  if ( CompareStringOrdinal(lpString1, -1, L"LockScreen", -1, 1) == 2 )
  {
    if ( (`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<1,>'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<1,>'::`2'::`local static guard' |= 1u;
      CreativeFramework::Health::details::OffersHealthTracker<1,1>::OffersHealthTracker<1,1>(&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<1,>'::`2'::s_traits);
      atexit(`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<1,>'::`2'::`dynamic atexit destructor for 's_traits'');
    }
    return CreativeFramework::Health::details::BaseScenarioEvents<1>::Evaluate();
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"LockScreenOverlay", -1, 1) == 2 )
  {
    if ( (`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<1,>'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<1,>'::`2'::`local static guard' |= 1u;
      CreativeFramework::Health::details::OffersHealthTracker<2,1>::OffersHealthTracker<2,1>(&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<1,>'::`2'::s_traits);
      atexit(`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<1,>'::`2'::`dynamic atexit destructor for 's_traits'');
    }
    return CreativeFramework::Health::details::BaseScenarioEvents<2>::Evaluate();
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"StartMenu", -1, 1) == 2 )
  {
    if ( (`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<1,>'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<1,>'::`2'::`local static guard' |= 1u;
      CreativeFramework::Health::details::OffersHealthTracker<3,1>::OffersHealthTracker<3,1>(&`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<1,>'::`2'::s_traits);
      atexit(`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<1,>'::`2'::`dynamic atexit destructor for 's_traits'');
    }
    return CreativeFramework::Health::details::BaseScenarioEvents<3>::Evaluate();
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280810", -1, 1) == 2 )
  {
    if ( (`CreativeFramework::Health::details::OffersHealthTracker<13,1>::HandleEvent<1,>'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Health::details::OffersHealthTracker<13,1>::HandleEvent<1,>'::`2'::`local static guard' |= 1u;
      CreativeFramework::Health::details::OffersHealthTracker<13,1>::OffersHealthTracker<13,1>(&`CreativeFramework::Health::details::OffersHealthTracker<13,1>::HandleEvent<1,>'::`2'::s_traits);
      atexit(`CreativeFramework::Health::details::OffersHealthTracker<13,1>::HandleEvent<1,>'::`2'::`dynamic atexit destructor for 's_traits'');
    }
    return CreativeFramework::Health::details::BaseScenarioEvents<13>::Evaluate();
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280811", -1, 1) == 2 )
  {
    if ( (`CreativeFramework::Health::details::OffersHealthTracker<14,1>::HandleEvent<1,>'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Health::details::OffersHealthTracker<14,1>::HandleEvent<1,>'::`2'::`local static guard' |= 1u;
      CreativeFramework::Health::details::OffersHealthTracker<14,1>::OffersHealthTracker<14,1>(&`CreativeFramework::Health::details::OffersHealthTracker<14,1>::HandleEvent<1,>'::`2'::s_traits);
      atexit(`CreativeFramework::Health::details::OffersHealthTracker<14,1>::HandleEvent<1,>'::`2'::`dynamic atexit destructor for 's_traits'');
    }
    return CreativeFramework::Health::details::BaseScenarioEvents<14>::Evaluate();
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280812", -1, 1) == 2 )
  {
    if ( (`CreativeFramework::Health::details::OffersHealthTracker<12,1>::HandleEvent<1,>'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Health::details::OffersHealthTracker<12,1>::HandleEvent<1,>'::`2'::`local static guard' |= 1u;
      CreativeFramework::Health::details::OffersHealthTracker<12,1>::OffersHealthTracker<12,1>(&`CreativeFramework::Health::details::OffersHealthTracker<12,1>::HandleEvent<1,>'::`2'::s_traits);
      atexit(`CreativeFramework::Health::details::OffersHealthTracker<12,1>::HandleEvent<1,>'::`2'::`dynamic atexit destructor for 's_traits'');
    }
    return CreativeFramework::Health::details::BaseScenarioEvents<12>::Evaluate();
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280813", -1, 1) == 2 )
  {
    if ( (`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<1,>'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<1,>'::`2'::`local static guard' |= 1u;
      CreativeFramework::Health::details::OffersHealthTracker<11,1>::OffersHealthTracker<11,1>(&`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<1,>'::`2'::s_traits);
      atexit(`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<1,>'::`2'::`dynamic atexit destructor for 's_traits'');
    }
    return CreativeFramework::Health::details::BaseScenarioEvents<11>::Evaluate();
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280817", -1, 1) == 2 )
  {
    if ( (`CreativeFramework::Health::details::OffersHealthTracker<15,1>::HandleEvent<1,>'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Health::details::OffersHealthTracker<15,1>::HandleEvent<1,>'::`2'::`local static guard' |= 1u;
      CreativeFramework::Health::details::OffersHealthTracker<15,1>::OffersHealthTracker<15,1>(&`CreativeFramework::Health::details::OffersHealthTracker<15,1>::HandleEvent<1,>'::`2'::s_traits);
      atexit(`CreativeFramework::Health::details::OffersHealthTracker<15,1>::HandleEvent<1,>'::`2'::`dynamic atexit destructor for 's_traits'');
    }
    return CreativeFramework::Health::details::BaseScenarioEvents<15>::Evaluate();
  }
  else
  {
    result = CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280797", -1, 1);
    if ( result == 2 )
    {
      if ( (`CreativeFramework::Health::details::OffersHealthTracker<16,1>::HandleEvent<1,>'::`2'::`local static guard' & 1) == 0 )
      {
        `CreativeFramework::Health::details::OffersHealthTracker<16,1>::HandleEvent<1,>'::`2'::`local static guard' |= 1u;
        CreativeFramework::Health::details::OffersHealthTracker<16,1>::OffersHealthTracker<16,1>(&`CreativeFramework::Health::details::OffersHealthTracker<16,1>::HandleEvent<1,>'::`2'::s_traits);
        atexit(`CreativeFramework::Health::details::OffersHealthTracker<16,1>::HandleEvent<1,>'::`2'::`dynamic atexit destructor for 's_traits'');
      }
      return CreativeFramework::Health::details::BaseScenarioEvents<16>::Evaluate();
    }
  }
  return result;
}
