/*
 * XREFs of ?AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1C01B1120
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0001BB0 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?_GetNextMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU2@@Z @ 0x1C01B44A8 (-_GetNextMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPE.c)
 */

__int64 __fastcall DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::AcquireNextFrequencyRangeInfo(
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *const a1,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3,
        __int64 a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int NextMonitorFreqRangeEnumerator; // edi
  int MonitorFromHandle; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  struct DXGMONITOR *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _ERESOURCE *v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // rax
  struct DXGMONITOR *v25; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 7025);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v7[3] = a1;
  v7[4] = a2;
  v7[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v25);
    if ( MonitorFromHandle == -1073741816 )
    {
      v15 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v15 + 24) = a1;
      WdLogEvent5_WdError(v15);
      NextMonitorFreqRangeEnumerator = -1071774949;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v16);
      }
      v17 = v25;
      if ( !v25 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v18);
        v20 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v20);
      }
      KeEnterCriticalRegion();
      v21 = (struct _ERESOURCE *)((char *)v17 + 240);
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 240), 1u);
      NextMonitorFreqRangeEnumerator = DXGMONITOR::_GetNextMonitorFreqRangeEnumerator(v17, a2, a3);
      if ( !NextMonitorFreqRangeEnumerator && !*a3 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v23);
      }
      ExReleaseResourceLite(v21);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v9[3] = 0LL;
    v9[4] = a2;
    v9[5] = a1;
    WdLogEvent5_WdError(v9);
    NextMonitorFreqRangeEnumerator = -1073741811;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v10, &EventProfilerExit, v11, 7025);
  return NextMonitorFreqRangeEnumerator;
}
