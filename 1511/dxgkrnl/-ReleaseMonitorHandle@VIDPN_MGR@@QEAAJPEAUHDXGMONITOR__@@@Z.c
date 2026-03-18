/*
 * XREFs of ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C008DC14
 * Callers:
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z @ 0x1C005D208 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z.c)
 *     ?GetMonitorIdFromTargetId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C005D5E4 (-GetMonitorIdFromTargetId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00BD198 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C017D700 (-IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C0181334 (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDPN_MGR::ReleaseMonitorHandle(VIDPN_MGR *this, struct HDXGMONITOR__ *a2)
{
  __int64 v5; // rax
  __int64 v6; // rax

  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  return MonitorReleaseMonitorHandle(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), a2, (PVOID)0x4E506456);
}
