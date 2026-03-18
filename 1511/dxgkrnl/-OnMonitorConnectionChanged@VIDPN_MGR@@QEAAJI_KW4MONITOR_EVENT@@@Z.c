/*
 * XREFs of ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00DCE0C
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DE6A0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004908 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004EF8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007BDC (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x1C002BAB4 (-Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ.c)
 *     MonitorIsHMDDevicePresent @ 0x1C005D554 (MonitorIsHMDDevicePresent.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0091004 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C009AC9C (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     MonitorGetMonitorHandle @ 0x1C00C2E0C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3374 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetNativeFlags @ 0x1C00E30C0 (MonitorGetNativeFlags.c)
 */

__int64 __fastcall VIDPN_MGR::OnMonitorConnectionChanged(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  struct HDXGMONITOR__ *v11; // r13
  unsigned int v12; // ebx
  int MonitorHandle; // eax
  DMMVIDPNTOPOLOGY *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r14
  struct HDXGMONITOR__ *v17; // rbx
  unsigned int v19; // r14d
  int NativeFlags; // eax
  __int64 v21; // rcx
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // al
  char v26; // cl
  char v27; // al
  int IsHMDDevicePresent; // eax
  char v29; // al
  _QWORD *v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // r14
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned int PathSourceFromTarget; // ebx
  __int64 v56; // rax
  __int64 v57; // rax
  char v58; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v59[7]; // [rsp+31h] [rbp-1Fh] BYREF
  __int64 v60; // [rsp+38h] [rbp-18h] BYREF
  __int64 v61[2]; // [rsp+40h] [rbp-10h] BYREF
  char v62; // [rsp+90h] [rbp+40h] BYREF
  __int64 v63; // [rsp+A0h] [rbp+50h] BYREF

  v63 = a3;
  v6 = a2;
  if ( **(struct _KTHREAD ***)(a1 + 40) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v7);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 96) + 72LL));
  v8 = *(_QWORD *)(a1 + 96);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v8, v6);
  if ( TargetById )
  {
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
    v60 = 0LL;
    v11 = (struct HDXGMONITOR__ *)*((_QWORD *)TargetById + 12);
    v12 = *((_DWORD *)TargetById + 6);
    if ( !*(_QWORD *)(a1 + 8) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v37);
    }
    MonitorHandle = MonitorGetMonitorHandle(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL), v12, 0LL, TargetById, &v60);
    v16 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v17 = (struct HDXGMONITOR__ *)v60;
      if ( v60 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v38);
      }
      LODWORD(v16) = 0;
    }
    else if ( MonitorHandle < 0 )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v40[3] = v6;
      if ( !*(_QWORD *)(a1 + 8) )
      {
        v41 = WdLogNewEntry5_WdAssertion(v39);
        WdLogEvent5_WdAssertion(v41);
      }
      v40[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      v40[5] = v16;
      WdLogEvent5_WdError(v40);
      v17 = 0LL;
      v60 = 0LL;
    }
    else
    {
      v17 = (struct HDXGMONITOR__ *)v60;
    }
    if ( v17 == v11 )
    {
      if ( a4 == 10 )
        *((_BYTE *)TargetById + 396) = 1;
    }
    else
    {
      *((_QWORD *)TargetById + 12) = v17;
      if ( v17 )
      {
        v19 = *((_DWORD *)TargetById + 6);
        v62 = 0;
        v58 = 0;
        v59[0] = 0;
        if ( !*(_QWORD *)(a1 + 8) )
        {
          v42 = WdLogNewEntry5_WdAssertion(v14);
          WdLogEvent5_WdAssertion(v42);
        }
        NativeFlags = MonitorGetNativeFlags(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v19, &v62, &v58, v59);
        v22 = NativeFlags;
        if ( NativeFlags < 0 )
        {
          v44 = (_QWORD *)WdLogNewEntry5_WdError(v21);
          v44[3] = v6;
          if ( !*(_QWORD *)(a1 + 8) )
          {
            v45 = WdLogNewEntry5_WdAssertion(v43);
            WdLogEvent5_WdAssertion(v45);
          }
          v44[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
          v44[5] = v22;
          WdLogEvent5_WdError(v44);
        }
        if ( !g_Win32kSupportsPathIndependentRotation )
          goto LABEL_57;
        if ( !*(_QWORD *)(a1 + 8) )
        {
          v46 = WdLogNewEntry5_WdAssertion(v21);
          WdLogEvent5_WdAssertion(v46);
        }
        v23 = *(_QWORD *)(a1 + 8);
        v24 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 1984LL);
        if ( *(_BYTE *)(v24 + 157) )
        {
          if ( !v23 )
          {
            v47 = WdLogNewEntry5_WdAssertion(v24);
            WdLogEvent5_WdAssertion(v47);
          }
          v23 = *(_QWORD *)(a1 + 8);
          v24 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 1984LL);
          if ( *(_BYTE *)(v24 + 158) )
            goto LABEL_30;
        }
        if ( !v23 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v24);
          WdLogEvent5_WdAssertion(v48);
        }
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 176LL) + 64LL)
                                   + 40LL)
                       + 28LL) >= 0x4003u )
