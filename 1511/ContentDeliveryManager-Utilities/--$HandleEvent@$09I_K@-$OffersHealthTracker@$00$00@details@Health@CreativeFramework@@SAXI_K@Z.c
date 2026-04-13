/*
 * XREFs of ??$HandleEvent@$09I_K@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x1800199B4
 * Callers:
 *     ??$HandleEvent@$09I_K@PlacementHealth@?A0x15bf3041@@YAXPEBGI_K@Z @ 0x1800189FC (--$HandleEvent@$09I_K@PlacementHealth@-A0x15bf3041@@YAXPEBGI_K@Z.c)
 * Callees:
 *     ?ReadPlacementReportedInfo@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x180019918 (-ReadPlacementReportedInfo@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ??0?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18001A078 (--0-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ?WritePlacementReportedInfo@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x18001AA50 (-WritePlacementReportedInfo@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     atexit @ 0x180027D64 (atexit.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>(
        int a1,
        __int64 a2)
{
  struct _FILETIME v4; // rbx
  struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp+10h] BYREF

  if ( (`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::`local static guard' & 1) == 0 )
  {
    `CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::`local static guard' |= 1u;
    CreativeFramework::Health::details::OffersHealthTracker<1,1>::OffersHealthTracker<1,1>(&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
    atexit(`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::`dynamic atexit destructor for 's_traits'');
  }
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  if ( !byte_18003E20B )
    CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  v4 = SystemTimeAsFileTime;
  if ( SystemTimeAsFileTime != qword_18003E1A8 )
  {
    qword_18003E1A8 = (__int64)SystemTimeAsFileTime;
    byte_18003E20A = 1;
    CreativeFramework::Health::details::BaseScenarioEvents<3>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  }
  if ( !byte_18003E20B )
    CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  if ( v4 != qword_18003E1B0 )
  {
    qword_18003E1B0 = (__int64)v4;
    byte_18003E20A = 1;
    CreativeFramework::Health::details::BaseScenarioEvents<3>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  }
  if ( !byte_18003E20B )
    CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  if ( a1 != dword_18003E1C0 )
  {
    dword_18003E1C0 = a1;
    byte_18003E20A = 1;
    CreativeFramework::Health::details::BaseScenarioEvents<3>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  }
  if ( !byte_18003E20B )
    CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  if ( a2 != qword_18003E1B8 )
  {
    qword_18003E1B8 = a2;
    byte_18003E20A = 1;
    CreativeFramework::Health::details::BaseScenarioEvents<3>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<10,unsigned int,unsigned __int64>'::`2'::s_traits);
  }
}
