/*
 * XREFs of ?_ReleaseMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0186430
 * Callers:
 *     ?ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0183E00 (-ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONI.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReleaseMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2,
        __int64 a3,
        __int64 a4)
{
  DXGMONITOR *v5; // rdi
  __int64 v6; // rax
  DXGMONITOR **v7; // rdx
  DXGMONITOR *v8; // rax
  __int64 v9; // r8
  _QWORD **v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // r8
  DXGMONITOR *v13; // rdx
  DXGMONITOR **v14; // rax
  __int64 v16; // rax

  v5 = this;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (DXGMONITOR **)((char *)v5 + 224);
  if ( !a2 )
    goto LABEL_19;
  v8 = *v7;
  if ( *v7 == (DXGMONITOR *)v7 )
    goto LABEL_19;
  this = (DXGMONITOR *)&a2[1];
  while ( v8 != this )
  {
    if ( v7 == (DXGMONITOR **)v8 )
      goto LABEL_19;
    v8 = *(DXGMONITOR **)v8;
  }
  v9 = *(_QWORD *)&a2[1].RangeLimits.MaxVSyncFreq.Denominator;
  v10 = (_QWORD **)((char *)v5 + 208);
  if ( !v9 || (v11 = *v10, *v10 == v10) )
  {
LABEL_19:
    v16 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v16 + 24) = a2;
    *(_QWORD *)(v16 + 32) = v5;
    WdLogEvent5_WdError(v16);
    return 3223192368LL;
  }
  else
  {
    v12 = (_QWORD *)(v9 + 48);
    while ( v11 != v12 )
    {
      if ( v10 == v11 )
        goto LABEL_19;
      v11 = (_QWORD *)*v11;
    }
    v13 = *(DXGMONITOR **)this;
    v14 = *(DXGMONITOR ***)&a2[1].RangeLimits.MinVSyncFreq.Denominator;
    if ( *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this || *v14 != this )
      __fastfail(3u);
    *v14 = v13;
    *((_QWORD *)v13 + 1) = v14;
    operator delete(a2);
    return 0LL;
  }
}
