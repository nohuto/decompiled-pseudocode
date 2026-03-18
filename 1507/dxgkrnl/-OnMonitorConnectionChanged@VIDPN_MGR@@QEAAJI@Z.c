/*
 * XREFs of ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI@Z @ 0x1C00CD444
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00CAAA0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043F8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004F94 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000AF88 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x1C002BC08 (-Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0089ECC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C00AF52C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AF9EC (MonitorReleaseMonitorHandle.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C00CF958 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     MonitorIsPortraitFirstMonitor @ 0x1C00DDB00 (MonitorIsPortraitFirstMonitor.c)
 */

__int64 __fastcall VIDPN_MGR::OnMonitorConnectionChanged(VIDPN_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  struct HDXGMONITOR__ *v13; // r13
  unsigned int v14; // ebx
  int MonitorHandle; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  __int64 v21; // rbx
  unsigned int v22; // ebx
  int IsPortraitFirstMonitor; // eax
  char v24; // bl
  char v25; // al
  char v26; // al
  _QWORD *v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // rbx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  _QWORD *v47; // rbx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  VIDPN_MGR *v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned int PathSourceFromTarget; // ebx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62[2]; // [rsp+30h] [rbp-10h] BYREF
  char v63; // [rsp+80h] [rbp+40h] BYREF
  char v64; // [rsp+90h] [rbp+50h] BYREF
  __int64 v65; // [rsp+98h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = (unsigned int)a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != CurrentThread )
  {
    v34 = WdLogNewEntry5_WdAssertion(this, a2, CurrentThread, a4);
    WdLogEvent5_WdAssertion(v34);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 12) + 72LL));
  v7 = *((_QWORD *)this + 12);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v7, v6);
  if ( TargetById )
  {
    if ( v7 )
      ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
    v13 = (struct HDXGMONITOR__ *)*((_QWORD *)TargetById + 12);
    v14 = *((_DWORD *)TargetById + 6);
    v65 = 0LL;
    if ( !*((_QWORD *)this + 1) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v9, v8, v11, v12);
      WdLogEvent5_WdAssertion(v36);
    }
    MonitorHandle = MonitorGetMonitorHandle(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), v14, 0LL, TargetById, &v65);
    v20 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v21 = v65;
      if ( v65 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
        WdLogEvent5_WdAssertion(v37);
      }
      LODWORD(v20) = 0;
    }
    else if ( MonitorHandle < 0 )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v17);
      v40[3] = v6;
      if ( !*((_QWORD *)this + 1) )
      {
        v43 = WdLogNewEntry5_WdAssertion(v39, v38, v41, v42);
        WdLogEvent5_WdAssertion(v43);
      }
      v40[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      v40[5] = v20;
      WdLogEvent5_WdError(v40);
      v21 = 0LL;
      v65 = 0LL;
    }
    else
    {
      v21 = v65;
    }
    if ( (struct HDXGMONITOR__ *)v21 != v13 )
    {
      *((_QWORD *)TargetById + 12) = v21;
      if ( v21 )
      {
        v22 = *((_DWORD *)TargetById + 6);
        v63 = 0;
        v64 = 0;
        if ( !*((_QWORD *)this + 1) )
        {
          v44 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
          WdLogEvent5_WdAssertion(v44);
        }
        IsPortraitFirstMonitor = MonitorIsPortraitFirstMonitor(
                                   *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
                                   v22,
                                   &v63,
                                   &v64);
        v20 = IsPortraitFirstMonitor;
        if ( IsPortraitFirstMonitor < 0 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdError(v17);
          v47[3] = v6;
          if ( !*((_QWORD *)this + 1) )
          {
            v50 = WdLogNewEntry5_WdAssertion(v46, v45, v48, v49);
            WdLogEvent5_WdAssertion(v50);
          }
          v47[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
          v47[5] = v20;
          WdLogEvent5_WdError(v47);
          v24 = 0;
          LODWORD(v20) = 0;
          v63 = 0;
        }
        else
        {
          v24 = v63;
        }
        if ( !g_Win32kSupportsPathIndependentRotation )
          goto LABEL_25;
        if ( !*((_QWORD *)this + 1) )
        {
          v51 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
          WdLogEvent5_WdAssertion(v51);
        }
        v16 = *((_QWORD *)this + 1);
        v17 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 1976LL);
        if ( *(_BYTE *)(v17 + 133) )
          goto LABEL_52;
        if ( !v16 )
        {
          v52 = WdLogNewEntry5_WdAssertion(v17, 0LL, v18, v19);
          WdLogEvent5_WdAssertion(v52);
        }
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 176LL) + 64LL);
        if ( *(_DWORD *)(*(_QWORD *)(v17 + 40) + 28LL) >= 0x4003u )
LABEL_52:
          v25 = 1;
        else
LABEL_25:
          v25 = 0;
        *((_BYTE *)TargetById + 389) = v24;
        if ( v25 || !v24 || (v26 = 1, !v64) )
          v26 = 0;
        *((_BYTE *)TargetById + 390) = v26;
      }
      else
      {
        *(_WORD *)((char *)TargetById + 389) = 0;
      }
      v27 = (_QWORD *)((char *)this + 128);
      if ( (_QWORD *)*v27 != v27 )
      {
        v28 = *v27 - 8LL;
        while ( v28 )
        {
          if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v28 + 96), v6) )
            DMMVIDPNTOPOLOGY::Invalidate((DMMVIDPNTOPOLOGY *)v17);
          v53 = *(VIDPN_MGR **)(v28 + 8);
          if ( v53 == (VIDPN_MGR *)((char *)this + 128) )
            v28 = 0LL;
          else
            v28 = (__int64)v53 - 8;
        }
      }
      if ( !*((_QWORD *)this + 1) )
      {
        v54 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
        WdLogEvent5_WdAssertion(v54);
      }
      ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(*((ADAPTER_DISPLAY **)this + 1), 0xFFFFFFFD, 0LL);
      v29 = *((_QWORD *)this + 10);
      v62[0] = 0LL;
      if ( v29 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v29 + 32));
        v30 = *((_QWORD *)this + 10);
      }
      else
      {
        v30 = 0LL;
      }
      auto_rc<DMMVIDPN const>::reset(v62, v30);
      if ( v62[0] )
      {
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                 (DMMVIDPNTOPOLOGY *)(v62[0] + 96),
                                 (unsigned int)v6,
                                 v31,
                                 v32);
        if ( PathSourceFromTarget != -1 )
        {
          if ( !*((_QWORD *)this + 1) )
          {
            v60 = WdLogNewEntry5_WdAssertion(v56, v55, v58, v59);
            WdLogEvent5_WdAssertion(v60);
          }
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*((PERESOURCE ***)this + 1), PathSourceFromTarget, 1);
        }
      }
      auto_rc<DMMVIDPN const>::reset(v62, 0LL);
    }
    if ( v13 )
    {
      if ( !*((_QWORD *)this + 1) )
      {
        v61 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
        WdLogEvent5_WdAssertion(v61);
      }
      MonitorReleaseMonitorHandle(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), v13, TargetById, v19);
    }
    return (unsigned int)v20;
  }
  else
  {
    v35 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v35 + 24) = v6;
    *(_QWORD *)(v35 + 32) = this;
    WdLogEvent5_WdError(v35);
    if ( v7 )
      ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
    return 3223192325LL;
  }
}
