/*
 * XREFs of ??$HandleEvent@$09I_K@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002AD2C
 * Callers:
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_ @ 0x18002991C (_anonymous_namespace_--PlacementHealth--HandleEvent_10_unsigned_int_unsigned___int64_.c)
 * Callees:
 *     ?ReadPlacementReportedInfo@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002AA18 (-ReadPlacementReportedInfo@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ??0?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D9F4 (--0-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ?WritePlacementReportedInfo@?$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002DCA8 (-WritePlacementReportedInfo@-$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     atexit @ 0x180058D18 (atexit.c)
 */

// Hidden C++ exception states: #wind=1
DWORD __fastcall CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>(
        int a1,
        __int64 a2)
{
  DWORD result; // eax
  unsigned __int64 v5; // rbx
  struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp+10h] BYREF

  if ( (`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::`local static guard' & 1) == 0 )
  {
    `CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::`local static guard' |= 1u;
    CreativeFramework::Health::details::OffersHealthTracker<1,1>::OffersHealthTracker<1,1>(&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
    atexit(`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::`dynamic atexit destructor for 's_traits'');
  }
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  result = SystemTimeAsFileTime.dwLowDateTime;
  v5 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  if ( !byte_18008D593 )
    result = CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  if ( v5 != qword_18008D530 )
  {
    qword_18008D530 = v5;
    byte_18008D592 = 1;
    result = CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  }
  if ( !byte_18008D593 )
    result = CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  if ( v5 != qword_18008D538 )
  {
    qword_18008D538 = v5;
    byte_18008D592 = 1;
    result = CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  }
  if ( !byte_18008D593 )
    result = CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  if ( a1 != dword_18008D548 )
  {
    dword_18008D548 = a1;
    byte_18008D592 = 1;
    result = CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  }
  if ( !byte_18008D593 )
    result = CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  if ( a2 != qword_18008D540 )
  {
    qword_18008D540 = a2;
    byte_18008D592 = 1;
    return CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  }
  return result;
}
