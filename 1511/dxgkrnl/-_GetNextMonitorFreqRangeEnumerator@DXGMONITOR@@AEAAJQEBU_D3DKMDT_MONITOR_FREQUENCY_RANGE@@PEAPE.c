/*
 * XREFs of ?_GetNextMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU2@@Z @ 0x1C018A9CC
 * Callers:
 *     ?AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1C0187770 (-AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_H.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3,
        __int64 a4)
{
  DXGMONITOR *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  DXGMONITOR **v9; // rbx
  DXGMONITOR *v10; // rax
  __int64 v11; // rdx
  DXGMONITOR *v12; // rax
  DXGMONITOR *v13; // r8
  DXGMONITOR *v14; // rdi
  _OWORD *v15; // rdi
  _OWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  DXGMONITOR **v20; // rcx
  __int128 v21; // xmm0
  DXGMONITOR ***v22; // rdx
  __int64 v23; // rax

  v6 = this;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (DXGMONITOR **)((char *)v6 + 224);
  if ( !a2 )
    goto LABEL_25;
  v10 = *v9;
  if ( *v9 == (DXGMONITOR *)v9 )
    goto LABEL_25;
  this = (DXGMONITOR *)&a2[1];
  while ( v10 != this )
  {
    if ( v9 == (DXGMONITOR **)v10 )
      goto LABEL_25;
    v10 = *(DXGMONITOR **)v10;
  }
  v11 = *(_QWORD *)&a2[1].RangeLimits.MaxVSyncFreq.Denominator;
  this = (DXGMONITOR *)((char *)v6 + 208);
  if ( !v11 || (v12 = *(DXGMONITOR **)this, *(DXGMONITOR **)this == this) )
  {
LABEL_25:
    v23 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v23 + 24) = a2;
    *(_QWORD *)(v23 + 32) = v6;
    WdLogEvent5_WdError(v23);
    return 3223192368LL;
  }
  else
  {
    v13 = (DXGMONITOR *)(v11 + 48);
    while ( v12 != v13 )
    {
      if ( this == v12 )
        goto LABEL_25;
      v12 = *(DXGMONITOR **)v12;
    }
    v14 = *(DXGMONITOR **)(v11 + 48);
    if ( v14 == this || (v15 = (_OWORD *)((char *)v14 - 48)) == 0LL )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, v11, v13, a4) + 24) = v6;
      return 1075708748LL;
    }
    else
    {
      v16 = operator new[](0x48uLL, 0x4D677844u, PagedPool);
      if ( v16 )
      {
        v20 = (DXGMONITOR **)(v16 + 3);
        *v16 = *v15;
        v16[1] = v15[1];
        v21 = v15[2];
        *((_QWORD *)v16 + 8) = v15;
        v16[2] = v21;
        v22 = (DXGMONITOR ***)*((_QWORD *)v6 + 29);
        *((_QWORD *)v16 + 6) = v9;
        *((_QWORD *)v16 + 7) = v22;
        if ( *v22 != v9 )
          __fastfail(3u);
        *v22 = v20;
        *((_QWORD *)v6 + 29) = v20;
        *a3 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v16;
        return 0LL;
      }
      else
      {
        v18 = WdLogNewEntry5_WdError(v17);
        WdLogEvent5_WdError(v18);
        return 3221225495LL;
      }
    }
  }
}
