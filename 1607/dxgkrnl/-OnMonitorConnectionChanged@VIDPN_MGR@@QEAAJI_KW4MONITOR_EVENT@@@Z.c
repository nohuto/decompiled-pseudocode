/*
 * XREFs of ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00F4120
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3B40 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0001970 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004898 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0006874 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000A6B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x1C0033B40 (-Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00804BC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0087708 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     MonitorIsHMDDevicePresent @ 0x1C00B930C (MonitorIsHMDDevicePresent.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00BA4C0 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00BA610 (MonitorGetMonitorHandle.c)
 *     MonitorGetNativeFlags @ 0x1C00EF0CC (MonitorGetNativeFlags.c)
 */

__int64 __fastcall VIDPN_MGR::OnMonitorConnectionChanged(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v6; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  bool v12; // zf
  unsigned int v13; // ebx
  int MonitorHandle; // eax
  DMMVIDPNTOPOLOGY *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r14
  struct HDXGMONITOR__ *v18; // rbx
  unsigned int v19; // r14d
  int NativeFlags; // eax
  __int64 v21; // rcx
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // al
  unsigned __int8 v26; // cl
  char v27; // al
  int IsHMDDevicePresent; // eax
  char v29; // al
  _QWORD *v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  struct HDXGMONITOR__ *v36; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // r14
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rcx
  unsigned int PathSourceFromTarget; // ebx
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int8 v60; // [rsp+30h] [rbp-20h] BYREF
  bool v61; // [rsp+31h] [rbp-1Fh] BYREF
  unsigned __int8 v62[6]; // [rsp+32h] [rbp-1Eh] BYREF
  __int64 v63; // [rsp+38h] [rbp-18h] BYREF
  __int64 v64; // [rsp+40h] [rbp-10h] BYREF
  struct HDXGMONITOR__ *v65; // [rsp+48h] [rbp-8h]
  char v66; // [rsp+80h] [rbp+30h] BYREF

  v6 = a2;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(a1 + 40) + 8LL) != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v8);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 96) + 72LL));
  v9 = *(_QWORD *)(a1 + 96);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v9, v6);
  if ( TargetById )
  {
    if ( v9 )
      ReferenceCounted::Release((ReferenceCounted *)(v9 + 64));
    v63 = 0LL;
    v12 = *(_QWORD *)(a1 + 8) == 0LL;
    v13 = *((_DWORD *)TargetById + 6);
    v65 = (struct HDXGMONITOR__ *)*((_QWORD *)TargetById + 12);
    if ( v12 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v39);
    }
    MonitorHandle = MonitorGetMonitorHandle(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL), v13, 0LL, TargetById, &v63);
    v17 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v18 = (struct HDXGMONITOR__ *)v63;
      if ( v63 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v40);
      }
      LODWORD(v17) = 0;
    }
    else if ( MonitorHandle < 0 )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v42[3] = v6;
      if ( !*(_QWORD *)(a1 + 8) )
      {
        v43 = WdLogNewEntry5_WdAssertion(v41);
        WdLogEvent5_WdAssertion(v43);
      }
      v42[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      v42[5] = v17;
      WdLogEvent5_WdError(v42);
      v18 = 0LL;
      v63 = 0LL;
    }
    else
    {
      v18 = (struct HDXGMONITOR__ *)v63;
    }
    if ( v18 == v65 )
    {
      if ( a4 == 10 )
      {
        if ( a3 == 2 )
        {
          *((_BYTE *)TargetById + 396) = 1;
        }
        else if ( a3 == 1 )
        {
          *((_BYTE *)TargetById + 396) = 0;
        }
      }
    }
    else
    {
      *((_QWORD *)TargetById + 12) = v18;
      if ( v18 )
      {
        v19 = *((_DWORD *)TargetById + 6);
        v60 = 0;
        v61 = 0;
        v62[0] = 0;
        if ( !*(_QWORD *)(a1 + 8) )
        {
          v44 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v44);
        }
        NativeFlags = MonitorGetNativeFlags(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL), v19, &v60, &v61, v62);
        v22 = NativeFlags;
        if ( NativeFlags < 0 )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdError(v21);
          v46[3] = v6;
          if ( !*(_QWORD *)(a1 + 8) )
          {
            v47 = WdLogNewEntry5_WdAssertion(v45);
            WdLogEvent5_WdAssertion(v47);
          }
          v46[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
          v46[5] = v22;
          WdLogEvent5_WdError(v46);
        }
        if ( !g_Win32kSupportsPathIndependentRotation )
          goto LABEL_57;
        if ( !*(_QWORD *)(a1 + 8) )
        {
          v48 = WdLogNewEntry5_WdAssertion(v21);
          WdLogEvent5_WdAssertion(v48);
        }
        v23 = *(_QWORD *)(a1 + 8);
        v24 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 2128LL);
        if ( *(_BYTE *)(v24 + 133) )
        {
          if ( !v23 )
          {
            v49 = WdLogNewEntry5_WdAssertion(v24);
            WdLogEvent5_WdAssertion(v49);
          }
          v23 = *(_QWORD *)(a1 + 8);
          v24 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 2128LL);
          if ( *(_BYTE *)(v24 + 134) )
            goto LABEL_24;
        }
        if ( !v23 )
        {
          v50 = WdLogNewEntry5_WdAssertion(v24);
          WdLogEvent5_WdAssertion(v50);
        }
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 192LL) + 64LL)
                                   + 40LL)
                       + 28LL) >= 0x4003u )
