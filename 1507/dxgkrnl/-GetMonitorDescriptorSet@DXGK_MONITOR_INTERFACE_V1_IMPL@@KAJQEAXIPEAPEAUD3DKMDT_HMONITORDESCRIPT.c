/*
 * XREFs of ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C00DE3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0009270 (DpiGetDxgAdapter.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     MonitorGetMonitorHandle @ 0x1C00AF52C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AF9EC (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorDescriptorSet(
        __int64 a1,
        __int64 a2,
        struct D3DKMDT_HMONITORDESCRIPTORSET__ **a3,
        const struct _DXGK_MONITORDESCRIPTORSET_INTERFACE **a4)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  DXGADAPTER *DxgAdapter; // rax
  __int64 v11; // rcx
  DXGADAPTER *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int MonitorHandle; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct HDXGMONITOR__ *v30; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  v7 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 7055);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v8[3] = v7;
  v8[4] = v6;
  v8[5] = a3;
  v8[6] = a4;
  if ( !a3 )
  {
    v25 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v25 + 32) = v7;
LABEL_20:
    *(_QWORD *)(v25 + 24) = 0LL;
    WdLogEvent5_WdError(v25);
    LODWORD(v7) = -1073741811;
    goto LABEL_13;
  }
  *a3 = 0LL;
  if ( !a4 )
  {
    v25 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v25 + 32) = v6;
    goto LABEL_20;
  }
  *a4 = 0LL;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(v7);
  v12 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_15;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v11, v13, v14, v15);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( *((_QWORD *)v12 + 247) )
  {
    LOBYTE(v14) = 1;
    MonitorHandle = MonitorGetMonitorHandle(
                      v12,
                      (unsigned int)v6,
                      v14,
                      DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorDescriptorSet,
                      &v30);
    v7 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v27 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      *(_QWORD *)(v27 + 24) = v6;
      WdLogEvent5_WdWarning(v27);
      LODWORD(v7) = -1071774920;
    }
    else if ( MonitorHandle < 0 )
    {
      v28 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v28 + 24) = v6;
      *(_QWORD *)(v28 + 32) = v7;
      WdLogEvent5_WdError(v28);
    }
    else
    {
      v7 = (__int64)v30;
      if ( !v30 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        WdLogEvent5_WdAssertion(v29);
      }
      *a3 = (struct D3DKMDT_HMONITORDESCRIPTORSET__ *)v7;
      *a4 = &DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::DxgMonitorDescriptorSetInterfaceV1;
      MonitorReleaseMonitorHandle(
        v12,
        (struct HDXGMONITOR__ *)v7,
        DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorDescriptorSet,
        v20);
      LODWORD(v7) = 0;
    }
  }
  else
  {
LABEL_15:
    v24 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v24 + 24) = v7;
    WdLogEvent5_WdError(v24);
    LODWORD(v7) = -1071775742;
  }
LABEL_13:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v21, &EventProfilerExit, v22, 7055);
  return (unsigned int)v7;
}
