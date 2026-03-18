/*
 * XREFs of DmmEnableModeResetOnMonitorEvent @ 0x1C01758E8
 * Callers:
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C0126EB8 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C013F898 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z.c)
 *     MonitorDRTTest @ 0x1C0182198 (MonitorDRTTest.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmEnableModeResetOnMonitorEvent(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax

  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdError(0LL);
LABEL_3:
    WdLogEvent5_WdError(v4);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(_QWORD *)(a1 + 1976);
  if ( !v11 )
  {
    v4 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v4 + 24) = a1;
    goto LABEL_3;
  }
  v12 = *(_QWORD *)(v11 + 88);
  if ( v12 )
  {
    if ( a2 )
    {
      if ( !*(_DWORD *)(v12 + 480) )
      {
        v14 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
        WdLogEvent5_WdAssertion(v14);
      }
      --*(_DWORD *)(v12 + 480);
    }
    else
    {
      ++*(_DWORD *)(v12 + 480);
    }
    return 0LL;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3223192373LL;
  }
}
