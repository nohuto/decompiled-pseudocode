/*
 * XREFs of ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0183700
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0009270 (DpiGetDxgAdapter.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0184764 (-_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
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
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // esi
  __int64 v28; // rax
  __int64 v29; // rax
  struct DXGMONITOR *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  unsigned int AdditionalTiming; // eax
  struct _ERESOURCE *v38; // rcx
  struct DXGMONITOR *v40; // [rsp+40h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
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
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v20 = *((_QWORD *)v14 + 247)) == 0 )
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
    v40 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v21, (unsigned int)v6, 0LL, (ULONG **)&v40);
    v18 = -1073741275;
    v27 = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v28 = WdLogNewEntry5_WdDmmEvent(v24);
      *(_QWORD *)(v28 + 24) = v10;
      *(_QWORD *)(v28 + 32) = v21;
      WdLogEvent5_WdDmmEvent(v28);
    }
    else if ( MonitorInstance >= 0 )
    {
      v30 = v40;
      if ( !v40 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
        WdLogEvent5_WdAssertion(v31);
        v36 = WdLogNewEntry5_WdAssertion(v33, v32, v34, v35);
        WdLogEvent5_WdAssertion(v36);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v30 + 240), 1u);
      AdditionalTiming = DXGMONITOR::_GetAdditionalTiming(v30, a3, a4);
      v38 = (struct _ERESOURCE *)((char *)v30 + 240);
      v18 = AdditionalTiming;
      ExReleaseResourceLite(v38);
      KeLeaveCriticalRegion();
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v29 + 24) = v10;
      *(_QWORD *)(v29 + 32) = v21;
      WdLogEvent5_WdError(v29);
      v18 = v27;
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
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v16, &EventProfilerExit, v17, 7059);
  return v18;
}
