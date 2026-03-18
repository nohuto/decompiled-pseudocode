/*
 * XREFs of ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0183C20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0009270 (DpiGetDxgAdapter.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_ReleaseAdditionalTiming@DXGMONITOR@@QEAAJPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0184844 (-_ReleaseAdditionalTiming@DXGMONITOR@@QEAAJPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
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
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // esi
  __int64 v27; // rax
  __int64 v28; // rax
  struct DXGMONITOR *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  unsigned int v36; // eax
  struct _ERESOURCE *v37; // rcx
  struct DXGMONITOR *v39; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
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
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v19 = *((_QWORD *)v13 + 247)) == 0 )
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
    v39 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v20, (unsigned int)v5, 0LL, (ULONG **)&v39);
    v17 = -1073741275;
    v26 = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v27 = WdLogNewEntry5_WdDmmEvent(v23);
      *(_QWORD *)(v27 + 24) = v9;
      *(_QWORD *)(v27 + 32) = v20;
      WdLogEvent5_WdDmmEvent(v27);
    }
    else if ( MonitorInstance >= 0 )
    {
      v29 = v39;
      if ( !v39 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
        WdLogEvent5_WdAssertion(v30);
        v35 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
        WdLogEvent5_WdAssertion(v35);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v29 + 240), 1u);
      v36 = DXGMONITOR::_ReleaseAdditionalTiming(v29, a3);
      v37 = (struct _ERESOURCE *)((char *)v29 + 240);
      v17 = v36;
      ExReleaseResourceLite(v37);
      KeLeaveCriticalRegion();
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v28 + 24) = v9;
      *(_QWORD *)(v28 + 32) = v20;
      WdLogEvent5_WdError(v28);
      v17 = v26;
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
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 7060);
  return v17;
}
