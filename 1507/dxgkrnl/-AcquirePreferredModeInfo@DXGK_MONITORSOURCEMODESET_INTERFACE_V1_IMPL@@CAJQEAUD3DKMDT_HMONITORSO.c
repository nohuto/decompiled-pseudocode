/*
 * XREFs of ?AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0183560
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C9710 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePreferredModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  int MonitorFromHandle; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  struct _ERESOURCE *p_PixelRate; // rbp
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v35; // rsi
  __int64 v36; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v38; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 7017);
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, (struct DXGMONITOR **)&v38);
    if ( MonitorFromHandle == -1073741816 )
    {
      v17 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v17 + 24) = a1;
      WdLogEvent5_WdError(v17);
      v11 = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
        WdLogEvent5_WdAssertion(v18);
      }
      v19 = v38;
      if ( !v38 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
        WdLogEvent5_WdAssertion(v20);
        v25 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
        WdLogEvent5_WdAssertion(v25);
      }
      KeEnterCriticalRegion();
      p_PixelRate = (struct _ERESOURCE *)&v19[2].VideoSignalInfo.PixelRate;
      ExAcquireResourceSharedLite((PERESOURCE)&v19[2].VideoSignalInfo.PixelRate, 1u);
      v30 = *(const struct DXGMONITOR::_DMMMONITORSOURCEMODE **)&v19[1].ColorCoeffDynamicRanges.FourthChannel;
      if ( v30 )
      {
        v38 = 0LL;
        v11 = DXGMONITOR::_CreateMonitorModeEnumerator((DXGMONITOR ***)v19, v30, &v38, v29);
        if ( !v11 )
        {
          v35 = v38;
          if ( !v38 )
          {
            v36 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
            WdLogEvent5_WdAssertion(v36);
          }
          *a2 = v35;
        }
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v27, 0LL, v28, v29) + 24) = v19;
        v11 = 1075708702;
      }
      ExReleaseResourceLite(p_PixelRate);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = a1;
    WdLogEvent5_WdError(v8);
    v11 = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 7017);
  return v11;
}
