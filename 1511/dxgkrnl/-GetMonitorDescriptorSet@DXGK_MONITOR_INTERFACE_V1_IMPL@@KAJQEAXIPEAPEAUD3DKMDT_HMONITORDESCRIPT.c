/*
 * XREFs of ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C00E9800
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C00048A0 (DpiGetDxgAdapter.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     MonitorGetMonitorHandle @ 0x1C00C2E0C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3374 (MonitorReleaseMonitorHandle.c)
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
  __int64 v13; // r8
  int MonitorHandle; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  struct HDXGMONITOR__ *v28; // [rsp+50h] [rbp+8h] BYREF

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
    v23 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v23 + 32) = v7;
LABEL_20:
    *(_QWORD *)(v23 + 24) = 0LL;
    WdLogEvent5_WdError(v23);
    LODWORD(v7) = -1073741811;
    goto LABEL_13;
  }
  *a3 = 0LL;
  if ( !a4 )
  {
    v23 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v23 + 32) = v6;
    goto LABEL_20;
  }
  *a4 = 0LL;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(v7);
  v12 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_15;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( *((_QWORD *)v12 + 248) )
  {
    LOBYTE(v13) = 1;
    MonitorHandle = MonitorGetMonitorHandle(
                      v12,
                      (unsigned int)v6,
                      v13,
                      DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorDescriptorSet,
                      &v28);
    v7 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v25 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
      *(_QWORD *)(v25 + 24) = v6;
      WdLogEvent5_WdWarning(v25);
      LODWORD(v7) = -1071774920;
    }
    else if ( MonitorHandle < 0 )
    {
      v26 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v26 + 24) = v6;
      *(_QWORD *)(v26 + 32) = v7;
      WdLogEvent5_WdError(v26);
    }
    else
    {
      v7 = (__int64)v28;
      if ( !v28 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v16);
        WdLogEvent5_WdAssertion(v27);
      }
      *a3 = (struct D3DKMDT_HMONITORDESCRIPTORSET__ *)v7;
      *a4 = &DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::DxgMonitorDescriptorSetInterfaceV1;
      MonitorReleaseMonitorHandle(
        v12,
        (struct HDXGMONITOR__ *)v7,
        DXGK_MONITOR_INTERFACE_V1_IMPL::GetMonitorDescriptorSet,
        v18);
      LODWORD(v7) = 0;
    }
  }
  else
  {
LABEL_15:
    v22 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v22 + 24) = v7;
    WdLogEvent5_WdError(v22);
    LODWORD(v7) = -1071775742;
  }
LABEL_13:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 7055);
  return (unsigned int)v7;
}
