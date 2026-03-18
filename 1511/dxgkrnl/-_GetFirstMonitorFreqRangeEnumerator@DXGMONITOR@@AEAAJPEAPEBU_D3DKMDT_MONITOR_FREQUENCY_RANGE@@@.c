/*
 * XREFs of ?_GetFirstMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C018A8CC
 * Callers:
 *     ?AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0187270 (-AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetFirstMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  DXGMONITOR *v7; // rdi
  _OWORD *v8; // rdi
  __int64 v9; // rax
  _OWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  char *v13; // rbx
  char *v14; // rcx
  __int128 v15; // xmm0
  char **v16; // rdx

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_DWORD *)this + 50) )
  {
    v5 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v5 + 24) = this;
    WdLogEvent5_WdDmmEvent(v5);
    return 1075708747LL;
  }
  v7 = (DXGMONITOR *)*((_QWORD *)this + 26);
  if ( v7 == (DXGMONITOR *)((char *)this + 208) )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = (_OWORD *)((char *)v7 - 48);
    if ( v8 )
      goto LABEL_9;
  }
  v9 = WdLogNewEntry5_WdAssertion(this);
  WdLogEvent5_WdAssertion(v9);
LABEL_9:
  v10 = operator new[](0x48uLL, 0x4D677844u, PagedPool);
  if ( v10 )
  {
    v13 = (char *)this + 224;
    v14 = (char *)(v10 + 3);
    *v10 = *v8;
    v10[1] = v8[1];
    v15 = v8[2];
    *((_QWORD *)v10 + 8) = v8;
    v10[2] = v15;
    v16 = (char **)*((_QWORD *)v13 + 1);
    *((_QWORD *)v10 + 6) = v13;
    *((_QWORD *)v10 + 7) = v16;
    if ( *v16 != v13 )
      __fastfail(3u);
    *v16 = v14;
    *((_QWORD *)v13 + 1) = v14;
    *a2 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v10;
    return 0LL;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v11);
    WdLogEvent5_WdError(v12);
    return 3221225495LL;
  }
}
