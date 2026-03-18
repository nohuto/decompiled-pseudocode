/*
 * XREFs of ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C008E9E4
 * Callers:
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C008E76C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     MonitorGetMonitorType @ 0x1C009BB94 (MonitorGetMonitorType.c)
 */

unsigned __int8 __fastcall DMMVIDEOPRESENTTARGET::IsMonitorConnected(
        DMMVIDEOPRESENTTARGET *this,
        enum _DMM_VIDPN_MONITOR_TYPE *a2,
        __int64 a3,
        __int64 a4)
{
  struct HDXGMONITOR__ *v5; // rsi
  __int64 v8; // rbx
  DXGADAPTER *v9; // rbx
  int MonitorType; // eax
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax

  *(_DWORD *)a2 = 0;
  v5 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 12);
  if ( !v5 )
    return 0;
  if ( !*((_QWORD *)this + 5) )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
  if ( !*(_QWORD *)(v8 + 8) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  v9 = *(DXGADAPTER **)(*(_QWORD *)(v8 + 8) + 16LL);
  MonitorType = MonitorGetMonitorType(v9, v5);
  v12 = MonitorType;
  if ( MonitorType < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v15[3] = v5;
    v15[4] = v9;
    v15[5] = v12;
    WdLogEvent5_WdError(v15);
    *(_DWORD *)a2 = 0;
  }
  return 1;
}
