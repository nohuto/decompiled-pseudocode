/*
 * XREFs of ?_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00E11FC
 * Callers:
 *     ?AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00DF6A0 (-AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QE.c)
 * Callees:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00081F8 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_InsertMonitorSourceMode(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  char *v11; // rsi
  DXGMONITOR *v12; // rax
  char *v13; // rax
  __int64 Id; // rcx
  char *v15; // rax
  char *v16; // rax
  __int64 v17; // rcx
  char *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int128 v21; // xmm1
  char *v22; // rax
  char **v23; // rcx
  __int64 v24; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(&a2->VideoSignalInfo);
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = a2;
    *(_QWORD *)(v8 + 32) = v7;
    WdLogEvent5_WdError(v8);
    return 0LL;
  }
  if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) != 0 )
  {
    v9 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v9 + 24) = a2;
    WdLogEvent5_WdError(v9);
    return 3223192330LL;
  }
  v11 = (char *)this + 160;
  v12 = (DXGMONITOR *)*((_QWORD *)this + 20);
  if ( v12 == (DXGMONITOR *)((char *)this + 160) || (v13 = (char *)v12 - 96) == 0LL )
  {
LABEL_13:
    v16 = (char *)operator new[](0x78uLL, 0x4D677844u, PagedPool);
    v18 = v16;
    if ( !v16 )
    {
      v19 = WdLogNewEntry5_WdError(v17);
      WdLogEvent5_WdError(v19);
      return 3221225495LL;
    }
    *(_OWORD *)v16 = *(_OWORD *)&a2->Id;
    *((_OWORD *)v16 + 1) = *(_OWORD *)&a2->VideoSignalInfo.TotalSize.cy;
    *((_OWORD *)v16 + 2) = *(_OWORD *)&a2->VideoSignalInfo.VSyncFreq.Denominator;
    *((_OWORD *)v16 + 3) = *(_OWORD *)&a2->VideoSignalInfo.PixelRate;
    *((_OWORD *)v16 + 4) = *(_OWORD *)&a2->ColorBasis;
    v21 = *(_OWORD *)&a2->ColorCoeffDynamicRanges.FourthChannel;
    *((_DWORD *)v16 + 28) = 6;
    *((_OWORD *)v16 + 5) = v21;
    *((_DWORD *)v16 + 21) = 5;
    v22 = v16 + 96;
    ++*((_DWORD *)this + 38);
    v23 = (char **)*((_QWORD *)this + 21);
    *(_QWORD *)v22 = v11;
    *((_QWORD *)v22 + 1) = v23;
    if ( *v23 != v11 )
      __fastfail(3u);
    *v23 = v22;
    *((_QWORD *)this + 21) = v22;
    if ( *((_DWORD *)v18 + 22) == 1 )
    {
      v24 = WdLogNewEntry5_WdDmmEvent(v23);
      *(_QWORD *)(v24 + 24) = v18;
      WdLogEvent5_WdDmmEvent(v24);
      *((_QWORD *)this + 22) = v18;
    }
    return 0LL;
  }
  Id = a2->Id;
  while ( (_DWORD)Id != *(_DWORD *)v13 )
  {
    v15 = (char *)*((_QWORD *)v13 + 12);
    if ( v15 != v11 )
    {
      v13 = v15 - 96;
      if ( v13 )
        continue;
    }
    goto LABEL_13;
  }
  v20 = WdLogNewEntry5_WdError(Id);
  *(_QWORD *)(v20 + 24) = a2;
  *(_QWORD *)(v20 + 32) = a2->Id;
  WdLogEvent5_WdError(v20);
  return 3223192340LL;
}
