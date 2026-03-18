/*
 * XREFs of ?ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0183E00
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?_ReleaseMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0186430 (-_ReleaseMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 */

__int64 __fastcall DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::ReleaseFrequencyRangeInfo(
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *const a1,
        struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edi
  int MonitorFromHandle; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  struct DXGMONITOR *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  int v26; // eax
  struct _ERESOURCE *v27; // rcx
  struct DXGMONITOR *v29; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 7026);
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = a2;
  if ( a2 )
  {
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v29);
    if ( MonitorFromHandle == -1073741816 )
    {
      v17 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v17 + 24) = a1;
      WdLogEvent5_WdError(v17);
      v11 = -1071774949;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
        WdLogEvent5_WdAssertion(v18);
      }
      v19 = v29;
      if ( !v29 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
        WdLogEvent5_WdAssertion(v20);
        v25 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
        WdLogEvent5_WdAssertion(v25);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v19 + 240), 1u);
      v26 = DXGMONITOR::_ReleaseMonitorFreqRangeEnumerator(v19, a2);
      v27 = (struct _ERESOURCE *)((char *)v19 + 240);
      v11 = v26;
      ExReleaseResourceLite(v27);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = 0LL;
    WdLogEvent5_WdError(v8);
    v11 = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 7026);
  return v11;
}
