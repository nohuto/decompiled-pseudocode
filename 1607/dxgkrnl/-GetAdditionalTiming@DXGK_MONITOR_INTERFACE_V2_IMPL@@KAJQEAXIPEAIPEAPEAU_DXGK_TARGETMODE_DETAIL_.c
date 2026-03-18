/*
 * XREFs of ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01B1760
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0006F80 (DpiGetDxgAdapter.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01B2938 (-_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::GetAdditionalTiming(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        struct _DXGK_TARGETMODE_DETAIL_TIMING **a4)
{
  __int64 v6; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rax
  DXGADAPTER *DxgAdapter; // rax
  __int64 v13; // rcx
  DXGADAPTER *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _FAST_MUTEX *v21; // rbx
  int MonitorInstance; // eax
  __int64 v23; // rcx
  unsigned int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rax
  struct DXGMONITOR *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned int AdditionalTiming; // eax
  struct _ERESOURCE *v32; // rcx
  struct DXGMONITOR *v34; // [rsp+40h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 7059);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v10 = v6;
  v8[3] = a1;
  v8[4] = v6;
  v8[5] = a3;
  v8[6] = a4;
  if ( !a3 || !a4 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = 0LL;
LABEL_14:
    WdLogEvent5_WdError(v11);
    v18 = -1073741811;
    goto LABEL_22;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v14 = DxgAdapter;
  if ( DxgAdapter )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v20 = *((_QWORD *)v14 + 266)) == 0 )
    {
      v11 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v11 + 24) = a1;
      goto LABEL_14;
    }
    v21 = *(struct _FAST_MUTEX **)(v20 + 96);
    if ( !v21 )
    {
      v11 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v11 + 24) = v14;
      goto LABEL_14;
    }
    v34 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v21, v6, 0, (ULONG **)&v34);
    v18 = -1073741275;
    v24 = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v25 = WdLogNewEntry5_WdDmmEvent(v23);
      *(_QWORD *)(v25 + 24) = v10;
      *(_QWORD *)(v25 + 32) = v21;
      WdLogEvent5_WdDmmEvent(v25);
    }
    else if ( MonitorInstance >= 0 )
    {
      v27 = v34;
      if ( !v34 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v28);
        v30 = WdLogNewEntry5_WdAssertion(v29);
        WdLogEvent5_WdAssertion(v30);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v27 + 240), 1u);
      AdditionalTiming = DXGMONITOR::_GetAdditionalTiming(v27, a3, a4);
      v32 = (struct _ERESOURCE *)((char *)v27 + 240);
      v18 = AdditionalTiming;
      ExReleaseResourceLite(v32);
      KeLeaveCriticalRegion();
    }
    else
    {
      v26 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v26 + 24) = v10;
      *(_QWORD *)(v26 + 32) = v21;
      WdLogEvent5_WdError(v26);
      v18 = v24;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdError(v15);
    v18 = -1071775742;
  }
LABEL_22:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v16, &EventProfilerExit, v17, 7059);
  return v18;
}
