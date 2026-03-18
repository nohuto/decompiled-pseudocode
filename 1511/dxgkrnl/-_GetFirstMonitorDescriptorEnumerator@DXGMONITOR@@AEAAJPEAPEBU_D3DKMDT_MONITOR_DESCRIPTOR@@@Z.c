/*
 * XREFs of ?_GetFirstMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C00E1398
 * Callers:
 *     ?AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C00E3360 (-AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITOR.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00E2184 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_GetFirstMonitorDescriptorEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbp
  _DWORD *v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  __int64 v10; // rcx
  char *v11; // rbx
  char *v12; // rax
  char **v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !*((_DWORD *)this + 28) )
  {
    v16 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdDmmEvent(v16);
LABEL_13:
    *a2 = 0LL;
    return 0LL;
  }
  v6 = *((_QWORD *)this + 16);
  if ( !v6 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
    goto LABEL_13;
  }
  v7 = operator new[](0x30uLL, 0x4D677844u, PagedPool);
  v9 = v7;
  if ( v7 )
  {
    *v7 = 0;
    v7[1] = *(_DWORD *)(v6 + 12);
    *((_QWORD *)v7 + 1) = *(_QWORD *)(v6 + 16);
    *((_QWORD *)v7 + 2) = v6 + 24;
    if ( (int)ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v6 + 8), v7 + 6) < 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v18);
    }
    v11 = (char *)this + 136;
    v12 = (char *)(v9 + 8);
    v13 = (char **)*((_QWORD *)v11 + 1);
    *((_QWORD *)v9 + 4) = v11;
    *((_QWORD *)v9 + 5) = v13;
    if ( *v13 != v11 )
      __fastfail(3u);
    *v13 = v12;
    *((_QWORD *)v11 + 1) = v12;
    *a2 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)v9;
    return 0LL;
  }
  v17 = WdLogNewEntry5_WdError(v8);
  WdLogEvent5_WdError(v17);
  return 3221225495LL;
}
