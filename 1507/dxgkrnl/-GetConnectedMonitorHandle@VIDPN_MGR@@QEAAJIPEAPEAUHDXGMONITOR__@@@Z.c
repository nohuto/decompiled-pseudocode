/*
 * XREFs of ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C009653C
 * Callers:
 *     ?GetMonitorIdFromTargetId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C005F310 (-GetMonitorIdFromTargetId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z @ 0x1C00AF6E0 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00D388C (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C0177B50 (-AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3.c)
 *     ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C01792A0 (-IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004BA8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C00AF52C (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall VIDPN_MGR::GetConnectedMonitorHandle(
        VIDPN_MGR *this,
        __int64 a2,
        struct HDXGMONITOR__ **a3,
        __int64 a4)
{
  __int64 v4; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int MonitorHandle; // edi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax

  v4 = (unsigned int)a2;
  if ( !a3 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  *a3 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 12) + 72LL));
  v7 = *((_QWORD *)this + 12);
  if ( IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v7, v4) )
  {
    if ( !*((_QWORD *)this + 1) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      WdLogEvent5_WdAssertion(v21);
    }
    MonitorHandle = MonitorGetMonitorHandle(
                      *(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL),
                      v4,
                      0,
                      (void *)0x4E506456,
                      (__int64)a3);
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v17 + 24) = v4;
    if ( !*((_QWORD *)this + 1) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v16, v15, v18, v19);
      WdLogEvent5_WdAssertion(v20);
    }
    *(_QWORD *)(v17 + 32) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    WdLogEvent5_WdError(v17);
    MonitorHandle = -1071774971;
  }
  if ( v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
  return MonitorHandle;
}
