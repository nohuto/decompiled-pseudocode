/*
 * XREFs of ?_GetFirstMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C01B43A0
 * Callers:
 *     ?AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C01B0C10 (-AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetFirstMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  _OWORD *v7; // rbx
  __int64 v8; // rax
  char *v9; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v10; // rcx
  __int64 v11; // rax
  char *v12; // rdi
  __int128 v13; // xmm0
  char **v14; // rdx
  char *v15; // rax

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
  v7 = (_OWORD *)*((_QWORD *)this + 26);
  if ( v7 == (_OWORD *)((char *)this + 208) )
  {
    v7 = 0LL;
  }
  else
  {
    if ( v7 )
      v7 -= 3;
    if ( v7 )
      goto LABEL_11;
  }
  v8 = WdLogNewEntry5_WdAssertion(this);
  WdLogEvent5_WdAssertion(v8);
LABEL_11:
  v9 = (char *)operator new(0x48uLL, 0x4D677844u, PagedPool);
  v10 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v9;
  if ( v9 )
  {
    v12 = (char *)this + 224;
    *(_OWORD *)v9 = *v7;
    *((_OWORD *)v9 + 1) = v7[1];
    v13 = v7[2];
    *((_QWORD *)v9 + 8) = v7;
    *((_OWORD *)v9 + 2) = v13;
    v14 = (char **)*((_QWORD *)v12 + 1);
    v15 = v9 + 48;
    if ( *v14 != v12 )
      __fastfail(3u);
    *(_QWORD *)v15 = v12;
    *((_QWORD *)v15 + 1) = v14;
    *v14 = v15;
    *((_QWORD *)v12 + 1) = v15;
    result = 0LL;
    *a2 = v10;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(0LL);
    WdLogEvent5_WdError(v11);
    return 3221225495LL;
  }
  return result;
}
