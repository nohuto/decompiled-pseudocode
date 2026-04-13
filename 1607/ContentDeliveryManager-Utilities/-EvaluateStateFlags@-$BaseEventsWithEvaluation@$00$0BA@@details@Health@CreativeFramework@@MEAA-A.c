/*
 * XREFs of ?EvaluateStateFlags@?$BaseEventsWithEvaluation@$00$0BA@@details@Health@CreativeFramework@@MEAA?AW4HealthStateFlags@234@XZ @ 0x18002A5D0
 * Callers:
 *     <none>
 * Callees:
 *     CreativeFramework::Health::details::ResolveCommonStateFlagsFromTrackingInfo @ 0x18001ED78 (CreativeFramework--Health--details--ResolveCommonStateFlagsFromTrackingInfo.c)
 *     ?ReadPlacementReportedInfo@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002AA18 (-ReadPlacementReportedInfo@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?ReadTrackingInfo@?$BaseScenarioEvents@$0M@@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002AAB4 (-ReadTrackingInfo@-$BaseScenarioEvents@$0M@@details@Health@CreativeFramework@@AEAAXXZ.c)
 */

__int64 __fastcall CreativeFramework::Health::details::BaseEventsWithEvaluation<1,16>::EvaluateStateFlags(__int64 a1)
{
  __int64 v2; // rbx
  bool v3; // al
  unsigned __int64 v4; // rsi
  char v5; // al
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 209) )
    CreativeFramework::Health::details::BaseScenarioEvents<12>::ReadTrackingInfo();
  if ( !*(_BYTE *)(a1 + 211) )
    CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo(a1);
  v2 = CreativeFramework::Health::details::ResolveCommonStateFlagsFromTrackingInfo(a1 + 16);
  if ( *(_BYTE *)(a1 + 98) )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v3 = 0;
    v4 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    if ( *(_BYTE *)(a1 + 97) || (v2 & 0x10) != 0 )
    {
      if ( (v2 & 0x130) != 0 )
      {
        v2 |= 2uLL;
        if ( (v2 & 0x130) != 0 )
          return v2;
      }
      v2 |= 1uLL;
      goto LABEL_28;
    }
    if ( !*(_QWORD *)(a1 + 48) )
    {
      if ( *(_QWORD *)(a1 + 24) + 600000000LL > v4 || *(_QWORD *)(a1 + 32) + 600000000LL > v4 )
      {
        v5 = 1;
        v2 |= 2uLL;
      }
      else
      {
        v5 = 0;
      }
      v3 = v5 == 0;
LABEL_28:
      if ( !v3 )
        return v2;
      goto LABEL_29;
    }
    if ( (v2 & 0x80u) != 0LL )
    {
LABEL_29:
      v11 = *(_QWORD *)(a1 + 152);
      if ( v11 && !*(_WORD *)(a1 + 160) && v4 >= v11 + 36000000000LL )
        return v2 | 1;
      return v2;
    }
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v6 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    v7 = *(_QWORD *)(a1 + 32) + 600000000LL;
    v8 = *(_QWORD *)(a1 + 48);
    if ( v8 < v7 && v7 < v6 )
    {
      v2 |= 0x200uLL;
      goto LABEL_29;
    }
    if ( v8 >= *(_QWORD *)(a1 + 120) )
      return v2 | 2;
    v9 = *(_QWORD *)(a1 + 128);
    if ( !v9 )
      v9 = *(_QWORD *)(a1 + 120) + 10000000LL * *(unsigned int *)(a1 + 136);
    v10 = v9 + 6000000000LL;
    if ( *(_QWORD *)(a1 + 112) <= v10 || v6 <= v10 )
      return v2 | 2;
  }
  return v2;
}
