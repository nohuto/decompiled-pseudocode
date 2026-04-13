/*
 * XREFs of _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x18002B8B4
 * Callers:
 *     ??$ExecuteHandlerByEventPolicy@V_lambda_3824f3ba179c9c834d671447a577c27a_@@@ContentManagement@@YAJPEBGPEAUICreativeEventReportedCache@0@PEAUHSTRING__@@W4CreativeEventType@0@2$$QEAV_lambda_3824f3ba179c9c834d671447a577c27a_@@@Z @ 0x180029BA4 (--$ExecuteHandlerByEventPolicy@V_lambda_3824f3ba179c9c834d671447a577c27a_@@@ContentManagement@@Y.c)
 * Callees:
 *     ?ReadPlacementReportedInfo@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002AA18 (-ReadPlacementReportedInfo@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ??0?$OffersHealthTracker@$0BA@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D014 (--0-$OffersHealthTracker@$0BA@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$0P@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D150 (--0-$OffersHealthTracker@$0P@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$0O@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D28C (--0-$OffersHealthTracker@$0O@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$0N@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D3C8 (--0-$OffersHealthTracker@$0N@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$0M@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D504 (--0-$OffersHealthTracker@$0M@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D640 (--0-$OffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D77C (--0-$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D8B8 (--0-$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D9F4 (--0-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ?WritePlacementReportedInfo@?$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002DCA8 (-WritePlacementReportedInfo@-$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     atexit @ 0x180058D18 (atexit.c)
 */

