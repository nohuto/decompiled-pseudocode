/*
 * XREFs of ??$HandleEvent@$09I_K@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x180019AF0
 * Callers:
 *     ??$HandleEvent@$09I_K@PlacementHealth@?A0x15bf3041@@YAXPEBGI_K@Z @ 0x1800189FC (--$HandleEvent@$09I_K@PlacementHealth@-A0x15bf3041@@YAXPEBGI_K@Z.c)
 * Callees:
 *     ?ReadPlacementReportedInfo@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x180019918 (-ReadPlacementReportedInfo@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ??0?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18001A2D0 (--0-$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ?WritePlacementReportedInfo@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x18001AA50 (-WritePlacementReportedInfo@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     atexit @ 0x180027D64 (atexit.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<10,unsigned int,unsigned __int64>(
        int a1,
        __int64 a2)
{
  struct _FILETIME v4; // rbx
  struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp+10h] BYREF

  if ( (`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::`local static guard' & 1) == 0 )
  {
    `CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::`local static guard' |= 1u;
    CreativeFramework::Health::details::OffersHealthTracker<2,1>::OffersHealthTracker<2,1>(&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
    atexit(`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::`dynamic atexit destructor for 's_traits'');
  }
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  if ( !byte_18003E56B )
    CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  v4 = SystemTimeAsFileTime;
  if ( SystemTimeAsFileTime != qword_18003E508 )
  {
    qword_18003E508 = (__int64)SystemTimeAsFileTime;
    byte_18003E56A = 1;
    CreativeFramework::Health::details::BaseScenarioEvents<3>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  }
  if ( !byte_18003E56B )
    CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  if ( v4 != qword_18003E510 )
  {
    qword_18003E510 = (__int64)v4;
    byte_18003E56A = 1;
    CreativeFramework::Health::details::BaseScenarioEvents<3>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  }
  if ( !byte_18003E56B )
    CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  if ( a1 != dword_18003E520 )
  {
    dword_18003E520 = a1;
    byte_18003E56A = 1;
    CreativeFramework::Health::details::BaseScenarioEvents<3>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  }
  if ( !byte_18003E56B )
    CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  if ( a2 != qword_18003E518 )
  {
    qword_18003E518 = a2;
    byte_18003E56A = 1;
    CreativeFramework::Health::details::BaseScenarioEvents<3>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  }
}