LABEL_24:
          v25 = 1;
        else
LABEL_57:
          v25 = 0;
        v26 = v60;
        *((_BYTE *)TargetById + 389) = v60;
        if ( v25 || !v26 || (v27 = 1, !v61) )
          v27 = 0;
        *((_BYTE *)TargetById + 390) = v27;
        v66 = 0;
        IsHMDDevicePresent = MonitorIsHMDDevicePresent(v18, &v66);
        v17 = IsHMDDevicePresent;
        if ( IsHMDDevicePresent < 0 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(v15);
          v52[3] = v6;
          if ( !*(_QWORD *)(a1 + 8) )
          {
            v53 = WdLogNewEntry5_WdAssertion(v51);
            WdLogEvent5_WdAssertion(v53);
          }
          v52[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
          v52[5] = v17;
          WdLogEvent5_WdError(v52);
          v29 = 0;
          LODWORD(v17) = 0;
          v66 = 0;
        }
        else
        {
          v29 = v66;
        }
        *((_BYTE *)TargetById + 396) = v29;
        *((_BYTE *)TargetById + 397) = v62[0];
      }
      else
      {
        *(_WORD *)((char *)TargetById + 389) = 0;
        *((_WORD *)TargetById + 198) = 256;
      }
      v30 = (_QWORD *)(a1 + 128);
      if ( (_QWORD *)*v30 != v30 )
      {
        v31 = *v30 - 8LL;
        while ( v31 )
        {
          if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v31 + 96), v6) )
            DMMVIDPNTOPOLOGY::Invalidate(v15);
          v54 = *(_QWORD *)(v31 + 8);
          if ( v54 == a1 + 128 )
            v31 = 0LL;
          else
            v31 = v54 - 8;
        }
      }
      if ( !*(_QWORD *)(a1 + 8) )
      {
        v55 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v55);
      }
      ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(*(PERESOURCE ***)(a1 + 8), 0xFFFFFFFD, 0LL);
      v32 = *(_QWORD *)(a1 + 80);
      v64 = 0LL;
      if ( v32 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v32 + 32));
        v33 = *(_QWORD *)(a1 + 80);
      }
      else
      {
        v33 = 0LL;
      }
      auto_rc<DMMVIDPN const>::reset(&v64, v33);
      if ( v64 )
      {
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                 (DMMVIDPNTOPOLOGY *)(v64 + 96),
                                 (unsigned int)v6,
                                 v34,
                                 v35);
        if ( PathSourceFromTarget != -1 )
        {
          if ( !*(_QWORD *)(a1 + 8) )
          {
            v58 = WdLogNewEntry5_WdAssertion(v56);
            WdLogEvent5_WdAssertion(v58);
          }
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(a1 + 8), PathSourceFromTarget, 1);
        }
      }
      auto_rc<DMMVIDPN const>::reset(&v64, 0LL);
    }
    v36 = v65;
    if ( v65 )
    {
      if ( !*(_QWORD *)(a1 + 8) )
      {
        v59 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v59);
      }
      MonitorReleaseMonitorHandle(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL), v36, TargetById, v16);
    }
    return (unsigned int)v17;
  }
  else
  {
    v38 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v38 + 24) = v6;
    *(_QWORD *)(v38 + 32) = a1;
    WdLogEvent5_WdError(v38);
    if ( v9 )
      ReferenceCounted::Release((ReferenceCounted *)(v9 + 64));
    return 3223192325LL;
  }
}