LABEL_30:
          v25 = 1;
        else
LABEL_57:
          v25 = 0;
        v26 = v62;
        *((_BYTE *)TargetById + 389) = v62;
        if ( v25 || !v26 || (v27 = 1, !v58) )
          v27 = 0;
        *((_BYTE *)TargetById + 390) = v27;
        LOBYTE(v63) = 0;
        IsHMDDevicePresent = MonitorIsHMDDevicePresent(v17, &v63);
        v16 = IsHMDDevicePresent;
        if ( IsHMDDevicePresent < 0 )
        {
          v50 = (_QWORD *)WdLogNewEntry5_WdError(v14);
          v50[3] = v6;
          if ( !*(_QWORD *)(a1 + 8) )
          {
            v51 = WdLogNewEntry5_WdAssertion(v49);
            WdLogEvent5_WdAssertion(v51);
          }
          v50[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
          v50[5] = v16;
          WdLogEvent5_WdError(v50);
          v29 = 0;
          LODWORD(v16) = 0;
          LOBYTE(v63) = 0;
        }
        else
        {
          v29 = v63;
        }
        *((_BYTE *)TargetById + 396) = v29;
        *((_BYTE *)TargetById + 397) = v59[0];
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
            DMMVIDPNTOPOLOGY::Invalidate(v14);
          v52 = *(_QWORD *)(v31 + 8);
          if ( v52 == a1 + 128 )
            v31 = 0LL;
          else
            v31 = v52 - 8;
        }
      }
      if ( !*(_QWORD *)(a1 + 8) )
      {
        v53 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v53);
      }
      ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(*(PERESOURCE ***)(a1 + 8), 0xFFFFFFFD, 0LL);
      v32 = *(_QWORD *)(a1 + 80);
      v61[0] = 0LL;
      if ( v32 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v32 + 32));
        v33 = *(_QWORD *)(a1 + 80);
      }
      else
      {
        v33 = 0LL;
      }
      auto_rc<DMMVIDPN const>::reset(v61, v33);
      if ( v61[0] )
      {
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                 (DMMVIDPNTOPOLOGY *)(v61[0] + 96),
                                 (unsigned int)v6,
                                 v34,
                                 v35);
        if ( PathSourceFromTarget != -1 )
        {
          if ( !*(_QWORD *)(a1 + 8) )
          {
            v56 = WdLogNewEntry5_WdAssertion(v54);
            WdLogEvent5_WdAssertion(v56);
          }
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(a1 + 8), PathSourceFromTarget, 1);
        }
      }
      auto_rc<DMMVIDPN const>::reset(v61, 0LL);
    }
    if ( v11 )
    {
      if ( !*(_QWORD *)(a1 + 8) )
      {
        v57 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v57);
      }
      MonitorReleaseMonitorHandle(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL), v11, TargetById, v15);
    }
    return (unsigned int)v16;
  }
  else
  {
    v36 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v36 + 24) = v6;
    *(_QWORD *)(v36 + 32) = a1;
    WdLogEvent5_WdError(v36);
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
    return 3223192325LL;
  }
}