// Hidden C++ exception states: #wind=9
DWORD __fastcall anonymous_namespace_::PlacementHealth::HandleEvent_9_(LPCWCH lpString1)
{
  DWORD result; // eax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp+18h] BYREF

  if ( CompareStringOrdinal(lpString1, -1, L"LockScreen", -1, 1) == 2 )
  {
    if ( (`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<9,>'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<9,>'::`2'::`local static guard' |= 1u;
      CreativeFramework::Health::details::OffersHealthTracker<1,1>::OffersHealthTracker<1,1>(&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<9,>'::`2'::s_traits);
      atexit(`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<9,>'::`2'::`dynamic atexit destructor for 's_traits'');
    }
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    result = SystemTimeAsFileTime.dwLowDateTime;
    v3 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    if ( !byte_18008CA33 )
      result = CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<9,>'::`2'::s_traits);
    if ( v3 != qword_18008C9D0 )
    {
      qword_18008C9D0 = v3;
      byte_18008CA32 = 1;
      return CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<9,>'::`2'::s_traits);
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
    result = SystemTimeAsFileTime.dwLowDateTime;
    v4 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    if ( !byte_18008CE93 )
      result = CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<9,>'::`2'::s_traits);
    if ( v4 != qword_18008CE30 )
    {
      qword_18008CE30 = v4;
      byte_18008CE92 = 1;
      return CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<9,>'::`2'::s_traits);
    }
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"StartMenu", -1, 1) == 2 )
  {
    if ( (`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<9,>'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<9,>'::`2'::`local static guard' |= 1u;
      CreativeFramework::Health::details::OffersHealthTracker<3,1>::OffersHealthTracker<3,1>(&`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<9,>'::`2'::s_traits);
      atexit(`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<9,>'::`2'::`dynamic atexit destructor for 's_traits'');
    }
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    result = SystemTimeAsFileTime.dwLowDateTime;
    v5 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    if ( !byte_18008D673 )
      result = CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<9,>'::`2'::s_traits);
    if ( v5 != qword_18008D610 )
    {
      qword_18008D610 = v5;
      byte_18008D672 = 1;
      return CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<9,>'::`2'::s_traits);
    }
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280810", -1, 1) == 2 )
  {
    if ( (`CreativeFramework::Health::details::OffersHealthTracker<13,1>::HandleEvent<9,>'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Health::details::OffersHealthTracker<13,1>::HandleEvent<9,>'::`2'::`local static guard' |= 1u;
      CreativeFramework::Health::details::OffersHealthTracker<13,1>::OffersHealthTracker<13,1>(&`CreativeFramework::Health::details::OffersHealthTracker<13,1>::HandleEvent<9,>'::`2'::s_traits);
      atexit(`CreativeFramework::Health::details::OffersHealthTracker<13,1>::HandleEvent<9,>'::`2'::`dynamic atexit destructor for 's_traits'');
    }
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    result = SystemTimeAsFileTime.dwLowDateTime;
    v6 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    if ( !byte_18008C4E3 )
      result = CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<13,1>::HandleEvent<9,>'::`2'::s_traits);
    if ( v6 != qword_18008C480 )
    {
      qword_18008C480 = v6;
      byte_18008C4E2 = 1;
      return CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<13,1>::HandleEvent<9,>'::`2'::s_traits);
    }
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280811", -1, 1) == 2 )
  {
    if ( (`CreativeFramework::Health::details::OffersHealthTracker<14,1>::HandleEvent<9,>'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Health::details::OffersHealthTracker<14,1>::HandleEvent<9,>'::`2'::`local static guard' |= 1u;
      CreativeFramework::Health::details::OffersHealthTracker<14,1>::OffersHealthTracker<14,1>(&`CreativeFramework::Health::details::OffersHealthTracker<14,1>::HandleEvent<9,>'::`2'::s_traits);
      atexit(`CreativeFramework::Health::details::OffersHealthTracker<14,1>::HandleEvent<9,>'::`2'::`dynamic atexit destructor for 's_traits'');
    }
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    result = SystemTimeAsFileTime.dwLowDateTime;
    v7 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    if ( !byte_18008D763 )
      result = CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<14,1>::HandleEvent<9,>'::`2'::s_traits);
    if ( v7 != qword_18008D700 )
    {
      qword_18008D700 = v7;
      byte_18008D762 = 1;
      return CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<14,1>::HandleEvent<9,>'::`2'::s_traits);
    }
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280812", -1, 1) == 2 )
  {
    if ( (`CreativeFramework::Health::details::OffersHealthTracker<12,1>::HandleEvent<9,>'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Health::details::OffersHealthTracker<12,1>::HandleEvent<9,>'::`2'::`local static guard' |= 1u;
      CreativeFramework::Health::details::OffersHealthTracker<12,1>::OffersHealthTracker<12,1>(&`CreativeFramework::Health::details::OffersHealthTracker<12,1>::HandleEvent<9,>'::`2'::s_traits);
      atexit(`CreativeFramework::Health::details::OffersHealthTracker<12,1>::HandleEvent<9,>'::`2'::`dynamic atexit destructor for 's_traits'');
    }
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    result = SystemTimeAsFileTime.dwLowDateTime;
    v8 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    if ( !byte_18008C863 )
      result = CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<12,1>::HandleEvent<9,>'::`2'::s_traits);
    if ( v8 != qword_18008C800 )
    {
      qword_18008C800 = v8;
      byte_18008C862 = 1;
      return CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<12,1>::HandleEvent<9,>'::`2'::s_traits);
    }
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280813", -1, 1) == 2 )
  {
    if ( (`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<9,>'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<9,>'::`2'::`local static guard' |= 1u;
      CreativeFramework::Health::details::OffersHealthTracker<11,1>::OffersHealthTracker<11,1>(&`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<9,>'::`2'::s_traits);
      atexit(`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<9,>'::`2'::`dynamic atexit destructor for 's_traits'');
    }
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    result = SystemTimeAsFileTime.dwLowDateTime;
    v9 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    if ( !byte_18008CDB3 )
      result = CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<9,>'::`2'::s_traits);
    if ( v9 != qword_18008CD50 )
    {
      qword_18008CD50 = v9;
      byte_18008CDB2 = 1;
      return CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<11,1>::HandleEvent<9,>'::`2'::s_traits);
    }
  }
  else if ( CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280817", -1, 1) == 2 )
  {
    if ( (`CreativeFramework::Health::details::OffersHealthTracker<15,1>::HandleEvent<9,>'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Health::details::OffersHealthTracker<15,1>::HandleEvent<9,>'::`2'::`local static guard' |= 1u;
      CreativeFramework::Health::details::OffersHealthTracker<15,1>::OffersHealthTracker<15,1>(&`CreativeFramework::Health::details::OffersHealthTracker<15,1>::HandleEvent<9,>'::`2'::s_traits);
      atexit(`CreativeFramework::Health::details::OffersHealthTracker<15,1>::HandleEvent<9,>'::`2'::`dynamic atexit destructor for 's_traits'');
    }
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    result = SystemTimeAsFileTime.dwLowDateTime;
    v10 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    if ( !byte_18008D053 )
      result = CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<15,1>::HandleEvent<9,>'::`2'::s_traits);
    if ( v10 != qword_18008CFF0 )
    {
      qword_18008CFF0 = v10;
      byte_18008D052 = 1;
      return CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<15,1>::HandleEvent<9,>'::`2'::s_traits);
    }
  }
  else
  {
    result = CompareStringOrdinal(lpString1, -1, L"SubscribedContent-280797", -1, 1);
    if ( result == 2 )
    {
      if ( (`CreativeFramework::Health::details::OffersHealthTracker<16,1>::HandleEvent<9,>'::`2'::`local static guard' & 1) == 0 )
      {
        `CreativeFramework::Health::details::OffersHealthTracker<16,1>::HandleEvent<9,>'::`2'::`local static guard' |= 1u;
        CreativeFramework::Health::details::OffersHealthTracker<16,1>::OffersHealthTracker<16,1>(&`CreativeFramework::Health::details::OffersHealthTracker<16,1>::HandleEvent<9,>'::`2'::s_traits);
        atexit(`CreativeFramework::Health::details::OffersHealthTracker<16,1>::HandleEvent<9,>'::`2'::`dynamic atexit destructor for 's_traits'');
      }
      GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
      result = SystemTimeAsFileTime.dwLowDateTime;
      v11 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
      if ( !byte_18008D213 )
        result = CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo((__int64)&`CreativeFramework::Health::details::OffersHealthTracker<16,1>::HandleEvent<9,>'::`2'::s_traits);
      if ( v11 != qword_18008D1B0 )
      {
        qword_18008D1B0 = v11;
        byte_18008D212 = 1;
        return CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(&`CreativeFramework::Health::details::OffersHealthTracker<16,1>::HandleEvent<9,>'::`2'::s_traits);
      }
    }
  }
  return result;
}
