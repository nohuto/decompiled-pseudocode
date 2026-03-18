/*
 * XREFs of ?_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C97D4
 * Callers:
 *     ?AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C8160 (-AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QE.c)
 * Callees:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0007E98 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_InsertMonitorSourceMode(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  char *v9; // rsi
  DXGMONITOR *v10; // rax
  char *v11; // rax
  __int64 Id; // rcx
  char *v13; // rax
  char *v14; // rax
  __int64 v15; // rcx
  char *v16; // rdi
  __int128 v17; // xmm1
  char *v18; // rax
  char **v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  if ( !a2 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v22);
  }
  v6 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo((unsigned __int64)&a2->VideoSignalInfo);
  v8 = v6;
  if ( v6 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v23 + 24) = a2;
    *(_QWORD *)(v23 + 32) = v8;
    WdLogEvent5_WdError(v23);
    return 0LL;
  }
  if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) != 0 )
  {
    v24 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v24 + 24) = a2;
    WdLogEvent5_WdError(v24);
    return 3223192330LL;
  }
  v9 = (char *)this + 160;
  v10 = (DXGMONITOR *)*((_QWORD *)this + 20);
  if ( v10 == (DXGMONITOR *)((char *)this + 160) || (v11 = (char *)v10 - 96) == 0LL )
  {
LABEL_11:
    v14 = (char *)operator new[](0x78uLL, 0x4D677844u, PagedPool);
    v16 = v14;
    if ( !v14 )
    {
      v26 = WdLogNewEntry5_WdError(v15);
      WdLogEvent5_WdError(v26);
      return 3221225495LL;
    }
    *(_OWORD *)v14 = *(_OWORD *)&a2->Id;
    *((_OWORD *)v14 + 1) = *(_OWORD *)&a2->VideoSignalInfo.TotalSize.cy;
    *((_OWORD *)v14 + 2) = *(_OWORD *)&a2->VideoSignalInfo.VSyncFreq.Denominator;
    *((_OWORD *)v14 + 3) = *(_OWORD *)&a2->VideoSignalInfo.PixelRate;
    *((_OWORD *)v14 + 4) = *(_OWORD *)&a2->ColorBasis;
    v17 = *(_OWORD *)&a2->ColorCoeffDynamicRanges.FourthChannel;
    *((_DWORD *)v14 + 28) = 6;
    *((_OWORD *)v14 + 5) = v17;
    *((_DWORD *)v14 + 21) = 5;
    v18 = v14 + 96;
    ++*((_DWORD *)this + 38);
    v19 = (char **)*((_QWORD *)this + 21);
    *(_QWORD *)v18 = v9;
    *((_QWORD *)v18 + 1) = v19;
    if ( *v19 != v9 )
      __fastfail(3u);
    *v19 = v18;
    *((_QWORD *)this + 21) = v18;
    if ( *((_DWORD *)v16 + 22) == 1 )
    {
      v21 = WdLogNewEntry5_WdDmmEvent(v19);
      *(_QWORD *)(v21 + 24) = v16;
      WdLogEvent5_WdDmmEvent(v21);
      *((_QWORD *)this + 22) = v16;
    }
    return 0LL;
  }
  Id = a2->Id;
  while ( (_DWORD)Id != *(_DWORD *)v11 )
  {
    v13 = (char *)*((_QWORD *)v11 + 12);
    if ( v13 != v9 )
    {
      v11 = v13 - 96;
      if ( v11 )
        continue;
    }
    goto LABEL_11;
  }
  v25 = WdLogNewEntry5_WdError(Id);
  *(_QWORD *)(v25 + 24) = a2;
  *(_QWORD *)(v25 + 32) = a2->Id;
  WdLogEvent5_WdError(v25);
  return 3223192340LL;
}
