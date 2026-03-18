/*
 * XREFs of ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01B1C80
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0006F80 (DpiGetDxgAdapter.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_ReleaseAdditionalTiming@DXGMONITOR@@QEAAJPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01B2A18 (-_ReleaseAdditionalTiming@DXGMONITOR@@QEAAJPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::ReleaseAdditionalTiming(
        __int64 a1,
        __int64 a2,
        const struct _DXGK_TARGETMODE_DETAIL_TIMING *a3,
        __int64 a4)
{
  __int64 v5; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rax
  DXGADAPTER *DxgAdapter; // rax
  __int64 v12; // rcx
  DXGADAPTER *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _FAST_MUTEX *v20; // rbx
  int MonitorInstance; // eax
  __int64 v22; // rcx
  unsigned int v23; // esi
  __int64 v24; // rax
  __int64 v25; // rax
  struct DXGMONITOR *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // eax
  struct _ERESOURCE *v31; // rcx
  struct DXGMONITOR *v33; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 7060);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v9 = v5;
  v7[3] = a3;
  v7[4] = a1;
  v7[5] = v5;
  if ( !a3 )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = 0LL;
LABEL_13:
    WdLogEvent5_WdError(v10);
    v17 = -1073741811;
    goto LABEL_21;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v13 = DxgAdapter;
  if ( DxgAdapter )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v19 = *((_QWORD *)v13 + 266)) == 0 )
    {
      v10 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v10 + 24) = a1;
      goto LABEL_13;
    }
    v20 = *(struct _FAST_MUTEX **)(v19 + 96);
    if ( !v20 )
    {
      v10 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v10 + 24) = v13;
      goto LABEL_13;
    }
    v33 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v20, v5, 0, (ULONG **)&v33);
    v17 = -1073741275;
    v23 = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v24 = WdLogNewEntry5_WdDmmEvent(v22);
      *(_QWORD *)(v24 + 24) = v9;
      *(_QWORD *)(v24 + 32) = v20;
      WdLogEvent5_WdDmmEvent(v24);
    }
    else if ( MonitorInstance >= 0 )
    {
      v26 = v33;
      if ( !v33 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v27);
        v29 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v29);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v26 + 240), 1u);
      v30 = DXGMONITOR::_ReleaseAdditionalTiming(v26, a3);
      v31 = (struct _ERESOURCE *)((char *)v26 + 240);
      v17 = v30;
      ExReleaseResourceLite(v31);
      KeLeaveCriticalRegion();
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v25 + 24) = v9;
      *(_QWORD *)(v25 + 32) = v20;
      WdLogEvent5_WdError(v25);
      v17 = v23;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    v17 = -1071775742;
  }
LABEL_21:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 7060);
  return v17;
}
