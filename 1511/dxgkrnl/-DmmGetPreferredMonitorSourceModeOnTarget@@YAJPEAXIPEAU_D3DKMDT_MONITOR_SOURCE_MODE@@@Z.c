/*
 * XREFs of ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00BD198
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C013E230 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C013EEBC (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C008DB7C (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C008DC14 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorGetPreferredMonitorSourceMode @ 0x1C00BD250 (MonitorGetPreferredMonitorSourceMode.c)
 */

__int64 __fastcall DmmGetPreferredMonitorSourceModeOnTarget(
        DXGADAPTER *a1,
        unsigned int a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  VIDPN_MGR *v8; // rbp
  int ConnectedMonitorHandle; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  struct HDXGMONITOR__ *v12; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  struct HDXGMONITOR__ *v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*((_QWORD *)a1 + 248) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *(VIDPN_MGR **)(*((_QWORD *)a1 + 248) + 112LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v17, (__int64)v8);
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v8, v4, &v16);
  v11 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v14 + 24) = v4;
    *(_QWORD *)(v14 + 32) = v11;
    WdLogEvent5_WdError(v14);
  }
  else
  {
    v12 = v16;
    if ( !v16 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v15);
    }
    LODWORD(v11) = MonitorGetPreferredMonitorSourceMode(v12, a3);
    VIDPN_MGR::ReleaseMonitorHandle(v8, v12);
  }
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v17 + 40));
  return (unsigned int)v11;
}
