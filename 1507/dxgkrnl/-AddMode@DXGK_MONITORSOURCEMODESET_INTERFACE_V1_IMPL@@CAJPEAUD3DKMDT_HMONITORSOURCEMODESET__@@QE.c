/*
 * XREFs of ?AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C8160
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C97D4 (-_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AddMode(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int MonitorFromHandle; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGMONITOR *v13; // rdi
  unsigned int inserted; // eax
  struct _ERESOURCE *v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  struct DXGMONITOR *v29; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 7021);
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = a1;
  if ( a2 )
  {
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v29);
    if ( MonitorFromHandle == -1073741816 )
    {
      v21 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v21 + 24) = a1;
      WdLogEvent5_WdError(v21);
      v16 = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
        WdLogEvent5_WdAssertion(v22);
      }
      v13 = v29;
      if ( !v29 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
        WdLogEvent5_WdAssertion(v23);
        v28 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
        WdLogEvent5_WdAssertion(v28);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v13 + 240), 1u);
      inserted = DXGMONITOR::_InsertMonitorSourceMode(v13, a2);
      v15 = (struct _ERESOURCE *)((char *)v13 + 240);
      v16 = inserted;
      ExReleaseResourceLite(v15);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v20 + 24) = 0LL;
    *(_QWORD *)(v20 + 32) = a1;
    WdLogEvent5_WdError(v20);
    v16 = -1071774942;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 7021);
  return v16;
}
