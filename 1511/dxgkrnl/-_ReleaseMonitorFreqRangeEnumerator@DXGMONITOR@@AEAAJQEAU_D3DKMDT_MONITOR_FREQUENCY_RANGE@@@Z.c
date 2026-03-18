/*
 * XREFs of ?_ReleaseMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C018AC40
 * Callers:
 *     ?ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C01884B0 (-ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONI.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReleaseMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2)
{
  DXGMONITOR *v3; // rdi
  __int64 v4; // rax
  DXGMONITOR **v5; // rdx
  DXGMONITOR *v6; // rax
  __int64 v7; // r8
  _QWORD **v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  DXGMONITOR *v11; // rdx
  DXGMONITOR **v12; // rax
  __int64 v14; // rax

  v3 = this;
  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = (DXGMONITOR **)((char *)v3 + 224);
  if ( !a2 )
    goto LABEL_19;
  v6 = *v5;
  if ( *v5 == (DXGMONITOR *)v5 )
    goto LABEL_19;
  this = (DXGMONITOR *)&a2[1];
  while ( v6 != this )
  {
    if ( v5 == (DXGMONITOR **)v6 )
      goto LABEL_19;
    v6 = *(DXGMONITOR **)v6;
  }
  v7 = *(_QWORD *)&a2[1].RangeLimits.MaxVSyncFreq.Denominator;
  v8 = (_QWORD **)((char *)v3 + 208);
  if ( !v7 || (v9 = *v8, *v8 == v8) )
  {
LABEL_19:
    v14 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v14 + 24) = a2;
    *(_QWORD *)(v14 + 32) = v3;
    WdLogEvent5_WdError(v14);
    return 3223192368LL;
  }
  else
  {
    v10 = (_QWORD *)(v7 + 48);
    while ( v9 != v10 )
    {
      if ( v8 == v9 )
        goto LABEL_19;
      v9 = (_QWORD *)*v9;
    }
    v11 = *(DXGMONITOR **)this;
    v12 = *(DXGMONITOR ***)&a2[1].RangeLimits.MinVSyncFreq.Denominator;
    if ( *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this || *v12 != this )
      __fastfail(3u);
    *v12 = v11;
    *((_QWORD *)v11 + 1) = v12;
    operator delete(a2);
    return 0LL;
  }
}
