/*
 * XREFs of ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00D388C
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C00D2CA4 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0139878 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C009653C (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00965D4 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorGetPreferredMonitorSourceMode @ 0x1C00D3944 (MonitorGetPreferredMonitorSourceMode.c)
 */

__int64 __fastcall DmmGetPreferredMonitorSourceModeOnTarget(
        DXGADAPTER *a1,
        unsigned int a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  VIDPN_MGR *v11; // rbp
  __int64 v12; // r9
  int ConnectedMonitorHandle; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  struct HDXGMONITOR__ *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  struct HDXGMONITOR__ *v25; // [rsp+40h] [rbp+8h] BYREF
  __int64 v26; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*((_QWORD *)a1 + 247) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(VIDPN_MGR **)(*((_QWORD *)a1 + 247) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v26, (__int64)v11);
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v11, (unsigned int)v4, &v25, v12);
  v18 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v23 + 24) = v4;
    *(_QWORD *)(v23 + 32) = v18;
    WdLogEvent5_WdError(v23);
  }
  else
  {
    v19 = v25;
    if ( !v25 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
      WdLogEvent5_WdAssertion(v24);
    }
    LODWORD(v18) = MonitorGetPreferredMonitorSourceMode(v19, a3);
    VIDPN_MGR::ReleaseMonitorHandle(v11, v19, v20, v21);
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26 + 40));
  return (unsigned int)v18;
}
