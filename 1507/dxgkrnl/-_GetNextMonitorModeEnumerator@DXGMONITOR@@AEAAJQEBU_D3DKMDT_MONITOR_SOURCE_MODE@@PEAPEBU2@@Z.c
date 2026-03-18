/*
 * XREFs of ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C0186330
 * Callers:
 *     ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C0183240 (-AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEM.c)
 * Callees:
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C9710 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
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
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v11; // rdx
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v12; // rax
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v13; // r8
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v14; // rax
  __int64 result; // rax
  __int64 v16; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v17; // [rsp+30h] [rbp+8h] BYREF

  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)(this + 23);
  if ( !a2 )
    goto LABEL_22;
  v10 = *v9;
  if ( *v9 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v9 )
    goto LABEL_22;
  while ( v10 != &a2[1] )
  {
    if ( v9 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)v10 )
      goto LABEL_22;
    v10 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v10->Id;
  }
  v11 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE ***)&a2[1].VideoSignalInfo.TotalSize.cy;
  v9 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)(this + 20);
  if ( !v11
    || (v12 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)*v9, *v9 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v9) )
  {
LABEL_22:
    v16 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v16 + 24) = a2;
    *(_QWORD *)(v16 + 32) = this;
    WdLogEvent5_WdError(v16);
    return 3223192368LL;
  }
  else
  {
    v13 = v11 + 12;
    while ( v12 != v13 )
    {
      if ( v9 == v12 )
        goto LABEL_22;
      v12 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)*v12;
    }
    v14 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)v11[12];
    if ( v14 == v9 || (v11 = v14 - 12, v14 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)96) )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v11, v13, a4) + 24) = this;
      return 1075708748LL;
    }
    else
    {
      result = DXGMONITOR::_CreateMonitorModeEnumerator(
                 this,
                 (const struct DXGMONITOR::_DMMMONITORSOURCEMODE *)v11,
                 &v17,
                 a4);
      if ( (int)result >= 0 )
        *a3 = v17;
    }
  }
  return result;
}
