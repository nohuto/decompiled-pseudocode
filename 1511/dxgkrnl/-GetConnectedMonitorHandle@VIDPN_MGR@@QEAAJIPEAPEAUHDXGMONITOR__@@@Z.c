/*
 * XREFs of ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C008DB7C
 * Callers:
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z @ 0x1C005D208 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z.c)
 *     ?GetMonitorIdFromTargetId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C005D5E4 (-GetMonitorIdFromTargetId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00BD198 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C017BFB0 (-AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3.c)
 *     ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C017D700 (-IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00070B8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C00C2E0C (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall VIDPN_MGR::GetConnectedMonitorHandle(VIDPN_MGR *this, unsigned int a2, struct HDXGMONITOR__ **a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int MonitorHandle; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = a2;
  if ( !a3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  *a3 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 12) + 72LL));
  v6 = *((_QWORD *)this + 12);
  if ( IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v6, v3) )
  {
    if ( !*((_QWORD *)this + 1) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v14);
    }
    MonitorHandle = MonitorGetMonitorHandle(
                      *(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL),
                      v3,
                      0,
                      (void *)0x4E506456,
                      (__int64)a3);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v12 + 24) = v3;
    if ( !*((_QWORD *)this + 1) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v13);
    }
    *(_QWORD *)(v12 + 32) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    WdLogEvent5_WdError(v12);
    MonitorHandle = -1071774971;
  }
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
  return MonitorHandle;
}
