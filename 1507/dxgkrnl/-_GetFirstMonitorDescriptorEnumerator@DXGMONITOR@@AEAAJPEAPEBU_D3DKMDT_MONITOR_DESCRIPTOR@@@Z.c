/*
 * XREFs of ?_GetFirstMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C00C9900
 * Callers:
 *     ?AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C00DE5C0 (-AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITOR.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00CA448 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // rbx
  char *v15; // rax
  char **v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !*((_DWORD *)this + 28) )
  {
    v19 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdDmmEvent(v19);
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
      v21 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      WdLogEvent5_WdAssertion(v21);
    }
    v14 = (char *)this + 136;
    v15 = (char *)(v9 + 8);
    v16 = (char **)*((_QWORD *)v14 + 1);
    *((_QWORD *)v9 + 4) = v14;
    *((_QWORD *)v9 + 5) = v16;
    if ( *v16 != v14 )
      __fastfail(3u);
    *v16 = v15;
    *((_QWORD *)v14 + 1) = v15;
    *a2 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)v9;
    return 0LL;
  }
  v20 = WdLogNewEntry5_WdError(v8);
  WdLogEvent5_WdError(v20);
  return 3221225495LL;
}
