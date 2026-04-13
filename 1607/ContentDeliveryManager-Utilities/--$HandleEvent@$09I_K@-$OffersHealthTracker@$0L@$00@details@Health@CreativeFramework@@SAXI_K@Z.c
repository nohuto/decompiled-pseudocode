/*
 * XREFs of ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B4DC
 * Callers:
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_ @ 0x18002991C (_anonymous_namespace_--PlacementHealth--HandleEvent_10_unsigned_int_unsigned___int64_.c)
 * Callees:
 *     ?ReadPlacementReportedInfo@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002AA18 (-ReadPlacementReportedInfo@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ??0?$OffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D640 (--0-$OffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ?WritePlacementReportedInfo@?$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002DCA8 (-WritePlacementReportedInfo@-$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     atexit @ 0x180058D18 (atexit.c)
 */

// Hidden C++ exception states: #wind=1
DWORD __fastcall CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<10,unsigned int,unsigned __int64>(
        int a1,
        __int64 a2)
{
  DWORD result; // eax
  unsigned __int64 v5; // rbx
  struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp+10h] BYREF

  if ( (`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::`local static guard' & 1) == 0 )
  {
    `CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::`local static guard' |= 1u;
    CreativeFramework::Health::details::OffersHealthTracker<11,1>::OffersHealthTracker<11,1>(&`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
    atexit(`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::`dynamic atexit destructor for 's_traits'');
  }
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  result = SystemTimeAsFileTime.dwLowDateTime;
  v5 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  if ( !byte_18008C5C3 )
    result = CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  if ( v5 != qword_18008C560 )
  {
    qword_18008C560 = v5;
    byte_18008C5C2 = 1;
    result = CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  }
  if ( !byte_18008C5C3 )
    result = CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  if ( v5 != qword_18008C568 )
  {
    qword_18008C568 = v5;
    byte_18008C5C2 = 1;
    result = CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  }
  if ( !byte_18008C5C3 )
    result = CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  if ( a1 != dword_18008C578 )
  {
    dword_18008C578 = a1;
    byte_18008C5C2 = 1;
    result = CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  }
  if ( !byte_18008C5C3 )
    result = CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  if ( a2 != qword_18008C570 )
  {
    qword_18008C570 = a2;
    byte_18008C5C2 = 1;
    return CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  }
  return result;
}
