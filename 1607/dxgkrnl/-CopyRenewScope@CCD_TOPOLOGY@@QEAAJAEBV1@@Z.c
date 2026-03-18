/*
 * XREFs of ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01AAD64
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179100 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179C4C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01AC31C (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C008AB70 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C008BC5C (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C008E13C (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x1C00B6B84 (-RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B8BD4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyRenewScope(CCD_TOPOLOGY *this, const struct CCD_TOPOLOGY *a2)
{
  __int64 v3; // rcx
  int ConnectivitySetId; // ebx
  CCD_BTL *v5; // rcx
  int v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h]
  __int64 v9; // [rsp+30h] [rbp-38h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int16 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  ConnectivitySetId = CCD_TOPOLOGY::CopyInheritScope(this, a2);
  if ( ConnectivitySetId >= 0 )
  {
    v7 = 0;
    v8 = 0LL;
    v9 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v10 = 0LL;
    v11 = 0;
    CCD_BTL::Global(v3);
    ConnectivitySetId = CCD_BTL::RetrieveConnectivitySetId(v5, (struct CCD_SET_STRING_ID *)&v7);
    if ( ConnectivitySetId >= 0 )
      ConnectivitySetId = CCD_TOPOLOGY::SetConnectivityHash(this, (const struct CCD_SET_STRING_ID *)&v7);
    CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v7);
  }
  return (unsigned int)ConnectivitySetId;
}
