/*
 * XREFs of ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C0183240
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C0186330 (-_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z.c)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  struct DXGMONITOR *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  struct _ERESOURCE *v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  struct DXGMONITOR *v35; // [rsp+30h] [rbp+8h] BYREF

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
      MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v35);
      if ( MonitorFromHandle == -1073741816 )
      {
        v19 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v19 + 24) = a1;
        WdLogEvent5_WdError(v19);
        NextMonitorModeEnumerator = -1071774943;
      }
      else
      {
        if ( MonitorFromHandle < 0 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
          WdLogEvent5_WdAssertion(v20);
        }
        v21 = v35;
        if ( !v35 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
          WdLogEvent5_WdAssertion(v22);
          v27 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
          WdLogEvent5_WdAssertion(v27);
        }
        KeEnterCriticalRegion();
        v28 = (struct _ERESOURCE *)((char *)v21 + 240);
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v21 + 240), 1u);
        NextMonitorModeEnumerator = DXGMONITOR::_GetNextMonitorModeEnumerator(v21, a2, a3);
        if ( !NextMonitorModeEnumerator && !*a3 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
          WdLogEvent5_WdAssertion(v33);
        }
        ExReleaseResourceLite(v28);
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
