/*
 * XREFs of ?GetNumModes@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEA_K@Z @ 0x1C00DE810
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::GetNumModes(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        unsigned __int64 *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edi
  int MonitorFromHandle; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGMONITOR *v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  struct DXGMONITOR *v27; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 7016);
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v8 = 0;
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v27);
    if ( MonitorFromHandle == -1073741816 )
    {
      v19 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v19 + 24) = a1;
      WdLogEvent5_WdError(v19);
      v8 = -1071774943;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
        WdLogEvent5_WdAssertion(v20);
      }
      v14 = v27;
      if ( !v27 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
        WdLogEvent5_WdAssertion(v21);
        v26 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
        WdLogEvent5_WdAssertion(v26);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v14 + 240), 1u);
      *a2 = *((unsigned int *)v14 + 38);
      ExReleaseResourceLite((PERESOURCE)((char *)v14 + 240));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v18 + 24) = 0LL;
    *(_QWORD *)(v18 + 32) = a1;
    WdLogEvent5_WdError(v18);
    v8 = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 7016);
  return v8;
}
