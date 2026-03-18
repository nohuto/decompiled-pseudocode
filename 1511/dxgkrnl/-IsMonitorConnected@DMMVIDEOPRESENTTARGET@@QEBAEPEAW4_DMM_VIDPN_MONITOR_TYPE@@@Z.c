/*
 * XREFs of ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00A61D4
 * Callers:
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A5D3C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     MonitorGetMonitorType @ 0x1C00A6338 (MonitorGetMonitorType.c)
 */

unsigned __int8 __fastcall DMMVIDEOPRESENTTARGET::IsMonitorConnected(
        DMMVIDEOPRESENTTARGET *this,
        enum _DMM_VIDPN_MONITOR_TYPE *a2)
{
  struct HDXGMONITOR__ *v3; // rsi
  __int64 v6; // rbx
  DXGADAPTER *v7; // rbx
  int MonitorType; // eax
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax

  *(_DWORD *)a2 = 0;
  v3 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 12);
  if ( !v3 )
    return 0;
  if ( !*((_QWORD *)this + 5) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
  if ( !*(_QWORD *)(v6 + 8) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  v7 = *(DXGADAPTER **)(*(_QWORD *)(v6 + 8) + 16LL);
  MonitorType = MonitorGetMonitorType(v7, v3);
  v10 = MonitorType;
  if ( MonitorType < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v13[3] = v3;
    v13[4] = v7;
    v13[5] = v10;
    WdLogEvent5_WdError(v13);
    *(_DWORD *)a2 = 0;
  }
  return 1;
}
