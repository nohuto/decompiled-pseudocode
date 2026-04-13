/*
 * XREFs of ??$HandleEvent@$08$$$V@PlacementHealth@?A0x15bf3041@@YAXPEBG@Z @ 0x180019D68
 * Callers:
 *     _lambda_31b30073c32c2d01143855768ac2b990_::operator() @ 0x18000E860 (_lambda_31b30073c32c2d01143855768ac2b990_--operator().c)
 * Callees:
 *     ?ReadPlacementReportedInfo@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x180019918 (-ReadPlacementReportedInfo@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ??0?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18001A078 (--0-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18001A2D0 (--0-$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18001A3FC (--0-$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ?WritePlacementReportedInfo@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x18001AA50 (-WritePlacementReportedInfo@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     atexit @ 0x180027D64 (atexit.c)
 */

// Hidden C++ exception states: #wind=3
DWORD __fastcall `anonymous namespace'::PlacementHealth::HandleEvent<9,>(LPCWCH lpString1)
{
  DWORD result; // eax
  struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp+10h] BYREF

  if ( CompareStringOrdinal(lpString1, -1, L"LockScreen", -1, 1) == 2 )
  {
    if ( (`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<9,>'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<9,>'::`2'::`local static guard' |= 1u;
      CreativeFramework::Health::details::OffersHealthTracker<1,1>::OffersHealthTracker<1,1>(&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<9,>'::`2'::s_traits);
      atexit(`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<9,>'::`2'::`dynamic atexit destructor for 's_traits'');
    }
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    if ( !byte_18003E12B )
      CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<9,>'::`2'::s_traits);
    result = SystemTimeAsFileTime.dwLowDateTime;
    if ( SystemTimeAsFileTime != qword_18003E0C8 )
    {
      qword_18003E0C8 = (__int64)SystemTimeAsFileTime;
      byte_18003E12A = 1;
      return CreativeFramework::Health::details::BaseScenarioEvents<3>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<9,>'::`2'::s_traits);
    }
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"LockScreenOverlay", -1, 1) == 2 )
  {
    if ( (`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<9,>'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<9,>'::`2'::`local static guard' |= 1u;
      CreativeFramework::Health::details::OffersHealthTracker<2,1>::OffersHealthTracker<2,1>(&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<9,>'::`2'::s_traits);
      atexit(`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<9,>'::`2'::`dynamic atexit destructor for 's_traits'');
    }
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    if ( !byte_18003E48B )
      CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<9,>'::`2'::s_traits);
    result = SystemTimeAsFileTime.dwLowDateTime;
    if ( SystemTimeAsFileTime != qword_18003E428 )
    {
      qword_18003E428 = (__int64)SystemTimeAsFileTime;
      byte_18003E48A = 1;
      return CreativeFramework::Health::details::BaseScenarioEvents<3>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<9,>'::`2'::s_traits);
    }
  }
  else
  {
    result = CompareStringOrdinal(lpString1, -1, L"StartMenu", -1, 1);
    if ( result == 2 )
    {
      if ( (`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<9,>'::`2'::`local static guard' & 1) == 0 )
      {
        `CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<9,>'::`2'::`local static guard' |= 1u;
        CreativeFramework::Health::details::OffersHealthTracker<3,1>::OffersHealthTracker<3,1>(&`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<9,>'::`2'::s_traits);
        atexit(`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<9,>'::`2'::`dynamic atexit destructor for 's_traits'');
      }
      GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
      if ( !byte_18003E66B )
        CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<9,>'::`2'::s_traits);
      result = SystemTimeAsFileTime.dwLowDateTime;
      if ( SystemTimeAsFileTime != qword_18003E608 )
      {
        qword_18003E608 = (__int64)SystemTimeAsFileTime;
        byte_18003E66A = 1;
        return CreativeFramework::Health::details::BaseScenarioEvents<3>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<9,>'::`2'::s_traits);
      }
    }
  }
  return result;
}
