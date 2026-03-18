/*
 * XREFs of ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C01878F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C018AB40 (-_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE **a3,
        __int64 a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int NextMonitorModeEnumerator; // ebx
  __int64 v13; // rax
  int MonitorFromHandle; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  struct DXGMONITOR *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct _ERESOURCE *v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // rax
  struct DXGMONITOR *v26; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 7019);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v7[3] = a2;
  v7[4] = a1;
  v7[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a2 )
    {
      MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v26);
      if ( MonitorFromHandle == -1073741816 )
      {
        v16 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v16 + 24) = a1;
        WdLogEvent5_WdError(v16);
        NextMonitorModeEnumerator = -1071774943;
      }
      else
      {
        if ( MonitorFromHandle < 0 )
        {
          v17 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v17);
        }
        v18 = v26;
        if ( !v26 )
        {
          v19 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v19);
          v21 = WdLogNewEntry5_WdAssertion(v20);
          WdLogEvent5_WdAssertion(v21);
        }
        KeEnterCriticalRegion();
        v22 = (struct _ERESOURCE *)((char *)v18 + 240);
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v18 + 240), 1u);
        NextMonitorModeEnumerator = DXGMONITOR::_GetNextMonitorModeEnumerator(v18, a2, a3);
        if ( !NextMonitorModeEnumerator && !*a3 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v23);
          WdLogEvent5_WdAssertion(v24);
        }
        ExReleaseResourceLite(v22);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v13 + 24) = 0LL;
      WdLogEvent5_WdError(v13);
      NextMonitorModeEnumerator = -1071774942;
    }
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v9[3] = 0LL;
    v9[4] = a2;
    v9[5] = a1;
    WdLogEvent5_WdError(v9);
    NextMonitorModeEnumerator = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v10, &EventProfilerExit, v11, 7019);
  return NextMonitorModeEnumerator;
}
