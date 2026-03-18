/*
 * XREFs of DmmEnableModeResetOnMonitorEvent @ 0x1C01A378C
 * Callers:
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014DE48 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01697E0 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     MonitorDRTTest @ 0x1C01AFF3C (MonitorDRTTest.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmEnableModeResetOnMonitorEvent(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax

  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdError(0LL);
LABEL_3:
    WdLogEvent5_WdError(v4);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *(_QWORD *)(a1 + 2128);
  if ( !v8 )
  {
    v4 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v4 + 24) = a1;
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( v9 )
  {
    if ( a2 )
    {
      if ( !*(_DWORD *)(v9 + 480) )
      {
        v11 = WdLogNewEntry5_WdAssertion(v6);
        WdLogEvent5_WdAssertion(v11);
      }
      --*(_DWORD *)(v9 + 480);
    }
    else
    {
      ++*(_DWORD *)(v9 + 480);
    }
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = a1;
    WdLogEvent5_WdError(v10);
    return 3223192373LL;
  }
}
