/*
 * XREFs of ?_ReleaseMonitorModeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01B4804
 * Callers:
 *     ?ReleaseModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01B1FB0 (-ReleaseModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMOD.c)
 *     ?ReleaseModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01B20E0 (-ReleaseModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODES.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReleaseMonitorModeEnumerator(
        DXGMONITOR *this,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2)
{
  DXGMONITOR *v3; // rdi
  __int64 v4; // rax
  DXGMONITOR **v5; // rdx
  DXGMONITOR *v6; // rax
  DXGMONITOR *v7; // rdx
  DXGMONITOR **v8; // rax
  __int64 v10; // rax

  v3 = this;
  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = (DXGMONITOR **)((char *)v3 + 184);
  if ( !a2 || (v6 = *v5, *v5 == (DXGMONITOR *)v5) )
  {
LABEL_13:
    v10 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = v3;
    WdLogEvent5_WdError(v10);
    return 3223192368LL;
  }
  else
  {
    this = (DXGMONITOR *)&a2[1];
    while ( v6 != this )
    {
      if ( v5 == (DXGMONITOR **)v6 )
        goto LABEL_13;
      v6 = *(DXGMONITOR **)v6;
    }
    v7 = *(DXGMONITOR **)this;
    v8 = *(DXGMONITOR ***)&a2[1].VideoSignalInfo.VideoStandard;
    if ( *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this || *v8 != this )
      __fastfail(3u);
    *v8 = v7;
    *((_QWORD *)v7 + 1) = v8;
    operator delete(a2);
    return 0LL;
  }
}
