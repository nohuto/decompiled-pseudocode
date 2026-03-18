/*
 * XREFs of ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C01B462C
 * Callers:
 *     ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C01B12A0 (-AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEM.c)
 * Callees:
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00F182C (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorModeEnumerator(
        DXGMONITOR ***this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a3,
        __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v9; // rcx
  const struct _D3DKMDT_MONITOR_SOURCE_MODE *v10; // rax
  __int64 v11; // rdx
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v12; // rax
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v13; // r8
  const struct DXGMONITOR::_DMMMONITORSOURCEMODE *v14; // rdx
  __int64 result; // rax
  __int64 v16; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v17; // [rsp+30h] [rbp+8h] BYREF

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
  v9 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)(this + 23);
  if ( !a2 )
    goto LABEL_24;
  v10 = *v9;
  if ( *v9 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v9 )
    goto LABEL_24;
  while ( v10 != &a2[1] )
  {
    if ( v9 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)v10 )
      goto LABEL_24;
    v10 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v10->Id;
  }
  v11 = *(_QWORD *)&a2[1].VideoSignalInfo.TotalSize.cy;
  v9 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)(this + 20);
  if ( !v11
    || (v12 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)*v9, *v9 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v9) )
  {
LABEL_24:
    v16 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v16 + 24) = a2;
    *(_QWORD *)(v16 + 32) = this;
    WdLogEvent5_WdError(v16);
    return 3223192368LL;
  }
  else
  {
    v13 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)(v11 + 96);
    while ( v12 != v13 )
    {
      if ( v9 == v12 )
        goto LABEL_24;
      v12 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)*v12;
    }
    v14 = *(const struct DXGMONITOR::_DMMMONITORSOURCEMODE **)(v11 + 96);
    if ( v14 == (const struct DXGMONITOR::_DMMMONITORSOURCEMODE *)v9 )
      goto LABEL_23;
    if ( v14 )
      v14 = (const struct DXGMONITOR::_DMMMONITORSOURCEMODE *)((char *)v14 - 96);
    if ( !v14 )
    {
LABEL_23:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v14, v13, a4) + 24) = this;
      return 1075708748LL;
    }
    else
    {
      result = DXGMONITOR::_CreateMonitorModeEnumerator(this, v14, &v17);
      if ( (int)result >= 0 )
        *a3 = v17;
    }
  }
  return result;
}
