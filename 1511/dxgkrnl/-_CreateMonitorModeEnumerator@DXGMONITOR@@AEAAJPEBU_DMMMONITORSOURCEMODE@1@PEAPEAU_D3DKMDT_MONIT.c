/*
 * XREFs of ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00E1138
 * Callers:
 *     ?CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00DF760 (-CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMOD.c)
 *     ?AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01873E0 (-AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCE.c)
 *     ?AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0187A90 (-AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITOR.c)
 *     ?AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0187C10 (-AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSO.c)
 *     ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C018AB40 (-_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CreateMonitorModeEnumerator(
        DXGMONITOR ***this,
        const struct DXGMONITOR::_DMMMONITORSOURCEMODE *a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  char *v6; // rax
  char *v7; // rcx
  DXGMONITOR **v8; // r8
  DXGMONITOR *v9; // rax
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( !a3 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  v6 = (char *)operator new[](0x78uLL, 0x4D677844u, PagedPool);
  v7 = v6;
  if ( v6 )
  {
    if ( a2 )
    {
      *(_OWORD *)v6 = *(_OWORD *)a2;
      *((_OWORD *)v6 + 1) = *((_OWORD *)a2 + 1);
      *((_OWORD *)v6 + 2) = *((_OWORD *)a2 + 2);
      *((_OWORD *)v6 + 3) = *((_OWORD *)a2 + 3);
      *((_OWORD *)v6 + 4) = *((_OWORD *)a2 + 4);
      *((_OWORD *)v6 + 5) = *((_OWORD *)a2 + 5);
    }
    else
    {
      *(_DWORD *)v6 = (*((_DWORD *)this + 39))++;
      *((_DWORD *)v6 + 22) = 0;
      *((_DWORD *)v6 + 2) = 0;
      *(_QWORD *)(v6 + 12) = -1LL;
      *(_QWORD *)(v6 + 20) = -1LL;
      *(_QWORD *)(v6 + 28) = -1LL;
      *((_QWORD *)v6 + 6) = 0xFFFFFFFFLL;
      *((_DWORD *)v6 + 14) = 8;
    }
    *((_QWORD *)v6 + 14) = a2;
    v8 = this[24];
    v9 = (DXGMONITOR *)(v6 + 96);
    *((_QWORD *)v7 + 12) = this + 23;
    *((_QWORD *)v7 + 13) = v8;
    if ( *v8 != (DXGMONITOR *)(this + 23) )
      __fastfail(3u);
    *v8 = v9;
    this[24] = (DXGMONITOR **)v9;
    result = 0LL;
    *a3 = (struct _D3DKMDT_MONITOR_SOURCE_MODE *)v7;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(0LL);
    WdLogEvent5_WdError(v12);
    return 3221225495LL;
  }
  return result;
}
