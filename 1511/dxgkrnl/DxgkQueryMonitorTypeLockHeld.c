/*
 * XREFs of DxgkQueryMonitorTypeLockHeld @ 0x1C00E7F40
 * Callers:
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00E7D6C (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0140020 (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C014034C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C0140988 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C0155894 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004908 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00A16BC (IsVirtualizationDisabledForTarget.c)
 *     MonitorGetMonitorType @ 0x1C00A6338 (MonitorGetMonitorType.c)
 *     MonitorGetMonitorHandle @ 0x1C00C2E0C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3374 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DxgkQueryMonitorTypeLockHeld(
        DXGADAPTER *this,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _BYTE *a6,
        char *a7,
        bool *a8,
        bool *a9)
{
  __int64 v10; // rsi
  int MonitorType; // r13d
  __int64 v13; // rcx
  __int64 v14; // rax
  bool *v15; // r14
  char v16; // bp
  bool *v17; // rsi
  _BYTE *v18; // r15
  _DWORD *v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rbp
  _DWORD *v23; // rbx
  __int64 result; // rax
  __int64 v25; // r9
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  bool v34; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35; // [rsp+38h] [rbp-60h] BYREF
  struct HDXGMONITOR__ *v36; // [rsp+40h] [rbp-58h] BYREF
  bool v37; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v38; // [rsp+A8h] [rbp+10h]
  _DWORD *v39; // [rsp+B0h] [rbp+18h]
  _DWORD *v40; // [rsp+B8h] [rbp+20h]

  v40 = a4;
  v39 = a3;
  v38 = a2;
  v10 = a2;
  MonitorType = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v29 + 24) = 3234LL;
    WdLogEvent5_WdAssertion(v29);
  }
  v14 = *((_QWORD *)this + 248);
  if ( !v14 )
  {
    v28 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v28 + 24) = this;
    *(_QWORD *)(v28 + 32) = v10;
    WdLogEvent5_WdError(v28);
    return 3221225485LL;
  }
  v15 = a9;
  v16 = 1;
  v17 = a8;
  v18 = a6;
  v19 = a5;
  if ( a4 || a5 || a6 || a8 || a9 )
  {
    v20 = *(_QWORD *)(v14 + 112);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v35, v20);
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v20 + 96) + 72LL), 1u);
    v21 = *(_QWORD *)(v20 + 96);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v21, v38);
    if ( TargetById )
    {
      if ( v40 )
        *v40 = *((_DWORD *)TargetById + 18);
      if ( v19 )
        *v19 = *((_DWORD *)TargetById + 19);
      if ( v18 )
        *v18 = *((_BYTE *)TargetById + 389);
      if ( v17 || v15 )
      {
        MonitorType = IsVirtualizationDisabledForTarget(this, *((_DWORD *)TargetById + 6), &v37, &v34);
        if ( MonitorType < 0 )
        {
          v31 = WdLogNewEntry5_WdError(v30);
          *(_QWORD *)(v31 + 24) = *((unsigned int *)TargetById + 6);
          *(_QWORD *)(v31 + 32) = this;
          WdLogEvent5_WdError(v31);
          if ( v21 )
            ReferenceCounted::Release((ReferenceCounted *)(v21 + 64));
          DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v35 + 40));
          return (unsigned int)MonitorType;
        }
        if ( v17 )
          *v17 = !v37;
        if ( v15 )
          *v15 = !v34;
      }
    }
    else
    {
      if ( v18 )
        *v18 = 0;
      if ( v17 )
        *v17 = *(_BYTE *)(*((_QWORD *)this + 248) + 157LL);
      if ( v15 )
        *v15 = *(_BYTE *)(*((_QWORD *)this + 248) + 158LL);
    }
    if ( v21 )
      ReferenceCounted::Release((ReferenceCounted *)(v21 + 64));
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v35 + 40));
    v16 = 1;
  }
  if ( a7 )
  {
    if ( !g_Win32kSupportsPathIndependentRotation
      || ((v32 = *((_QWORD *)this + 248), !*(_BYTE *)(v32 + 157)) || !*(_BYTE *)(v32 + 158))
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 22) + 64LL) + 40LL) + 28LL) < 0x4003u )
    {
      v16 = 0;
    }
    *a7 = v16;
  }
  v23 = v39;
  if ( v39 )
  {
    result = MonitorGetMonitorHandle(this, v38, 0LL, DxgkQueryMonitorTypeLockHeld, &v36);
    if ( (int)result < 0 )
      return result;
    MonitorType = MonitorGetMonitorType(this, v36, v23, v25);
    if ( (int)MonitorReleaseMonitorHandle(this, v36, DxgkQueryMonitorTypeLockHeld, v26) < 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v27);
      *(_QWORD *)(v33 + 24) = 3339LL;
      WdLogEvent5_WdAssertion(v33);
    }
  }
  return (unsigned int)MonitorType;
}
