/*
 * XREFs of ?AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0187270
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?_GetFirstMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C018A8CC (-_GetFirstMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@.c)
 */

__int64 __fastcall DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::AcquireFirstFrequencyRangeInfo(
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *const a1,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int FirstMonitorFreqRangeEnumerator; // edi
  int MonitorFromHandle; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  struct DXGMONITOR *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _ERESOURCE *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  struct DXGMONITOR *v24; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 7024);
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle((struct HDXGMONITOR__ *)a1, &v24);
    if ( MonitorFromHandle == -1073741816 )
    {
      v14 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v14 + 24) = a1;
      WdLogEvent5_WdError(v14);
      FirstMonitorFreqRangeEnumerator = -1071774949;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v15);
      }
      v16 = v24;
      if ( !v24 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v17);
        v19 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v19);
      }
      KeEnterCriticalRegion();
      v20 = (struct _ERESOURCE *)((char *)v16 + 240);
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 240), 1u);
      FirstMonitorFreqRangeEnumerator = DXGMONITOR::_GetFirstMonitorFreqRangeEnumerator(v16, a2);
      if ( !FirstMonitorFreqRangeEnumerator && !*a2 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v22);
      }
      ExReleaseResourceLite(v20);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = a1;
    WdLogEvent5_WdError(v8);
    FirstMonitorFreqRangeEnumerator = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 7024);
  return FirstMonitorFreqRangeEnumerator;
}
