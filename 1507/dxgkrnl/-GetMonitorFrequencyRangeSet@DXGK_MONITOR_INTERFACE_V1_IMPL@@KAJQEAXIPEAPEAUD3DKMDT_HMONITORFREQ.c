/*
 * XREFs of ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C01838F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0009270 (DpiGetDxgAdapter.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     MonitorGetMonitorHandle @ 0x1C00AF52C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AF9EC (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorFrequencyRangeSet(
        __int64 a1,
        __int64 a2,
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ **a3,
        const struct _DXGK_MONITORFREQUENCYRANGESET_INTERFACE **a4)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGADAPTER *DxgAdapter; // rax
  __int64 v14; // rcx
  DXGADAPTER *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  int MonitorHandle; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct HDXGMONITOR__ *v30; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  v7 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 7054);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v8[3] = v7;
  v8[4] = v6;
  v8[5] = a3;
  v8[6] = a4;
  if ( !a3 )
  {
    v10 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v10 + 32) = v7;
LABEL_8:
    *(_QWORD *)(v10 + 24) = 0LL;
    WdLogEvent5_WdError(v10);
    LODWORD(v7) = -1073741811;
    goto LABEL_21;
  }
  *a3 = 0LL;
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v10 + 32) = v6;
    goto LABEL_8;
  }
  *a4 = 0LL;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(v7);
  v15 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_13;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v14, v16, v17, v18);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( *((_QWORD *)v15 + 247) )
  {
    LOBYTE(v17) = 1;
    MonitorHandle = MonitorGetMonitorHandle(
                      v15,
                      (unsigned int)v6,
                      v17,
                      DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorFrequencyRangeSet,
                      &v30);
    v7 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v26 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      *(_QWORD *)(v26 + 24) = v6;
      WdLogEvent5_WdWarning(v26);
      LODWORD(v7) = -1071774920;
    }
    else if ( MonitorHandle >= 0 )
    {
      v7 = (__int64)v30;
      if ( !v30 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
        WdLogEvent5_WdAssertion(v28);
      }
      *a3 = (struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *)v7;
      *a4 = &DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::DxgMonitorFrequencyRangeSetInterfaceV1;
      MonitorReleaseMonitorHandle(
        v15,
        (struct HDXGMONITOR__ *)v7,
        DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorFrequencyRangeSet,
        v25);
      LODWORD(v7) = 0;
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v27 + 24) = v6;
      *(_QWORD *)(v27 + 32) = v7;
      WdLogEvent5_WdError(v27);
    }
  }
  else
  {
LABEL_13:
    v20 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v20 + 24) = v7;
    WdLogEvent5_WdError(v20);
    LODWORD(v7) = -1071775742;
  }
LABEL_21:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v11, &EventProfilerExit, v12, 7054);
  return (unsigned int)v7;
}
