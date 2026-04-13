/*
 * XREFs of ?EvaluateStateFlags@?$BaseEventsWithEvaluation@$00$00@details@Health@CreativeFramework@@MEAA?AW4HealthStateFlags@234@XZ @ 0x1800194E0
 * Callers:
 *     <none>
 * Callees:
 *     CreativeFramework::Health::details::ResolveCommonStateFlagsFromTrackingInfo @ 0x18000DAF4 (CreativeFramework--Health--details--ResolveCommonStateFlagsFromTrackingInfo.c)
 *     ?ReadTrackingInfo@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x180019880 (-ReadTrackingInfo@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?ReadPlacementReportedInfo@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x180019918 (-ReadPlacementReportedInfo@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 */

__int64 __fastcall CreativeFramework::Health::details::BaseEventsWithEvaluation<1,1>::EvaluateStateFlags(__int64 a1)
{
  __int64 v2; // rdi
  bool v3; // al
  char v4; // al
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF
  struct _FILETIME v12; // [rsp+38h] [rbp+10h] BYREF

  if ( !*(_BYTE *)(a1 + 201) )
    CreativeFramework::Health::details::BaseScenarioEvents<3>::ReadTrackingInfo();
  if ( !*(_BYTE *)(a1 + 203) )
    CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo(a1);
  v2 = CreativeFramework::Health::details::ResolveCommonStateFlagsFromTrackingInfo(a1 + 16);
  if ( *(_BYTE *)(a1 + 90) )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v3 = 0;
    if ( *(_BYTE *)(a1 + 89) || (v2 & 0x10) != 0 )
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
      if ( *(_QWORD *)(a1 + 24) + 600000000LL > *(unsigned __int64 *)&SystemTimeAsFileTime
        || *(_QWORD *)(a1 + 32) + 600000000LL > *(unsigned __int64 *)&SystemTimeAsFileTime )
      {
        v4 = 1;
        v2 |= 2uLL;
      }
      else
      {
        v4 = 0;
      }
      v3 = v4 == 0;
LABEL_28:
      if ( !v3 )
        return v2;
      goto LABEL_29;
    }
    if ( (v2 & 0x80u) != 0LL )
    {
LABEL_29:
      v9 = *(_QWORD *)(a1 + 144);
      if ( v9 && !*(_WORD *)(a1 + 152) && *(unsigned __int64 *)&SystemTimeAsFileTime >= v9 + 36000000000LL )
        return v2 | 1;
      return v2;
    }
    GetSystemTimeAsFileTime(&v12);
    v5 = *(_QWORD *)(a1 + 32) + 600000000LL;
    if ( *(_QWORD *)(a1 + 48) < v5 && v5 < *(_QWORD *)&v12 )
    {
      v2 |= 0x200uLL;
      goto LABEL_29;
    }
    v6 = *(_QWORD *)(a1 + 104);
    if ( *(_QWORD *)(a1 + 48) >= v6 )
      return v2 | 2;
    v7 = *(_QWORD *)(a1 + 120);
    if ( !v7 )
      v7 = *(_QWORD *)(a1 + 112) + 10000000LL * *(unsigned int *)(a1 + 128);
    v8 = v7 + 6000000000LL;
    if ( v6 <= v8 || *(_QWORD *)&v12 <= v8 )
      return v2 | 2;
  }
  return v2;
}
