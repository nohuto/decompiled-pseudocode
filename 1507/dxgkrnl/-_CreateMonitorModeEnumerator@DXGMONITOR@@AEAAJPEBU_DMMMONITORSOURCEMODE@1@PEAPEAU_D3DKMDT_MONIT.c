/*
 * XREFs of ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C9710
 * Callers:
 *     ?CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C8220 (-CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMOD.c)
 *     ?AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0182D30 (-AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCE.c)
 *     ?AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01833E0 (-AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITOR.c)
 *     ?AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0183560 (-AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSO.c)
 *     ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C0186330 (-_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CreateMonitorModeEnumerator(
        DXGMONITOR ***this,
        const struct DXGMONITOR::_DMMMONITORSOURCEMODE *a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a3,
        __int64 a4)
{
  char *v7; // rax
  char *v8; // rcx
  DXGMONITOR **v9; // r8
  DXGMONITOR *v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  v7 = (char *)operator new[](0x78uLL, 0x4D677844u, PagedPool);
  v8 = v7;
  if ( v7 )
  {
    if ( a2 )
    {
      *(_OWORD *)v7 = *(_OWORD *)a2;
      *((_OWORD *)v7 + 1) = *((_OWORD *)a2 + 1);
      *((_OWORD *)v7 + 2) = *((_OWORD *)a2 + 2);
      *((_OWORD *)v7 + 3) = *((_OWORD *)a2 + 3);
      *((_OWORD *)v7 + 4) = *((_OWORD *)a2 + 4);
      *((_OWORD *)v7 + 5) = *((_OWORD *)a2 + 5);
    }
    else
    {
      *(_DWORD *)v7 = (*((_DWORD *)this + 39))++;
      *((_DWORD *)v7 + 22) = 0;
      *((_DWORD *)v7 + 2) = 0;
      *(_QWORD *)(v7 + 12) = -1LL;
      *(_QWORD *)(v7 + 20) = -1LL;
      *(_QWORD *)(v7 + 28) = -1LL;
      *((_QWORD *)v7 + 6) = 0xFFFFFFFFLL;
      *((_DWORD *)v7 + 14) = 8;
    }
    *((_QWORD *)v7 + 14) = a2;
    v9 = this[24];
    v10 = (DXGMONITOR *)(v7 + 96);
    *((_QWORD *)v8 + 12) = this + 23;
    *((_QWORD *)v8 + 13) = v9;
    if ( *v9 != (DXGMONITOR *)(this + 23) )
      __fastfail(3u);
    *v9 = v10;
    this[24] = (DXGMONITOR **)v10;
    result = 0LL;
    *a3 = (struct _D3DKMDT_MONITOR_SOURCE_MODE *)v8;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(0LL);
    WdLogEvent5_WdError(v13);
    return 3221225495LL;
  }
  return result;
}
