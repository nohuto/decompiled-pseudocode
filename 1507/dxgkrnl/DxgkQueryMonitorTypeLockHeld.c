/*
 * XREFs of DxgkQueryMonitorTypeLockHeld @ 0x1C00DC140
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00A7470 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C00D28D8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00DBF78 (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE33@Z @ 0x1C0151654 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004F94 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C008EA64 (-IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     MonitorGetMonitorType @ 0x1C009BB94 (MonitorGetMonitorType.c)
 *     MonitorGetMonitorHandle @ 0x1C00AF52C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AF9EC (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DxgkQueryMonitorTypeLockHeld(
        DXGADAPTER *this,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _BYTE *a6,
        char *a7,
        unsigned __int8 *a8)
{
  __int64 v9; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  char v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 result; // rax
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  struct HDXGMONITOR__ *v32; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v33[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int MonitorType; // [rsp+80h] [rbp+8h]

  MonitorType = 0;
  v9 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v30 + 24) = 3124LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v15 = *((_QWORD *)this + 247);
  if ( !v15 )
  {
    v29 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v29 + 24) = this;
    *(_QWORD *)(v29 + 32) = v9;
    WdLogEvent5_WdError(v29);
    return 3221225485LL;
  }
  v16 = 1;
  if ( a4 || a5 || a6 || a8 )
  {
    v17 = *(_QWORD *)(v15 + 88);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v33, v17);
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v17 + 96) + 72LL), 1u);
    v18 = *(_QWORD *)(v17 + 96);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v18, v9);
    if ( TargetById )
    {
      if ( a4 )
        *a4 = *((_DWORD *)TargetById + 18);
      if ( a5 )
        *a5 = *((_DWORD *)TargetById + 19);
      if ( a6 )
        *a6 = *((_BYTE *)TargetById + 389);
      if ( a8 )
        *a8 = DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode(TargetById, (__int64)TargetById, v20, v21);
    }
    else
    {
      if ( a6 )
        *a6 = 0;
      if ( a8 )
        *a8 = *(_BYTE *)(*((_QWORD *)this + 247) + 133LL);
    }
    if ( v18 )
      ReferenceCounted::Release((ReferenceCounted *)(v18 + 64));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33[0] + 40LL));
  }
  if ( a7 )
  {
    if ( !g_Win32kSupportsPathIndependentRotation
      || !*(_BYTE *)(*((_QWORD *)this + 247) + 133LL)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 22) + 64LL) + 40LL) + 28LL) < 0x4003u )
    {
      v16 = 0;
    }
    *a7 = v16;
  }
  if ( a3 )
  {
    result = MonitorGetMonitorHandle(this, (unsigned int)v9, 0LL, DxgkQueryMonitorTypeLockHeld, &v32);
    if ( (int)result < 0 )
      return result;
    MonitorType = MonitorGetMonitorType(this, v32, a3, v23);
    if ( (int)MonitorReleaseMonitorHandle(this, v32, DxgkQueryMonitorTypeLockHeld, v24) < 0 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
      *(_QWORD *)(v31 + 24) = 3206LL;
      WdLogEvent5_WdAssertion(v31);
    }
  }
  return MonitorType;
}
