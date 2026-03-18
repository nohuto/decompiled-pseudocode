/*
 * XREFs of MonitorSerializeMonitorPresentEvents @ 0x1C01B0B1C
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C019EE9C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C019F7F8 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_SerializeMonitorPresentEvent@MONITOR_MGR@@QEAAJPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION@@@Z @ 0x1C01AFC6C (-_SerializeMonitorPresentEvent@MONITOR_MGR@@QEAAJPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZA.c)
 */

__int64 __fastcall MonitorSerializeMonitorPresentEvents(
        DXGADAPTER *a1,
        unsigned __int64 *a2,
        struct _DMM_MONITORPRESENCEEVENTSET_SERIALIZATION *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  MONITOR_MGR *v11; // rcx
  __int64 v12; // rax

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)a1 + 266);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v9 + 24) = a1;
    WdLogEvent5_WdError(v9);
    return 3221225659LL;
  }
  v11 = *(MONITOR_MGR **)(v8 + 96);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  return MONITOR_MGR::_SerializeMonitorPresentEvent(v11, a2, a3);
}
