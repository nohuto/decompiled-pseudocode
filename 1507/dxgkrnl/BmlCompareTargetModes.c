/*
 * XREFs of BmlCompareTargetModes @ 0x1C0098EC8
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1C0098D10 (BmlGetNextBestTargetMode.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     BmlCompareRegionsWithPivot @ 0x1C0099798 (BmlCompareRegionsWithPivot.c)
 *     BmlCompareTargetModesWithMonitor @ 0x1C0099864 (BmlCompareTargetModesWithMonitor.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C009A69C (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareMonitorRegions @ 0x1C017E31C (BmlCompareMonitorRegions.c)
 */

__int64 __fastcall BmlCompareTargetModes(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned __int16 v7; // r15
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  v7 = a3;
  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !a2 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( a4 == a5 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( !a5 )
    return 1LL;
  v10 = 104LL * v7;
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)(v10 + a1 + 16) + 16LL),
           *(_DWORD *)(*(_QWORD *)(v10 + a1 + 16) + 20LL));
  if ( !Path )
  {
    v21 = WdLogNewEntry5_WdAssertion(v12, v11, v14, v15);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !*((_QWORD *)Path + 12) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v12, v11, v14, v15);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !*(_QWORD *)(*((_QWORD *)Path + 12) + 96LL) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v12, v11, v14, v15);
    WdLogEvent5_WdAssertion(v23);
  }
  result = BmlCompareTargetModesWithConstraint(a1, v7, a4, a5);
  if ( !(_DWORD)result )
  {
    LOBYTE(v17) = a6;
    result = BmlCompareTargetModesWithMonitor(a4, a5, v17, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
    if ( !(_DWORD)result )
    {
      result = BmlCompareRegionsWithPivot(
                 (struct _D3DKMDT_2DREGION *)(a4 + 84),
                 (struct _D3DKMDT_2DREGION *)(a5 + 84),
                 (struct _D3DKMDT_2DREGION *)(v10 + a1 + 52));
      if ( !(_DWORD)result )
        return BmlCompareMonitorRegions(a4, a5);
    }
  }
  return result;
}
