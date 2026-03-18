/*
 * XREFs of ?_GetFirstMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C01860BC
 * Callers:
 *     ?AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0182BC0 (-AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetFirstMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  DXGMONITOR *v9; // rdi
  _OWORD *v10; // rdi
  __int64 v11; // rax
  _OWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  char *v15; // rbx
  char *v16; // rcx
  __int128 v17; // xmm0
  char **v18; // rdx

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*((_DWORD *)this + 50) )
  {
    v7 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v7 + 24) = this;
    WdLogEvent5_WdDmmEvent(v7);
    return 1075708747LL;
  }
  v9 = (DXGMONITOR *)*((_QWORD *)this + 26);
  if ( v9 == (DXGMONITOR *)((char *)this + 208) )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = (_OWORD *)((char *)v9 - 48);
    if ( v10 )
      goto LABEL_9;
  }
  v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
  WdLogEvent5_WdAssertion(v11);
LABEL_9:
  v12 = operator new[](0x48uLL, 0x4D677844u, PagedPool);
  if ( v12 )
  {
    v15 = (char *)this + 224;
    v16 = (char *)(v12 + 3);
    *v12 = *v10;
    v12[1] = v10[1];
    v17 = v10[2];
    *((_QWORD *)v12 + 8) = v10;
    v12[2] = v17;
    v18 = (char **)*((_QWORD *)v15 + 1);
    *((_QWORD *)v12 + 6) = v15;
    *((_QWORD *)v12 + 7) = v18;
    if ( *v18 != v15 )
      __fastfail(3u);
    *v18 = v16;
    *((_QWORD *)v15 + 1) = v16;
    *a2 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v12;
    return 0LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v13);
    WdLogEvent5_WdError(v14);
    return 3221225495LL;
  }
}
